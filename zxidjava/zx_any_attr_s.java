/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zx_any_attr_s {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zx_any_attr_s(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zx_any_attr_s obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zx_any_attr_s(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setSs(zx_str value) {
    zxidjniJNI.zx_any_attr_s_ss_set(swigCPtr, zx_str.getCPtr(value));
  }

  public zx_str getSs() {
    long cPtr = zxidjniJNI.zx_any_attr_s_ss_get(swigCPtr);
    return (cPtr == 0) ? null : new zx_str(cPtr, false);
  }

  public void setName_len(int value) {
    zxidjniJNI.zx_any_attr_s_name_len_set(swigCPtr, value);
  }

  public int getName_len() {
    return zxidjniJNI.zx_any_attr_s_name_len_get(swigCPtr);
  }

  public void setName(String value) {
    zxidjniJNI.zx_any_attr_s_name_set(swigCPtr, value);
  }

  public String getName() {
    return zxidjniJNI.zx_any_attr_s_name_get(swigCPtr);
  }

  public zx_any_attr_s() {
    this(zxidjniJNI.new_zx_any_attr_s(), true);
  }

}
