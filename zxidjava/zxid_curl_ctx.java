/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zxid_curl_ctx {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zxid_curl_ctx(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zxid_curl_ctx obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zxid_curl_ctx(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setP(String value) {
    zxidjniJNI.zxid_curl_ctx_p_set(swigCPtr, value);
  }

  public String getP() {
    return zxidjniJNI.zxid_curl_ctx_p_get(swigCPtr);
  }

  public void setLim(String value) {
    zxidjniJNI.zxid_curl_ctx_lim_set(swigCPtr, value);
  }

  public String getLim() {
    return zxidjniJNI.zxid_curl_ctx_lim_get(swigCPtr);
  }

  public zxid_curl_ctx() {
    this(zxidjniJNI.new_zxid_curl_ctx(), true);
  }

}
