/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.29
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package zxidjava;

public class zxid_ses {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected zxid_ses(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(zxid_ses obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      zxidjniJNI.delete_zxid_ses(swigCPtr);
    }
    swigCPtr = 0;
  }

  public void setMagic(long value) {
    zxidjniJNI.zxid_ses_magic_set(swigCPtr, value);
  }

  public long getMagic() {
    return zxidjniJNI.zxid_ses_magic_get(swigCPtr);
  }

  public void setSid(String value) {
    zxidjniJNI.zxid_ses_sid_set(swigCPtr, value);
  }

  public String getSid() {
    return zxidjniJNI.zxid_ses_sid_get(swigCPtr);
  }

  public void setNid(String value) {
    zxidjniJNI.zxid_ses_nid_set(swigCPtr, value);
  }

  public String getNid() {
    return zxidjniJNI.zxid_ses_nid_get(swigCPtr);
  }

  public void setNidfmt(char value) {
    zxidjniJNI.zxid_ses_nidfmt_set(swigCPtr, value);
  }

  public char getNidfmt() {
    return zxidjniJNI.zxid_ses_nidfmt_get(swigCPtr);
  }

  public void setSigres(char value) {
    zxidjniJNI.zxid_ses_sigres_set(swigCPtr, value);
  }

  public char getSigres() {
    return zxidjniJNI.zxid_ses_sigres_get(swigCPtr);
  }

  public void setPad2(char value) {
    zxidjniJNI.zxid_ses_pad2_set(swigCPtr, value);
  }

  public char getPad2() {
    return zxidjniJNI.zxid_ses_pad2_get(swigCPtr);
  }

  public void setPad3(char value) {
    zxidjniJNI.zxid_ses_pad3_set(swigCPtr, value);
  }

  public char getPad3() {
    return zxidjniJNI.zxid_ses_pad3_get(swigCPtr);
  }

  public void setSso_a7n_path(String value) {
    zxidjniJNI.zxid_ses_sso_a7n_path_set(swigCPtr, value);
  }

  public String getSso_a7n_path() {
    return zxidjniJNI.zxid_ses_sso_a7n_path_get(swigCPtr);
  }

  public void setA7n(SWIGTYPE_p_zx_sa_Assertion_s value) {
    zxidjniJNI.zxid_ses_a7n_set(swigCPtr, SWIGTYPE_p_zx_sa_Assertion_s.getCPtr(value));
  }

  public SWIGTYPE_p_zx_sa_Assertion_s getA7n() {
    long cPtr = zxidjniJNI.zxid_ses_a7n_get(swigCPtr);
    return (cPtr == 0) ? null : new SWIGTYPE_p_zx_sa_Assertion_s(cPtr, false);
  }

  public void setA7n11(SWIGTYPE_p_zx_sa11_Assertion_s value) {
    zxidjniJNI.zxid_ses_a7n11_set(swigCPtr, SWIGTYPE_p_zx_sa11_Assertion_s.getCPtr(value));
  }

  public SWIGTYPE_p_zx_sa11_Assertion_s getA7n11() {
    long cPtr = zxidjniJNI.zxid_ses_a7n11_get(swigCPtr);
    return (cPtr == 0) ? null : new SWIGTYPE_p_zx_sa11_Assertion_s(cPtr, false);
  }

  public void setA7n12(SWIGTYPE_p_zx_ff12_Assertion_s value) {
    zxidjniJNI.zxid_ses_a7n12_set(swigCPtr, SWIGTYPE_p_zx_ff12_Assertion_s.getCPtr(value));
  }

  public SWIGTYPE_p_zx_ff12_Assertion_s getA7n12() {
    long cPtr = zxidjniJNI.zxid_ses_a7n12_get(swigCPtr);
    return (cPtr == 0) ? null : new SWIGTYPE_p_zx_ff12_Assertion_s(cPtr, false);
  }

  public void setSesbuf(String value) {
    zxidjniJNI.zxid_ses_sesbuf_set(swigCPtr, value);
  }

  public String getSesbuf() {
    return zxidjniJNI.zxid_ses_sesbuf_get(swigCPtr);
  }

  public void setSso_a7n_buf(String value) {
    zxidjniJNI.zxid_ses_sso_a7n_buf_set(swigCPtr, value);
  }

  public String getSso_a7n_buf() {
    return zxidjniJNI.zxid_ses_sso_a7n_buf_get(swigCPtr);
  }

  public zxid_ses() {
    this(zxidjniJNI.new_zxid_ses(), true);
  }

}
