/* zxidsrvlet.java  -  SAML SSO Java/Tomcat servlet script that calls libzxid using JNI
 * Copyright (c) 2007-2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidsrvlet.java,v 1.1 2009-10-18 12:39:10 sampo Exp $
 * 12.1.2007, created --Sampo
 * 16.10.2009, refined from zxidhlo example to truly useful servlet that populates session --Sampo
 *
 * See also: README-zxid section 10 "zxid_simple() API"
 */

import zxidjava.*;
import java.io.*;
import java.net.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class zxidsrvlet extends HttpServlet {
    static final String conf = "URL=http://sp1.zxidsp.org:8080/sso&PATH=/var/zxid/";
    static zxidjava.zxid_conf cf;
    static {
	// CONFIG: You must have created /var/zxid directory hierarchy. See `make dir'
	// CONFIG: You must create edit the URL to match your domain name and port
	System.loadLibrary("zxidjni");
	cf = zxidjni.new_conf_to_cf(conf);
    }
    
    //public static void main(String argv[]) throws java.io.IOException  {  }
    public void do_zxid(HttpServletRequest req, HttpServletResponse res, String qs)
	throws ServletException, IOException
    {
	if (req.getParameter("gr") != null || req.getParameter("gl") != null)
	    req.getSession(true).invalidate();  // Invalidate local ses in case of SLO
	String ret = zxidjni.simple_cf(cf, -1, qs, null, 0x3d54);  // QS response requested
	System.err.print(ret);
	switch (ret.charAt(0)) {
	case 'L':  /* Redirect: ret == "LOCATION: urlCRLF2" */
	    res.sendRedirect(ret.substring(10, ret.length() - 4));
	    return;
	case '<':
	    switch (ret.charAt(1)) {
	    case 's':  /* <se:  SOAP envelope */
	    case 'm':  /* <m20: metadata */
		res.setContentType("text/xml");
		break;
	    default:
		res.setContentType("text/html");
		break;
	    }
	    res.setContentLength(ret.length());
	    res.getOutputStream().print(ret);
	    break;
	case 'd': /* Logged in case (both LDIF and QS will start by "dn") */
	    HttpSession ses = req.getSession(true);
	    String[] avs = ret.split("&");
	    for (int i = 0; i < avs.length; ++i) {
		ses.putValue(avs[i].split("=")[0], URLDecoder.decode(avs[i].split("=")[1]));
	    }
	    System.err.print("Logged in. jses("+ses.getId()+") rs("+ses.getValue("rs")+")\n");
	    res.sendRedirect(URLDecoder.decode(ses.getValue("rs").toString()));
	    break;
	default:
	    System.err.print("Unknown zxid_simple() response("+ret+").\n");
	}
    }

    public void doGet(HttpServletRequest req, HttpServletResponse res)
	throws ServletException, IOException
    {
	System.err.print("Start GET...\n");
	// LECP/ECP PAOS header checks
	do_zxid(req, res, req.getQueryString());
    }

    public void doPost(HttpServletRequest req, HttpServletResponse res)
	throws ServletException, IOException
    {
	System.err.print("Start POST...\n");
	String qs;
	int len = req.getContentLength();
	byte[] b = new byte[len];
	int here, got;
	for (here = 0; here < len; here += got)
	    got = req.getInputStream().read(b, here, len - here);
	qs = new String(b, 0, len);
	do_zxid(req, res, qs);
    }
}

/* EOF */
