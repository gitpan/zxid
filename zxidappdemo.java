/* zxidappdemo.java  -  Demonstrate detecting missing session and redirection to zxidsrvlet
 * Copyright (c) 2009 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 * Author: Sampo Kellomaki (sampo@iki.fi)
 * This is confidential unpublished proprietary source code of the author.
 * NO WARRANTY, not even implied warranties. Contains trade secrets.
 * Distribution prohibited unless authorized in writing.
 * Licensed under Apache License 2.0, see file COPYING.
 * $Id: zxidappdemo.java,v 1.1 2009-10-18 12:39:10 sampo Exp $
 * 16.10.2009, created --Sampo
 *
 * This servlet plays the role of "payload" servlet in ZXID SSO servlet
 * integration demonstration. It illustrates the steps
 * 1.  Detect that there is no session and redirect to zxidsrvlet; and
 * 7.  Access to protected resource, with attributes already populated
 *     to the HttpSession (JSESSION)
 * 9.  Making a web service call by directly calling zxid_call() (*** TODO)
 *
 * See also: zxid-java.pd
 */

import zxidjava.*;   // Pull in the zxidjni.az() API
import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class zxidappdemo extends HttpServlet {
    public void doGet(HttpServletRequest req, HttpServletResponse res)
	throws ServletException, IOException
    {
	String fullURL = req.getRequestURI();
	if (req.getQueryString() != null)
	    fullURL += "?" + req.getQueryString();
	System.err.print("Start ZXID App Demo GET("+fullURL+")...\n");
	HttpSession ses = req.getSession(false);  // Important: do not allow automatic session.
	if (ses == null) {                        // Instead, redirect to sso servlet.
	    res.sendRedirect("sso?o=E&fr=" + fullURL);
	    return;
	}
	
	res.setContentType("text/html");
	res.getOutputStream().print("<title>ZXID Demo App Protected Content</title><body><h1>ZXID Demo App Protected Content at " + fullURL + "</H1>\n");

	// Render logout buttons (optional)

	res.getOutputStream().print("[<a href=\"sso?gl=1&s="+ses.getValue("sesid")+"\">Local Logout</a> | <a href=\"sso?gr=1&s="+ses.getValue("sesid")+"\">Single Logout</a>]\n");

	// The SSO servlet will have done one iteration of authorization. The following
	// serves to illustrate, how to explicitly call a PDP from your code.

	if (zxidjni.az("PATH=/var/zxid/", "Action=Show", ses.getValue("sesid").toString()) == 0) {
	    res.getOutputStream().print("<p><b>Denied.</b> Normally page would not be shown, but we show the session attributes for debugging purposes.\n");
	    //res.setStatus(302, "Denied");
	} else {
	    res.getOutputStream().print("<p>Authorized.\n");
	}

	// Render protected content page (your application starts working)

	res.getOutputStream().print("<pre>HttpSession dump:\n");
	String[] val_names = ses.getValueNames();
	for (int i = 0; i < val_names.length; ++i) {
	    res.getOutputStream().print(val_names[i] + ": " + ses.getValue(val_names[i]) + "\n");
	}
	
	res.getOutputStream().print("</pre>");
    }
}

/* EOF */
