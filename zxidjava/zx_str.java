/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zx_str {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zx_str(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zx_str obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zx_str(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setG(zx_node_s value) {
    zxidjniJNI.zx_str_g_set(swigCPtr, zx_node_s.getCPtr(value));
  }

  public zx_node_s getG() {
    long cPtr = zxidjniJNI.zx_str_g_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_node_s(cPtr, false);
  }

  public void setLen(int value) {
    zxidjniJNI.zx_str_len_set(swigCPtr, value);
  }

  public int getLen() {
    return zxidjniJNI.zx_str_len_get(swigCPtr);
  }

  public void setS(String value) {
    zxidjniJNI.zx_str_s_set(swigCPtr, value);
  }

  public String getS() {
    return zxidjniJNI.zx_str_s_get(swigCPtr);
  }

  public zx_str() {
    this(zxidjniJNI.new_zx_str(), true);
  }

}
