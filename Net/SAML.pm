# This file was created automatically by SWIG 1.3.29.
# Don't modify this file, modify the SWIG interface instead.
package Net::SAML;
require Exporter;
require DynaLoader;
@ISA = qw(Exporter DynaLoader);
package Net::SAMLc;
bootstrap Net::SAML;
package Net::SAML;
@EXPORT = qw( );

# ---------- BASE METHODS -------------

package Net::SAML;

sub TIEHASH {
    my ($classname,$obj) = @_;
    return bless $obj, $classname;
}

sub CLEAR { }

sub FIRSTKEY { }

sub NEXTKEY { }

sub FETCH {
    my ($self,$field) = @_;
    my $member_func = "swig_${field}_get";
    $self->$member_func();
}

sub STORE {
    my ($self,$field,$newval) = @_;
    my $member_func = "swig_${field}_set";
    $self->$member_func($newval);
}

sub this {
    my $ptr = shift;
    return tied(%$ptr);
}


# ------- FUNCTION WRAPPERS --------

package Net::SAML;

*zx_new_simple_elem = *Net::SAMLc::zx_new_simple_elem;
*zx_ref_len_simple_elem = *Net::SAMLc::zx_ref_len_simple_elem;
*zx_ref_simple_elem = *Net::SAMLc::zx_ref_simple_elem;
*zx_dup_len_simple_elem = *Net::SAMLc::zx_dup_len_simple_elem;
*zx_dup_simple_elem = *Net::SAMLc::zx_dup_simple_elem;
*zx_ref_str = *Net::SAMLc::zx_ref_str;
*zx_ref_len_str = *Net::SAMLc::zx_ref_len_str;
*zx_new_len_str = *Net::SAMLc::zx_new_len_str;
*zx_dup_str = *Net::SAMLc::zx_dup_str;
*zx_dup_len_str = *Net::SAMLc::zx_dup_len_str;
*zx_alloc_sprintf = *Net::SAMLc::zx_alloc_sprintf;
*zx_strf = *Net::SAMLc::zx_strf;
*zx_str_free = *Net::SAMLc::zx_str_free;
*zx_str_to_c = *Net::SAMLc::zx_str_to_c;
*zx_str_conv = *Net::SAMLc::zx_str_conv;
*zx_str_ends_in = *Net::SAMLc::zx_str_ends_in;
*zx_memmem = *Net::SAMLc::zx_memmem;
*zx_alloc = *Net::SAMLc::zx_alloc;
*zx_zalloc = *Net::SAMLc::zx_zalloc;
*zx_free = *Net::SAMLc::zx_free;
*zx_dup_cstr = *Net::SAMLc::zx_dup_cstr;
*zx_reset_ctx = *Net::SAMLc::zx_reset_ctx;
*zx_init_ctx = *Net::SAMLc::zx_init_ctx;
*zx_date_time_to_secs = *Net::SAMLc::zx_date_time_to_secs;
*write2_or_append_lock_c_path = *Net::SAMLc::write2_or_append_lock_c_path;
*zx_report_openssl_error = *Net::SAMLc::zx_report_openssl_error;
*zx_fix_any_elem_dec = *Net::SAMLc::zx_fix_any_elem_dec;
*zx_locate_ns_by_prefix = *Net::SAMLc::zx_locate_ns_by_prefix;
*zx_is_ns_prefix = *Net::SAMLc::zx_is_ns_prefix;
*zx_prefix_seen = *Net::SAMLc::zx_prefix_seen;
*zx_prefix_seen_whine = *Net::SAMLc::zx_prefix_seen_whine;
*zx_scan_xmlns = *Net::SAMLc::zx_scan_xmlns;
*zx_pop_seen = *Net::SAMLc::zx_pop_seen;
*zx_raw_cipher = *Net::SAMLc::zx_raw_cipher;
*zx_rsa_pub_enc = *Net::SAMLc::zx_rsa_pub_enc;
*zx_rsa_pub_dec = *Net::SAMLc::zx_rsa_pub_dec;
*zx_rsa_priv_dec = *Net::SAMLc::zx_rsa_priv_dec;
*zx_rsa_priv_enc = *Net::SAMLc::zx_rsa_priv_enc;
*zx_get_rsa_pub_from_cert = *Net::SAMLc::zx_get_rsa_pub_from_cert;
*zx_rand = *Net::SAMLc::zx_rand;
*zx_tok_by_ns = *Net::SAMLc::zx_tok_by_ns;
*zx_len_xmlns_if_not_seen = *Net::SAMLc::zx_len_xmlns_if_not_seen;
*zx_enc_xmlns_if_not_seen = *Net::SAMLc::zx_enc_xmlns_if_not_seen;
*zx_add_xmlns_if_not_seen = *Net::SAMLc::zx_add_xmlns_if_not_seen;
*zx_enc_seen = *Net::SAMLc::zx_enc_seen;
*zx_len_so_common = *Net::SAMLc::zx_len_so_common;
*zx_len_wo_common = *Net::SAMLc::zx_len_wo_common;
*zx_enc_unknown_attrs = *Net::SAMLc::zx_enc_unknown_attrs;
*zx_enc_so_unknown_elems_and_content = *Net::SAMLc::zx_enc_so_unknown_elems_and_content;
*zx_easy_enc_common = *Net::SAMLc::zx_easy_enc_common;
*zx_attr_so_len = *Net::SAMLc::zx_attr_so_len;
*zx_attr_so_enc = *Net::SAMLc::zx_attr_so_enc;
*zx_attr_wo_len = *Net::SAMLc::zx_attr_wo_len;
*zx_attr_wo_enc = *Net::SAMLc::zx_attr_wo_enc;
*zx_free_attr = *Net::SAMLc::zx_free_attr;
*zx_free_elem_common = *Net::SAMLc::zx_free_elem_common;
*zx_free_simple_elems = *Net::SAMLc::zx_free_simple_elems;
*zx_prepare_dec_ctx = *Net::SAMLc::zx_prepare_dec_ctx;
*zx_scan_data = *Net::SAMLc::zx_scan_data;
*zx_scan_pi_or_comment = *Net::SAMLc::zx_scan_pi_or_comment;
*zx_dec_unknown_attr = *Net::SAMLc::zx_dec_unknown_attr;
*zx_dec_attr_val = *Net::SAMLc::zx_dec_attr_val;
*zx_xml_parse_err = *Net::SAMLc::zx_xml_parse_err;
*zx_len_inc_ns = *Net::SAMLc::zx_len_inc_ns;
*zx_add_inc_ns = *Net::SAMLc::zx_add_inc_ns;
*zx_enc_inc_ns = *Net::SAMLc::zx_enc_inc_ns;
*simple = *Net::SAMLc::zxid_simple;
*idp_list = *Net::SAMLc::zxid_idp_list;
*idp_select = *Net::SAMLc::zxid_idp_select;
*fed_mgmt = *Net::SAMLc::zxid_fed_mgmt;
*new_conf_to_cf = *Net::SAMLc::zxid_new_conf_to_cf;
*simple_cf = *Net::SAMLc::zxid_simple_cf;
*idp_list_cf = *Net::SAMLc::zxid_idp_list_cf;
*idp_select_cf = *Net::SAMLc::zxid_idp_select_cf;
*fed_mgmt_cf = *Net::SAMLc::zxid_fed_mgmt_cf;
*conf_to_cf_len = *Net::SAMLc::zxid_conf_to_cf_len;
*simple_len = *Net::SAMLc::zxid_simple_len;
*idp_list_len = *Net::SAMLc::zxid_idp_list_len;
*idp_select_len = *Net::SAMLc::zxid_idp_select_len;
*fed_mgmt_len = *Net::SAMLc::zxid_fed_mgmt_len;
*idp_select_zxstr_cf = *Net::SAMLc::zxid_idp_select_zxstr_cf;
*simple_ab_pep = *Net::SAMLc::zxid_simple_ab_pep;
*simple_ses_active_cf = *Net::SAMLc::zxid_simple_ses_active_cf;
*simple_no_ses_cf = *Net::SAMLc::zxid_simple_no_ses_cf;
*zxsig_sign = *Net::SAMLc::zxsig_sign;
*zxsig_validate = *Net::SAMLc::zxsig_validate;
*zxsig_data_rsa_sha1 = *Net::SAMLc::zxsig_data_rsa_sha1;
*zxsig_verify_data_rsa_sha1 = *Net::SAMLc::zxsig_verify_data_rsa_sha1;
*zxenc_symkey_dec = *Net::SAMLc::zxenc_symkey_dec;
*zxenc_privkey_dec = *Net::SAMLc::zxenc_privkey_dec;
*zxenc_symkey_enc = *Net::SAMLc::zxenc_symkey_enc;
*zxenc_pubkey_enc = *Net::SAMLc::zxenc_pubkey_enc;
*zxlog_write_line = *Net::SAMLc::zxlog_write_line;
*zxlog_path = *Net::SAMLc::zxlog_path;
*zxlog_dup_check = *Net::SAMLc::zxlog_dup_check;
*zxlog_blob = *Net::SAMLc::zxlog_blob;
*zxlog = *Net::SAMLc::zxlog;
*get_ent_from_file = *Net::SAMLc::zxid_get_ent_from_file;
*get_ent_from_cache = *Net::SAMLc::zxid_get_ent_from_cache;
*write_ent_to_cache = *Net::SAMLc::zxid_write_ent_to_cache;
*parse_meta = *Net::SAMLc::zxid_parse_meta;
*get_meta_ss = *Net::SAMLc::zxid_get_meta_ss;
*get_meta = *Net::SAMLc::zxid_get_meta;
*get_ent_ss = *Net::SAMLc::zxid_get_ent_ss;
*get_ent = *Net::SAMLc::zxid_get_ent;
*get_ent_by_succinct_id = *Net::SAMLc::zxid_get_ent_by_succinct_id;
*get_ent_by_sha1_name = *Net::SAMLc::zxid_get_ent_by_sha1_name;
*load_cot_cache = *Net::SAMLc::zxid_load_cot_cache;
*key_info = *Net::SAMLc::zxid_key_info;
*key_desc = *Net::SAMLc::zxid_key_desc;
*ar_desc = *Net::SAMLc::zxid_ar_desc;
*sso_desc = *Net::SAMLc::zxid_sso_desc;
*slo_desc = *Net::SAMLc::zxid_slo_desc;
*mni_desc = *Net::SAMLc::zxid_mni_desc;
*ac_desc = *Net::SAMLc::zxid_ac_desc;
*idp_sso_desc = *Net::SAMLc::zxid_idp_sso_desc;
*sp_sso_desc = *Net::SAMLc::zxid_sp_sso_desc;
*sp_meta = *Net::SAMLc::zxid_sp_meta;
*send_sp_meta = *Net::SAMLc::zxid_send_sp_meta;
*sp_carml = *Net::SAMLc::zxid_sp_carml;
*my_entity_id = *Net::SAMLc::zxid_my_entity_id;
*my_cdc_url = *Net::SAMLc::zxid_my_cdc_url;
*my_issuer = *Net::SAMLc::zxid_my_issuer;
*sha1_file = *Net::SAMLc::zxid_sha1_file;
*extract_cert = *Net::SAMLc::zxid_extract_cert;
*extract_private_key = *Net::SAMLc::zxid_extract_private_key;
*read_cert = *Net::SAMLc::zxid_read_cert;
*read_private_key = *Net::SAMLc::zxid_read_private_key;
*set_opt = *Net::SAMLc::zxid_set_opt;
*url_set = *Net::SAMLc::zxid_url_set;
*init_conf = *Net::SAMLc::zxid_init_conf;
*init_conf_ctx = *Net::SAMLc::zxid_init_conf_ctx;
*new_conf = *Net::SAMLc::zxid_new_conf;
*parse_conf_raw = *Net::SAMLc::zxid_parse_conf_raw;
*parse_conf = *Net::SAMLc::zxid_parse_conf;
*mk_self_sig_cert = *Net::SAMLc::zxid_mk_self_sig_cert;
*load_map = *Net::SAMLc::zxid_load_map;
*load_need = *Net::SAMLc::zxid_load_need;
*load_atsrc = *Net::SAMLc::zxid_load_atsrc;
*new_at = *Net::SAMLc::zxid_new_at;
*load_cstr_list = *Net::SAMLc::zxid_load_cstr_list;
*is_needed = *Net::SAMLc::zxid_is_needed;
*find_map = *Net::SAMLc::zxid_find_map;
*find_cstr_list = *Net::SAMLc::zxid_find_cstr_list;
*find_at = *Net::SAMLc::zxid_find_at;
*parse_cgi = *Net::SAMLc::zxid_parse_cgi;
*new_cgi = *Net::SAMLc::zxid_new_cgi;
*get_sid_from_cookie = *Net::SAMLc::zxid_get_sid_from_cookie;
*alloc_ses = *Net::SAMLc::zxid_alloc_ses;
*fetch_ses = *Net::SAMLc::zxid_fetch_ses;
*get_ses = *Net::SAMLc::zxid_get_ses;
*put_ses = *Net::SAMLc::zxid_put_ses;
*del_ses = *Net::SAMLc::zxid_del_ses;
*get_ses_sso_a7n = *Net::SAMLc::zxid_get_ses_sso_a7n;
*get_ses_idp = *Net::SAMLc::zxid_get_ses_idp;
*find_ses = *Net::SAMLc::zxid_find_ses;
*pool_to_ldif = *Net::SAMLc::zxid_pool_to_ldif;
*pool_to_json = *Net::SAMLc::zxid_pool_to_json;
*pool_to_qs = *Net::SAMLc::zxid_pool_to_qs;
*ses_to_pool = *Net::SAMLc::zxid_ses_to_pool;
*add_attr_to_pool = *Net::SAMLc::zxid_add_attr_to_pool;
*add_qs_to_pool = *Net::SAMLc::zxid_add_qs_to_pool;
*parse_mni = *Net::SAMLc::zxid_parse_mni;
*put_user = *Net::SAMLc::zxid_put_user;
*get_user_nameid = *Net::SAMLc::zxid_get_user_nameid;
*user_change_nameid = *Net::SAMLc::zxid_user_change_nameid;
*pw_authn = *Net::SAMLc::zxid_pw_authn;
*version = *Net::SAMLc::zxid_version;
*version_str = *Net::SAMLc::zxid_version_str;
*date_time = *Net::SAMLc::zxid_date_time;
*mk_id = *Net::SAMLc::zxid_mk_id;
*soap_call_raw = *Net::SAMLc::zxid_soap_call_raw;
*lecp_check = *Net::SAMLc::zxid_lecp_check;
*cdc_read = *Net::SAMLc::zxid_cdc_read;
*cdc_check = *Net::SAMLc::zxid_cdc_check;
*soap_call_envelope = *Net::SAMLc::zxid_soap_call_envelope;
*soap_call_hdr_body = *Net::SAMLc::zxid_soap_call_hdr_body;
*soap_call_body = *Net::SAMLc::zxid_soap_call_body;
*soap_cgi_resp_body = *Net::SAMLc::zxid_soap_cgi_resp_body;
*post_enc = *Net::SAMLc::zxid_saml2_post_enc;
*redir_enc = *Net::SAMLc::zxid_saml2_redir_enc;
*redir_url = *Net::SAMLc::zxid_saml2_redir_url;
*redir = *Net::SAMLc::zxid_saml2_redir;
*resp_redir = *Net::SAMLc::zxid_saml2_resp_redir;
*ok = *Net::SAMLc::zxid_saml_ok;
*decrypt_nameid = *Net::SAMLc::zxid_decrypt_nameid;
*decrypt_newnym = *Net::SAMLc::zxid_decrypt_newnym;
*chk_sig = *Net::SAMLc::zxid_chk_sig;
*map_val = *Net::SAMLc::zxid_map_val;
*idp_loc_raw = *Net::SAMLc::zxid_idp_loc_raw;
*idp_loc = *Net::SAMLc::zxid_idp_loc;
*idp_soap = *Net::SAMLc::zxid_idp_soap;
*sp_loc_by_index_raw = *Net::SAMLc::zxid_sp_loc_by_index_raw;
*sp_loc_raw = *Net::SAMLc::zxid_sp_loc_raw;
*sp_loc = *Net::SAMLc::zxid_sp_loc;
*sp_soap = *Net::SAMLc::zxid_sp_soap;
*decode_redir_or_post = *Net::SAMLc::zxid_decode_redir_or_post;
*sp_dispatch = *Net::SAMLc::zxid_sp_dispatch;
*sp_soap_dispatch = *Net::SAMLc::zxid_sp_soap_dispatch;
*sp_soap_parse = *Net::SAMLc::zxid_sp_soap_parse;
*idp_dispatch = *Net::SAMLc::zxid_idp_dispatch;
*idp_soap_dispatch = *Net::SAMLc::zxid_idp_soap_dispatch;
*idp_soap_parse = *Net::SAMLc::zxid_idp_soap_parse;
*add_ldif_attributes = *Net::SAMLc::zxid_add_ldif_attributes;
*idp_sso = *Net::SAMLc::zxid_idp_sso;
*pick_sso_profile = *Net::SAMLc::zxid_pick_sso_profile;
*start_sso = *Net::SAMLc::zxid_start_sso;
*start_sso_url = *Net::SAMLc::zxid_start_sso_url;
*start_sso_location = *Net::SAMLc::zxid_start_sso_location;
*sp_deref_art = *Net::SAMLc::zxid_sp_deref_art;
*sp_sso_finalize = *Net::SAMLc::zxid_sp_sso_finalize;
*sp_anon_finalize = *Net::SAMLc::zxid_sp_anon_finalize;
*map_nid_fmt = *Net::SAMLc::zxid_saml2_map_nid_fmt;
*map_protocol_binding = *Net::SAMLc::zxid_saml2_map_protocol_binding;
*protocol_binding_map_saml2 = *Net::SAMLc::zxid_protocol_binding_map_saml2;
*map_authn_ctx = *Net::SAMLc::zxid_saml2_map_authn_ctx;
*issuer = *Net::SAMLc::zxid_issuer;
*sigres_map = *Net::SAMLc::zxid_sigres_map;
*validate_conditions = *Net::SAMLc::zxid_validate_conditions;
*sp_slo_soap = *Net::SAMLc::zxid_sp_slo_soap;
*sp_slo_redir = *Net::SAMLc::zxid_sp_slo_redir;
*sp_slo_do = *Net::SAMLc::zxid_sp_slo_do;
*idp_slo_do = *Net::SAMLc::zxid_idp_slo_do;
*slo_resp_redir = *Net::SAMLc::zxid_slo_resp_redir;
*sp_mni_soap = *Net::SAMLc::zxid_sp_mni_soap;
*sp_mni_redir = *Net::SAMLc::zxid_sp_mni_redir;
*mni_do = *Net::SAMLc::zxid_mni_do;
*mni_do_ss = *Net::SAMLc::zxid_mni_do_ss;
*pep_az_soap = *Net::SAMLc::zxid_pep_az_soap;
*az_cf_ses = *Net::SAMLc::zxid_az_cf_ses;
*az_cf = *Net::SAMLc::zxid_az_cf;
*az = *Net::SAMLc::zxid_az;
*find_attribute = *Net::SAMLc::zxid_find_attribute;
*mk_authn_req = *Net::SAMLc::zxid_mk_authn_req;
*mk_art_deref = *Net::SAMLc::zxid_mk_art_deref;
*mk_Status = *Net::SAMLc::zxid_mk_Status;
*OK = *Net::SAMLc::zxid_OK;
*mk_enc_id = *Net::SAMLc::zxid_mk_enc_id;
*mk_enc_a7n = *Net::SAMLc::zxid_mk_enc_a7n;
*mk_logout = *Net::SAMLc::zxid_mk_logout;
*mk_logout_resp = *Net::SAMLc::zxid_mk_logout_resp;
*mk_mni = *Net::SAMLc::zxid_mk_mni;
*mk_mni_resp = *Net::SAMLc::zxid_mk_mni_resp;
*mk_a7n = *Net::SAMLc::zxid_mk_a7n;
*mk_subj = *Net::SAMLc::zxid_mk_subj;
*mk_an_stmt = *Net::SAMLc::zxid_mk_an_stmt;
*mk_saml_resp = *Net::SAMLc::zxid_mk_saml_resp;
*mk_xacml_resp = *Net::SAMLc::zxid_mk_xacml_resp;
*mk_xacml_simple_at = *Net::SAMLc::zxid_mk_xacml_simple_at;
*mk_az = *Net::SAMLc::zxid_mk_az;
*mk_attribute = *Net::SAMLc::zxid_mk_attribute;
*mk_di_query = *Net::SAMLc::zxid_mk_di_query;
*mk_addr = *Net::SAMLc::zxid_mk_addr;
*mk_dap_select = *Net::SAMLc::zxid_mk_dap_select;
*mk_dap_query_item = *Net::SAMLc::zxid_mk_dap_query_item;
*mk_dap_testop = *Net::SAMLc::zxid_mk_dap_testop;
*mk_dap_test_item = *Net::SAMLc::zxid_mk_dap_test_item;
*mk_dap_resquery = *Net::SAMLc::zxid_mk_dap_resquery;
*mk_dap_subscription = *Net::SAMLc::zxid_mk_dap_subscription;
*mk_dap_query = *Net::SAMLc::zxid_mk_dap_query;
*map_sec_mech = *Net::SAMLc::zxid_map_sec_mech;
*wsc_call = *Net::SAMLc::zxid_wsc_call;
*new_envf = *Net::SAMLc::zxid_new_envf;
*callf = *Net::SAMLc::zxid_callf;
*simple_call = *Net::SAMLc::zxid_simple_call;
*simple_callf = *Net::SAMLc::zxid_simple_callf;
*nice_sha1 = *Net::SAMLc::zxid_nice_sha1;
*epr_path = *Net::SAMLc::zxid_epr_path;
*get_epr = *Net::SAMLc::zxid_get_epr;
*find_epr = *Net::SAMLc::zxid_find_epr;
*cache_epr = *Net::SAMLc::zxid_cache_epr;
*snarf_eprs_from_ses = *Net::SAMLc::zxid_snarf_eprs_from_ses;
*base64_fancy_raw = *Net::SAMLc::base64_fancy_raw;
*unbase64_raw = *Net::SAMLc::unbase64_raw;
*sha1_safe_base64 = *Net::SAMLc::sha1_safe_base64;
*zx_zlib_raw_deflate = *Net::SAMLc::zx_zlib_raw_deflate;
*zx_zlib_raw_inflate = *Net::SAMLc::zx_zlib_raw_inflate;
*zx_url_encode_len = *Net::SAMLc::zx_url_encode_len;
*zx_url_encode_raw = *Net::SAMLc::zx_url_encode_raw;
*zx_url_encode = *Net::SAMLc::zx_url_encode;
*read_all = *Net::SAMLc::read_all;
*name_from_path = *Net::SAMLc::name_from_path;
*open_fd_from_path = *Net::SAMLc::open_fd_from_path;
*read_all_fd = *Net::SAMLc::read_all_fd;
*write_all_fd = *Net::SAMLc::write_all_fd;
*write_all_path_fmt = *Net::SAMLc::write_all_path_fmt;
*close_file = *Net::SAMLc::close_file;
*curl_write_data = *Net::SAMLc::zxid_curl_write_data;
*curl_read_data = *Net::SAMLc::zxid_curl_read_data;

############# Class : Net::SAML::zx_ns_s ##############

package Net::SAML::zx_ns_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zx_ns_s_n_get;
*swig_n_set = *Net::SAMLc::zx_ns_s_n_set;
*swig_m_get = *Net::SAMLc::zx_ns_s_m_get;
*swig_m_set = *Net::SAMLc::zx_ns_s_m_set;
*swig_seen_get = *Net::SAMLc::zx_ns_s_seen_get;
*swig_seen_set = *Net::SAMLc::zx_ns_s_seen_set;
*swig_seen_n_get = *Net::SAMLc::zx_ns_s_seen_n_get;
*swig_seen_n_set = *Net::SAMLc::zx_ns_s_seen_n_set;
*swig_seen_p_get = *Net::SAMLc::zx_ns_s_seen_p_get;
*swig_seen_p_set = *Net::SAMLc::zx_ns_s_seen_p_set;
*swig_seen_pop_get = *Net::SAMLc::zx_ns_s_seen_pop_get;
*swig_seen_pop_set = *Net::SAMLc::zx_ns_s_seen_pop_set;
*swig_inc_n_get = *Net::SAMLc::zx_ns_s_inc_n_get;
*swig_inc_n_set = *Net::SAMLc::zx_ns_s_inc_n_set;
*swig_prefix_len_get = *Net::SAMLc::zx_ns_s_prefix_len_get;
*swig_prefix_len_set = *Net::SAMLc::zx_ns_s_prefix_len_set;
*swig_prefix_get = *Net::SAMLc::zx_ns_s_prefix_get;
*swig_prefix_set = *Net::SAMLc::zx_ns_s_prefix_set;
*swig_url_len_get = *Net::SAMLc::zx_ns_s_url_len_get;
*swig_url_len_set = *Net::SAMLc::zx_ns_s_url_len_set;
*swig_url_get = *Net::SAMLc::zx_ns_s_url_get;
*swig_url_set = *Net::SAMLc::zx_ns_s_url_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_ns_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_ns_s($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_ctx ##############

package Net::SAML::zx_ctx;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_base_get = *Net::SAMLc::zx_ctx_base_get;
*swig_base_set = *Net::SAMLc::zx_ctx_base_set;
*swig_p_get = *Net::SAMLc::zx_ctx_p_get;
*swig_p_set = *Net::SAMLc::zx_ctx_p_set;
*swig_lim_get = *Net::SAMLc::zx_ctx_lim_get;
*swig_lim_set = *Net::SAMLc::zx_ctx_lim_set;
*swig_ns_tab_get = *Net::SAMLc::zx_ctx_ns_tab_get;
*swig_ns_tab_set = *Net::SAMLc::zx_ctx_ns_tab_set;
*swig_unknown_ns_get = *Net::SAMLc::zx_ctx_unknown_ns_get;
*swig_unknown_ns_set = *Net::SAMLc::zx_ctx_unknown_ns_set;
*swig_guard_seen_n_get = *Net::SAMLc::zx_ctx_guard_seen_n_get;
*swig_guard_seen_n_set = *Net::SAMLc::zx_ctx_guard_seen_n_set;
*swig_guard_seen_p_get = *Net::SAMLc::zx_ctx_guard_seen_p_get;
*swig_guard_seen_p_set = *Net::SAMLc::zx_ctx_guard_seen_p_set;
*swig_exclude_sig_get = *Net::SAMLc::zx_ctx_exclude_sig_get;
*swig_exclude_sig_set = *Net::SAMLc::zx_ctx_exclude_sig_set;
*swig_inc_ns_len_get = *Net::SAMLc::zx_ctx_inc_ns_len_get;
*swig_inc_ns_len_set = *Net::SAMLc::zx_ctx_inc_ns_len_set;
*swig_inc_ns_get = *Net::SAMLc::zx_ctx_inc_ns_get;
*swig_inc_ns_set = *Net::SAMLc::zx_ctx_inc_ns_set;
*swig_malloc_func_get = *Net::SAMLc::zx_ctx_malloc_func_get;
*swig_malloc_func_set = *Net::SAMLc::zx_ctx_malloc_func_set;
*swig_realloc_func_get = *Net::SAMLc::zx_ctx_realloc_func_get;
*swig_realloc_func_set = *Net::SAMLc::zx_ctx_realloc_func_set;
*swig_free_func_get = *Net::SAMLc::zx_ctx_free_func_get;
*swig_free_func_set = *Net::SAMLc::zx_ctx_free_func_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_ctx(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_ctx($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_node_s ##############

package Net::SAML::zx_node_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zx_node_s_n_get;
*swig_n_set = *Net::SAMLc::zx_node_s_n_set;
*swig_wo_get = *Net::SAMLc::zx_node_s_wo_get;
*swig_wo_set = *Net::SAMLc::zx_node_s_wo_set;
*swig_ns_get = *Net::SAMLc::zx_node_s_ns_get;
*swig_ns_set = *Net::SAMLc::zx_node_s_ns_set;
*swig_tok_get = *Net::SAMLc::zx_node_s_tok_get;
*swig_tok_set = *Net::SAMLc::zx_node_s_tok_set;
*swig_err_get = *Net::SAMLc::zx_node_s_err_get;
*swig_err_set = *Net::SAMLc::zx_node_s_err_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_node_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_node_s($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_elem_s ##############

package Net::SAML::zx_elem_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_g_get = *Net::SAMLc::zx_elem_s_g_get;
*swig_g_set = *Net::SAMLc::zx_elem_s_g_set;
*swig_kids_get = *Net::SAMLc::zx_elem_s_kids_get;
*swig_kids_set = *Net::SAMLc::zx_elem_s_kids_set;
*swig_any_attr_get = *Net::SAMLc::zx_elem_s_any_attr_get;
*swig_any_attr_set = *Net::SAMLc::zx_elem_s_any_attr_set;
*swig_any_elem_get = *Net::SAMLc::zx_elem_s_any_elem_get;
*swig_any_elem_set = *Net::SAMLc::zx_elem_s_any_elem_set;
*swig_xmlns_get = *Net::SAMLc::zx_elem_s_xmlns_get;
*swig_xmlns_set = *Net::SAMLc::zx_elem_s_xmlns_set;
*swig_content_get = *Net::SAMLc::zx_elem_s_content_get;
*swig_content_set = *Net::SAMLc::zx_elem_s_content_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_elem_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_elem_s($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_str ##############

package Net::SAML::zx_str;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_g_get = *Net::SAMLc::zx_str_g_get;
*swig_g_set = *Net::SAMLc::zx_str_g_set;
*swig_len_get = *Net::SAMLc::zx_str_len_get;
*swig_len_set = *Net::SAMLc::zx_str_len_set;
*swig_s_get = *Net::SAMLc::zx_str_s_get;
*swig_s_set = *Net::SAMLc::zx_str_s_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_str(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_str($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_any_elem_s ##############

package Net::SAML::zx_any_elem_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_gg_get = *Net::SAMLc::zx_any_elem_s_gg_get;
*swig_gg_set = *Net::SAMLc::zx_any_elem_s_gg_set;
*swig_name_len_get = *Net::SAMLc::zx_any_elem_s_name_len_get;
*swig_name_len_set = *Net::SAMLc::zx_any_elem_s_name_len_set;
*swig_name_get = *Net::SAMLc::zx_any_elem_s_name_get;
*swig_name_set = *Net::SAMLc::zx_any_elem_s_name_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_any_elem_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_any_elem_s($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_any_attr_s ##############

package Net::SAML::zx_any_attr_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_ss_get = *Net::SAMLc::zx_any_attr_s_ss_get;
*swig_ss_set = *Net::SAMLc::zx_any_attr_s_ss_set;
*swig_name_len_get = *Net::SAMLc::zx_any_attr_s_name_len_get;
*swig_name_len_set = *Net::SAMLc::zx_any_attr_s_name_len_set;
*swig_name_get = *Net::SAMLc::zx_any_attr_s_name_get;
*swig_name_set = *Net::SAMLc::zx_any_attr_s_name_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_any_attr_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_any_attr_s($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zx_tok ##############

package Net::SAML::zx_tok;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_name_get = *Net::SAMLc::zx_tok_name_get;
*swig_name_set = *Net::SAMLc::zx_tok_name_set;
*swig_prefix_get = *Net::SAMLc::zx_tok_prefix_get;
*swig_prefix_set = *Net::SAMLc::zx_tok_prefix_set;
*swig_ns_get = *Net::SAMLc::zx_tok_ns_get;
*swig_ns_set = *Net::SAMLc::zx_tok_ns_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_tok(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_tok($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_conf ##############

package Net::SAML::zxid_conf;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_magic_get = *Net::SAMLc::zxid_conf_magic_get;
*swig_magic_set = *Net::SAMLc::zxid_conf_magic_set;
*swig_ctx_get = *Net::SAMLc::zxid_conf_ctx_get;
*swig_ctx_set = *Net::SAMLc::zxid_conf_ctx_set;
*swig_cot_get = *Net::SAMLc::zxid_conf_cot_get;
*swig_cot_set = *Net::SAMLc::zxid_conf_cot_set;
*swig_path_supplied_get = *Net::SAMLc::zxid_conf_path_supplied_get;
*swig_path_supplied_set = *Net::SAMLc::zxid_conf_path_supplied_set;
*swig_path_len_get = *Net::SAMLc::zxid_conf_path_len_get;
*swig_path_len_set = *Net::SAMLc::zxid_conf_path_len_set;
*swig_path_get = *Net::SAMLc::zxid_conf_path_get;
*swig_path_set = *Net::SAMLc::zxid_conf_path_set;
*swig_url_get = *Net::SAMLc::zxid_conf_url_get;
*swig_url_set = *Net::SAMLc::zxid_conf_url_set;
*swig_non_standard_entityid_get = *Net::SAMLc::zxid_conf_non_standard_entityid_get;
*swig_non_standard_entityid_set = *Net::SAMLc::zxid_conf_non_standard_entityid_set;
*swig_redirect_hack_imposed_url_get = *Net::SAMLc::zxid_conf_redirect_hack_imposed_url_get;
*swig_redirect_hack_imposed_url_set = *Net::SAMLc::zxid_conf_redirect_hack_imposed_url_set;
*swig_redirect_hack_zxid_url_get = *Net::SAMLc::zxid_conf_redirect_hack_zxid_url_get;
*swig_redirect_hack_zxid_url_set = *Net::SAMLc::zxid_conf_redirect_hack_zxid_url_set;
*swig_redirect_hack_zxid_qs_get = *Net::SAMLc::zxid_conf_redirect_hack_zxid_qs_get;
*swig_redirect_hack_zxid_qs_set = *Net::SAMLc::zxid_conf_redirect_hack_zxid_qs_set;
*swig_cdc_url_get = *Net::SAMLc::zxid_conf_cdc_url_get;
*swig_cdc_url_set = *Net::SAMLc::zxid_conf_cdc_url_set;
*swig_cdc_choice_get = *Net::SAMLc::zxid_conf_cdc_choice_get;
*swig_cdc_choice_set = *Net::SAMLc::zxid_conf_cdc_choice_set;
*swig_md_fetch_get = *Net::SAMLc::zxid_conf_md_fetch_get;
*swig_md_fetch_set = *Net::SAMLc::zxid_conf_md_fetch_set;
*swig_md_populate_cache_get = *Net::SAMLc::zxid_conf_md_populate_cache_get;
*swig_md_populate_cache_set = *Net::SAMLc::zxid_conf_md_populate_cache_set;
*swig_md_cache_first_get = *Net::SAMLc::zxid_conf_md_cache_first_get;
*swig_md_cache_first_set = *Net::SAMLc::zxid_conf_md_cache_first_set;
*swig_md_cache_last_get = *Net::SAMLc::zxid_conf_md_cache_last_get;
*swig_md_cache_last_set = *Net::SAMLc::zxid_conf_md_cache_last_set;
*swig_auto_cert_get = *Net::SAMLc::zxid_conf_auto_cert_get;
*swig_auto_cert_set = *Net::SAMLc::zxid_conf_auto_cert_set;
*swig_user_local_get = *Net::SAMLc::zxid_conf_user_local_get;
*swig_user_local_set = *Net::SAMLc::zxid_conf_user_local_set;
*swig_idp_ena_get = *Net::SAMLc::zxid_conf_idp_ena_get;
*swig_idp_ena_set = *Net::SAMLc::zxid_conf_idp_ena_set;
*swig_pdp_ena_get = *Net::SAMLc::zxid_conf_pdp_ena_get;
*swig_pdp_ena_set = *Net::SAMLc::zxid_conf_pdp_ena_set;
*swig_want_authn_req_signed_get = *Net::SAMLc::zxid_conf_want_authn_req_signed_get;
*swig_want_authn_req_signed_set = *Net::SAMLc::zxid_conf_want_authn_req_signed_set;
*swig_authn_req_sign_get = *Net::SAMLc::zxid_conf_authn_req_sign_get;
*swig_authn_req_sign_set = *Net::SAMLc::zxid_conf_authn_req_sign_set;
*swig_want_sso_a7n_signed_get = *Net::SAMLc::zxid_conf_want_sso_a7n_signed_get;
*swig_want_sso_a7n_signed_set = *Net::SAMLc::zxid_conf_want_sso_a7n_signed_set;
*swig_sso_soap_sign_get = *Net::SAMLc::zxid_conf_sso_soap_sign_get;
*swig_sso_soap_sign_set = *Net::SAMLc::zxid_conf_sso_soap_sign_set;
*swig_sso_soap_resp_sign_get = *Net::SAMLc::zxid_conf_sso_soap_resp_sign_get;
*swig_sso_soap_resp_sign_set = *Net::SAMLc::zxid_conf_sso_soap_resp_sign_set;
*swig_sso_sign_get = *Net::SAMLc::zxid_conf_sso_sign_get;
*swig_sso_sign_set = *Net::SAMLc::zxid_conf_sso_sign_set;
*swig_nameid_enc_get = *Net::SAMLc::zxid_conf_nameid_enc_get;
*swig_nameid_enc_set = *Net::SAMLc::zxid_conf_nameid_enc_set;
*swig_post_a7n_enc_get = *Net::SAMLc::zxid_conf_post_a7n_enc_get;
*swig_post_a7n_enc_set = *Net::SAMLc::zxid_conf_post_a7n_enc_set;
*swig_affiliation_get = *Net::SAMLc::zxid_conf_affiliation_get;
*swig_affiliation_set = *Net::SAMLc::zxid_conf_affiliation_set;
*swig_nice_name_get = *Net::SAMLc::zxid_conf_nice_name_get;
*swig_nice_name_set = *Net::SAMLc::zxid_conf_nice_name_set;
*swig_ses_arch_dir_get = *Net::SAMLc::zxid_conf_ses_arch_dir_get;
*swig_ses_arch_dir_set = *Net::SAMLc::zxid_conf_ses_arch_dir_set;
*swig_ses_cookie_name_get = *Net::SAMLc::zxid_conf_ses_cookie_name_get;
*swig_ses_cookie_name_set = *Net::SAMLc::zxid_conf_ses_cookie_name_set;
*swig_ipport_get = *Net::SAMLc::zxid_conf_ipport_get;
*swig_ipport_set = *Net::SAMLc::zxid_conf_ipport_set;
*swig_log_err_get = *Net::SAMLc::zxid_conf_log_err_get;
*swig_log_err_set = *Net::SAMLc::zxid_conf_log_err_set;
*swig_log_act_get = *Net::SAMLc::zxid_conf_log_act_get;
*swig_log_act_set = *Net::SAMLc::zxid_conf_log_act_set;
*swig_log_issue_a7n_get = *Net::SAMLc::zxid_conf_log_issue_a7n_get;
*swig_log_issue_a7n_set = *Net::SAMLc::zxid_conf_log_issue_a7n_set;
*swig_log_issue_msg_get = *Net::SAMLc::zxid_conf_log_issue_msg_get;
*swig_log_issue_msg_set = *Net::SAMLc::zxid_conf_log_issue_msg_set;
*swig_log_rely_a7n_get = *Net::SAMLc::zxid_conf_log_rely_a7n_get;
*swig_log_rely_a7n_set = *Net::SAMLc::zxid_conf_log_rely_a7n_set;
*swig_log_rely_msg_get = *Net::SAMLc::zxid_conf_log_rely_msg_get;
*swig_log_rely_msg_set = *Net::SAMLc::zxid_conf_log_rely_msg_set;
*swig_log_err_in_act_get = *Net::SAMLc::zxid_conf_log_err_in_act_get;
*swig_log_err_in_act_set = *Net::SAMLc::zxid_conf_log_err_in_act_set;
*swig_log_act_in_err_get = *Net::SAMLc::zxid_conf_log_act_in_err_get;
*swig_log_act_in_err_set = *Net::SAMLc::zxid_conf_log_act_in_err_set;
*swig_log_sigfail_is_err_get = *Net::SAMLc::zxid_conf_log_sigfail_is_err_get;
*swig_log_sigfail_is_err_set = *Net::SAMLc::zxid_conf_log_sigfail_is_err_set;
*swig_log_level_get = *Net::SAMLc::zxid_conf_log_level_get;
*swig_log_level_set = *Net::SAMLc::zxid_conf_log_level_set;
*swig_sig_fatal_get = *Net::SAMLc::zxid_conf_sig_fatal_get;
*swig_sig_fatal_set = *Net::SAMLc::zxid_conf_sig_fatal_set;
*swig_nosig_fatal_get = *Net::SAMLc::zxid_conf_nosig_fatal_get;
*swig_nosig_fatal_set = *Net::SAMLc::zxid_conf_nosig_fatal_set;
*swig_msg_sig_ok_get = *Net::SAMLc::zxid_conf_msg_sig_ok_get;
*swig_msg_sig_ok_set = *Net::SAMLc::zxid_conf_msg_sig_ok_set;
*swig_timeout_fatal_get = *Net::SAMLc::zxid_conf_timeout_fatal_get;
*swig_timeout_fatal_set = *Net::SAMLc::zxid_conf_timeout_fatal_set;
*swig_audience_fatal_get = *Net::SAMLc::zxid_conf_audience_fatal_get;
*swig_audience_fatal_set = *Net::SAMLc::zxid_conf_audience_fatal_set;
*swig_dup_a7n_fatal_get = *Net::SAMLc::zxid_conf_dup_a7n_fatal_get;
*swig_dup_a7n_fatal_set = *Net::SAMLc::zxid_conf_dup_a7n_fatal_set;
*swig_dup_msg_fatal_get = *Net::SAMLc::zxid_conf_dup_msg_fatal_get;
*swig_dup_msg_fatal_set = *Net::SAMLc::zxid_conf_dup_msg_fatal_set;
*swig_redir_to_content_get = *Net::SAMLc::zxid_conf_redir_to_content_get;
*swig_redir_to_content_set = *Net::SAMLc::zxid_conf_redir_to_content_set;
*swig_remote_user_ena_get = *Net::SAMLc::zxid_conf_remote_user_ena_get;
*swig_remote_user_ena_set = *Net::SAMLc::zxid_conf_remote_user_ena_set;
*swig_anon_ok_get = *Net::SAMLc::zxid_conf_anon_ok_get;
*swig_anon_ok_set = *Net::SAMLc::zxid_conf_anon_ok_set;
*swig_required_authnctx_get = *Net::SAMLc::zxid_conf_required_authnctx_get;
*swig_required_authnctx_set = *Net::SAMLc::zxid_conf_required_authnctx_set;
*swig_issue_authnctx_pw_get = *Net::SAMLc::zxid_conf_issue_authnctx_pw_get;
*swig_issue_authnctx_pw_set = *Net::SAMLc::zxid_conf_issue_authnctx_pw_set;
*swig_idp_pref_acs_binding_get = *Net::SAMLc::zxid_conf_idp_pref_acs_binding_get;
*swig_idp_pref_acs_binding_set = *Net::SAMLc::zxid_conf_idp_pref_acs_binding_set;
*swig_before_slop_get = *Net::SAMLc::zxid_conf_before_slop_get;
*swig_before_slop_set = *Net::SAMLc::zxid_conf_before_slop_set;
*swig_after_slop_get = *Net::SAMLc::zxid_conf_after_slop_get;
*swig_after_slop_set = *Net::SAMLc::zxid_conf_after_slop_set;
*swig_timeskew_get = *Net::SAMLc::zxid_conf_timeskew_get;
*swig_timeskew_set = *Net::SAMLc::zxid_conf_timeskew_set;
*swig_a7nttl_get = *Net::SAMLc::zxid_conf_a7nttl_get;
*swig_a7nttl_set = *Net::SAMLc::zxid_conf_a7nttl_set;
*swig_pdp_url_get = *Net::SAMLc::zxid_conf_pdp_url_get;
*swig_pdp_url_set = *Net::SAMLc::zxid_conf_pdp_url_set;
*swig_pdp_call_url_get = *Net::SAMLc::zxid_conf_pdp_call_url_get;
*swig_pdp_call_url_set = *Net::SAMLc::zxid_conf_pdp_call_url_set;
*swig_need_get = *Net::SAMLc::zxid_conf_need_get;
*swig_need_set = *Net::SAMLc::zxid_conf_need_set;
*swig_want_get = *Net::SAMLc::zxid_conf_want_get;
*swig_want_set = *Net::SAMLc::zxid_conf_want_set;
*swig_attrsrc_get = *Net::SAMLc::zxid_conf_attrsrc_get;
*swig_attrsrc_set = *Net::SAMLc::zxid_conf_attrsrc_set;
*swig_inmap_get = *Net::SAMLc::zxid_conf_inmap_get;
*swig_inmap_set = *Net::SAMLc::zxid_conf_inmap_set;
*swig_outmap_get = *Net::SAMLc::zxid_conf_outmap_get;
*swig_outmap_set = *Net::SAMLc::zxid_conf_outmap_set;
*swig_pepmap_get = *Net::SAMLc::zxid_conf_pepmap_get;
*swig_pepmap_set = *Net::SAMLc::zxid_conf_pepmap_set;
*swig_localpdp_role_permit_get = *Net::SAMLc::zxid_conf_localpdp_role_permit_get;
*swig_localpdp_role_permit_set = *Net::SAMLc::zxid_conf_localpdp_role_permit_set;
*swig_localpdp_role_deny_get = *Net::SAMLc::zxid_conf_localpdp_role_deny_get;
*swig_localpdp_role_deny_set = *Net::SAMLc::zxid_conf_localpdp_role_deny_set;
*swig_localpdp_idpnid_permit_get = *Net::SAMLc::zxid_conf_localpdp_idpnid_permit_get;
*swig_localpdp_idpnid_permit_set = *Net::SAMLc::zxid_conf_localpdp_idpnid_permit_set;
*swig_localpdp_idpnid_deny_get = *Net::SAMLc::zxid_conf_localpdp_idpnid_deny_get;
*swig_localpdp_idpnid_deny_set = *Net::SAMLc::zxid_conf_localpdp_idpnid_deny_set;
*swig_max_soap_retry_get = *Net::SAMLc::zxid_conf_max_soap_retry_get;
*swig_max_soap_retry_set = *Net::SAMLc::zxid_conf_max_soap_retry_set;
*swig_defaultqs_get = *Net::SAMLc::zxid_conf_defaultqs_get;
*swig_defaultqs_set = *Net::SAMLc::zxid_conf_defaultqs_set;
*swig_mod_saml_attr_prefix_get = *Net::SAMLc::zxid_conf_mod_saml_attr_prefix_get;
*swig_mod_saml_attr_prefix_set = *Net::SAMLc::zxid_conf_mod_saml_attr_prefix_set;
*swig_idp_sel_page_get = *Net::SAMLc::zxid_conf_idp_sel_page_get;
*swig_idp_sel_page_set = *Net::SAMLc::zxid_conf_idp_sel_page_set;
*swig_idp_sel_start_get = *Net::SAMLc::zxid_conf_idp_sel_start_get;
*swig_idp_sel_start_set = *Net::SAMLc::zxid_conf_idp_sel_start_set;
*swig_idp_sel_new_idp_get = *Net::SAMLc::zxid_conf_idp_sel_new_idp_get;
*swig_idp_sel_new_idp_set = *Net::SAMLc::zxid_conf_idp_sel_new_idp_set;
*swig_idp_sel_our_eid_get = *Net::SAMLc::zxid_conf_idp_sel_our_eid_get;
*swig_idp_sel_our_eid_set = *Net::SAMLc::zxid_conf_idp_sel_our_eid_set;
*swig_idp_sel_tech_user_get = *Net::SAMLc::zxid_conf_idp_sel_tech_user_get;
*swig_idp_sel_tech_user_set = *Net::SAMLc::zxid_conf_idp_sel_tech_user_set;
*swig_idp_sel_tech_site_get = *Net::SAMLc::zxid_conf_idp_sel_tech_site_get;
*swig_idp_sel_tech_site_set = *Net::SAMLc::zxid_conf_idp_sel_tech_site_set;
*swig_idp_sel_footer_get = *Net::SAMLc::zxid_conf_idp_sel_footer_get;
*swig_idp_sel_footer_set = *Net::SAMLc::zxid_conf_idp_sel_footer_set;
*swig_idp_sel_end_get = *Net::SAMLc::zxid_conf_idp_sel_end_get;
*swig_idp_sel_end_set = *Net::SAMLc::zxid_conf_idp_sel_end_set;
*swig_an_page_get = *Net::SAMLc::zxid_conf_an_page_get;
*swig_an_page_set = *Net::SAMLc::zxid_conf_an_page_set;
*swig_an_start_get = *Net::SAMLc::zxid_conf_an_start_get;
*swig_an_start_set = *Net::SAMLc::zxid_conf_an_start_set;
*swig_an_our_eid_get = *Net::SAMLc::zxid_conf_an_our_eid_get;
*swig_an_our_eid_set = *Net::SAMLc::zxid_conf_an_our_eid_set;
*swig_an_tech_user_get = *Net::SAMLc::zxid_conf_an_tech_user_get;
*swig_an_tech_user_set = *Net::SAMLc::zxid_conf_an_tech_user_set;
*swig_an_tech_site_get = *Net::SAMLc::zxid_conf_an_tech_site_get;
*swig_an_tech_site_set = *Net::SAMLc::zxid_conf_an_tech_site_set;
*swig_an_footer_get = *Net::SAMLc::zxid_conf_an_footer_get;
*swig_an_footer_set = *Net::SAMLc::zxid_conf_an_footer_set;
*swig_an_end_get = *Net::SAMLc::zxid_conf_an_end_get;
*swig_an_end_set = *Net::SAMLc::zxid_conf_an_end_set;
*swig_mgmt_start_get = *Net::SAMLc::zxid_conf_mgmt_start_get;
*swig_mgmt_start_set = *Net::SAMLc::zxid_conf_mgmt_start_set;
*swig_mgmt_logout_get = *Net::SAMLc::zxid_conf_mgmt_logout_get;
*swig_mgmt_logout_set = *Net::SAMLc::zxid_conf_mgmt_logout_set;
*swig_mgmt_defed_get = *Net::SAMLc::zxid_conf_mgmt_defed_get;
*swig_mgmt_defed_set = *Net::SAMLc::zxid_conf_mgmt_defed_set;
*swig_mgmt_footer_get = *Net::SAMLc::zxid_conf_mgmt_footer_get;
*swig_mgmt_footer_set = *Net::SAMLc::zxid_conf_mgmt_footer_set;
*swig_mgmt_end_get = *Net::SAMLc::zxid_conf_mgmt_end_get;
*swig_mgmt_end_set = *Net::SAMLc::zxid_conf_mgmt_end_set;
*swig_dbg_get = *Net::SAMLc::zxid_conf_dbg_get;
*swig_dbg_set = *Net::SAMLc::zxid_conf_dbg_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_conf(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_conf($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_cgi ##############

package Net::SAML::zxid_cgi;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_magic_get = *Net::SAMLc::zxid_cgi_magic_get;
*swig_magic_set = *Net::SAMLc::zxid_cgi_magic_set;
*swig_op_get = *Net::SAMLc::zxid_cgi_op_get;
*swig_op_set = *Net::SAMLc::zxid_cgi_op_set;
*swig_pr_ix_get = *Net::SAMLc::zxid_cgi_pr_ix_get;
*swig_pr_ix_set = *Net::SAMLc::zxid_cgi_pr_ix_set;
*swig_allow_create_get = *Net::SAMLc::zxid_cgi_allow_create_get;
*swig_allow_create_set = *Net::SAMLc::zxid_cgi_allow_create_set;
*swig_ispassive_get = *Net::SAMLc::zxid_cgi_ispassive_get;
*swig_ispassive_set = *Net::SAMLc::zxid_cgi_ispassive_set;
*swig_force_authn_get = *Net::SAMLc::zxid_cgi_force_authn_get;
*swig_force_authn_set = *Net::SAMLc::zxid_cgi_force_authn_set;
*swig_enc_hint_get = *Net::SAMLc::zxid_cgi_enc_hint_get;
*swig_enc_hint_set = *Net::SAMLc::zxid_cgi_enc_hint_set;
*swig_sid_get = *Net::SAMLc::zxid_cgi_sid_get;
*swig_sid_set = *Net::SAMLc::zxid_cgi_sid_set;
*swig_nid_get = *Net::SAMLc::zxid_cgi_nid_get;
*swig_nid_set = *Net::SAMLc::zxid_cgi_nid_set;
*swig_uid_get = *Net::SAMLc::zxid_cgi_uid_get;
*swig_uid_set = *Net::SAMLc::zxid_cgi_uid_set;
*swig_pw_get = *Net::SAMLc::zxid_cgi_pw_get;
*swig_pw_set = *Net::SAMLc::zxid_cgi_pw_set;
*swig_ssoreq_get = *Net::SAMLc::zxid_cgi_ssoreq_get;
*swig_ssoreq_set = *Net::SAMLc::zxid_cgi_ssoreq_set;
*swig_cdc_get = *Net::SAMLc::zxid_cgi_cdc_get;
*swig_cdc_set = *Net::SAMLc::zxid_cgi_cdc_set;
*swig_eid_get = *Net::SAMLc::zxid_cgi_eid_get;
*swig_eid_set = *Net::SAMLc::zxid_cgi_eid_set;
*swig_nid_fmt_get = *Net::SAMLc::zxid_cgi_nid_fmt_get;
*swig_nid_fmt_set = *Net::SAMLc::zxid_cgi_nid_fmt_set;
*swig_affil_get = *Net::SAMLc::zxid_cgi_affil_get;
*swig_affil_set = *Net::SAMLc::zxid_cgi_affil_set;
*swig_consent_get = *Net::SAMLc::zxid_cgi_consent_get;
*swig_consent_set = *Net::SAMLc::zxid_cgi_consent_set;
*swig_matching_rule_get = *Net::SAMLc::zxid_cgi_matching_rule_get;
*swig_matching_rule_set = *Net::SAMLc::zxid_cgi_matching_rule_set;
*swig_authn_ctx_get = *Net::SAMLc::zxid_cgi_authn_ctx_get;
*swig_authn_ctx_set = *Net::SAMLc::zxid_cgi_authn_ctx_set;
*swig_pxy_count_get = *Net::SAMLc::zxid_cgi_pxy_count_get;
*swig_pxy_count_set = *Net::SAMLc::zxid_cgi_pxy_count_set;
*swig_get_complete_get = *Net::SAMLc::zxid_cgi_get_complete_get;
*swig_get_complete_set = *Net::SAMLc::zxid_cgi_get_complete_set;
*swig_idppxylist_get = *Net::SAMLc::zxid_cgi_idppxylist_get;
*swig_idppxylist_set = *Net::SAMLc::zxid_cgi_idppxylist_set;
*swig_rs_get = *Net::SAMLc::zxid_cgi_rs_get;
*swig_rs_set = *Net::SAMLc::zxid_cgi_rs_set;
*swig_newnym_get = *Net::SAMLc::zxid_cgi_newnym_get;
*swig_newnym_set = *Net::SAMLc::zxid_cgi_newnym_set;
*swig_saml_art_get = *Net::SAMLc::zxid_cgi_saml_art_get;
*swig_saml_art_set = *Net::SAMLc::zxid_cgi_saml_art_set;
*swig_saml_resp_get = *Net::SAMLc::zxid_cgi_saml_resp_get;
*swig_saml_resp_set = *Net::SAMLc::zxid_cgi_saml_resp_set;
*swig_saml_req_get = *Net::SAMLc::zxid_cgi_saml_req_get;
*swig_saml_req_set = *Net::SAMLc::zxid_cgi_saml_req_set;
*swig_sigalg_get = *Net::SAMLc::zxid_cgi_sigalg_get;
*swig_sigalg_set = *Net::SAMLc::zxid_cgi_sigalg_set;
*swig_sig_get = *Net::SAMLc::zxid_cgi_sig_get;
*swig_sig_set = *Net::SAMLc::zxid_cgi_sig_set;
*swig_sigval_get = *Net::SAMLc::zxid_cgi_sigval_get;
*swig_sigval_set = *Net::SAMLc::zxid_cgi_sigval_set;
*swig_sigmsg_get = *Net::SAMLc::zxid_cgi_sigmsg_get;
*swig_sigmsg_set = *Net::SAMLc::zxid_cgi_sigmsg_set;
*swig_err_get = *Net::SAMLc::zxid_cgi_err_get;
*swig_err_set = *Net::SAMLc::zxid_cgi_err_set;
*swig_msg_get = *Net::SAMLc::zxid_cgi_msg_get;
*swig_msg_set = *Net::SAMLc::zxid_cgi_msg_set;
*swig_dbg_get = *Net::SAMLc::zxid_cgi_dbg_get;
*swig_dbg_set = *Net::SAMLc::zxid_cgi_dbg_set;
*swig_zxapp_get = *Net::SAMLc::zxid_cgi_zxapp_get;
*swig_zxapp_set = *Net::SAMLc::zxid_cgi_zxapp_set;
*swig_zxrfr_get = *Net::SAMLc::zxid_cgi_zxrfr_get;
*swig_zxrfr_set = *Net::SAMLc::zxid_cgi_zxrfr_set;
*swig_ok_get = *Net::SAMLc::zxid_cgi_ok_get;
*swig_ok_set = *Net::SAMLc::zxid_cgi_ok_set;
*swig_idp_list_get = *Net::SAMLc::zxid_cgi_idp_list_get;
*swig_idp_list_set = *Net::SAMLc::zxid_cgi_idp_list_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_cgi(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_cgi($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_ses ##############

package Net::SAML::zxid_ses;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_magic_get = *Net::SAMLc::zxid_ses_magic_get;
*swig_magic_set = *Net::SAMLc::zxid_ses_magic_set;
*swig_sid_get = *Net::SAMLc::zxid_ses_sid_get;
*swig_sid_set = *Net::SAMLc::zxid_ses_sid_set;
*swig_uid_get = *Net::SAMLc::zxid_ses_uid_get;
*swig_uid_set = *Net::SAMLc::zxid_ses_uid_set;
*swig_nid_get = *Net::SAMLc::zxid_ses_nid_get;
*swig_nid_set = *Net::SAMLc::zxid_ses_nid_set;
*swig_sesix_get = *Net::SAMLc::zxid_ses_sesix_get;
*swig_sesix_set = *Net::SAMLc::zxid_ses_sesix_set;
*swig_an_ctx_get = *Net::SAMLc::zxid_ses_an_ctx_get;
*swig_an_ctx_set = *Net::SAMLc::zxid_ses_an_ctx_set;
*swig_nidfmt_get = *Net::SAMLc::zxid_ses_nidfmt_get;
*swig_nidfmt_set = *Net::SAMLc::zxid_ses_nidfmt_set;
*swig_sigres_get = *Net::SAMLc::zxid_ses_sigres_get;
*swig_sigres_set = *Net::SAMLc::zxid_ses_sigres_set;
*swig_pad2_get = *Net::SAMLc::zxid_ses_pad2_get;
*swig_pad2_set = *Net::SAMLc::zxid_ses_pad2_set;
*swig_pad3_get = *Net::SAMLc::zxid_ses_pad3_get;
*swig_pad3_set = *Net::SAMLc::zxid_ses_pad3_set;
*swig_sso_a7n_path_get = *Net::SAMLc::zxid_ses_sso_a7n_path_get;
*swig_sso_a7n_path_set = *Net::SAMLc::zxid_ses_sso_a7n_path_set;
*swig_setcookie_get = *Net::SAMLc::zxid_ses_setcookie_get;
*swig_setcookie_set = *Net::SAMLc::zxid_ses_setcookie_set;
*swig_cookie_get = *Net::SAMLc::zxid_ses_cookie_get;
*swig_cookie_set = *Net::SAMLc::zxid_ses_cookie_set;
*swig_rs_get = *Net::SAMLc::zxid_ses_rs_get;
*swig_rs_set = *Net::SAMLc::zxid_ses_rs_set;
*swig_nameid_get = *Net::SAMLc::zxid_ses_nameid_get;
*swig_nameid_set = *Net::SAMLc::zxid_ses_nameid_set;
*swig_a7n_get = *Net::SAMLc::zxid_ses_a7n_get;
*swig_a7n_set = *Net::SAMLc::zxid_ses_a7n_set;
*swig_a7n11_get = *Net::SAMLc::zxid_ses_a7n11_get;
*swig_a7n11_set = *Net::SAMLc::zxid_ses_a7n11_set;
*swig_a7n12_get = *Net::SAMLc::zxid_ses_a7n12_get;
*swig_a7n12_set = *Net::SAMLc::zxid_ses_a7n12_set;
*swig_sesbuf_get = *Net::SAMLc::zxid_ses_sesbuf_get;
*swig_sesbuf_set = *Net::SAMLc::zxid_ses_sesbuf_set;
*swig_sso_a7n_buf_get = *Net::SAMLc::zxid_ses_sso_a7n_buf_get;
*swig_sso_a7n_buf_set = *Net::SAMLc::zxid_ses_sso_a7n_buf_set;
*swig_at_get = *Net::SAMLc::zxid_ses_at_get;
*swig_at_set = *Net::SAMLc::zxid_ses_at_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_ses(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_ses($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_attr ##############

package Net::SAML::zxid_attr;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_attr_n_get;
*swig_n_set = *Net::SAMLc::zxid_attr_n_set;
*swig_nv_get = *Net::SAMLc::zxid_attr_nv_get;
*swig_nv_set = *Net::SAMLc::zxid_attr_nv_set;
*swig_name_get = *Net::SAMLc::zxid_attr_name_get;
*swig_name_set = *Net::SAMLc::zxid_attr_name_set;
*swig_val_get = *Net::SAMLc::zxid_attr_val_get;
*swig_val_set = *Net::SAMLc::zxid_attr_val_set;
*swig_map_val_get = *Net::SAMLc::zxid_attr_map_val_get;
*swig_map_val_set = *Net::SAMLc::zxid_attr_map_val_set;
*swig_orig_get = *Net::SAMLc::zxid_attr_orig_get;
*swig_orig_set = *Net::SAMLc::zxid_attr_orig_set;
*swig_issuer_get = *Net::SAMLc::zxid_attr_issuer_get;
*swig_issuer_set = *Net::SAMLc::zxid_attr_issuer_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_attr(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_attr($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_need ##############

package Net::SAML::zxid_need;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_need_n_get;
*swig_n_set = *Net::SAMLc::zxid_need_n_set;
*swig_at_get = *Net::SAMLc::zxid_need_at_get;
*swig_at_set = *Net::SAMLc::zxid_need_at_set;
*swig_usage_get = *Net::SAMLc::zxid_need_usage_get;
*swig_usage_set = *Net::SAMLc::zxid_need_usage_set;
*swig_retent_get = *Net::SAMLc::zxid_need_retent_get;
*swig_retent_set = *Net::SAMLc::zxid_need_retent_set;
*swig_oblig_get = *Net::SAMLc::zxid_need_oblig_get;
*swig_oblig_set = *Net::SAMLc::zxid_need_oblig_set;
*swig_ext_get = *Net::SAMLc::zxid_need_ext_get;
*swig_ext_set = *Net::SAMLc::zxid_need_ext_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_need(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_need($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_map ##############

package Net::SAML::zxid_map;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_map_n_get;
*swig_n_set = *Net::SAMLc::zxid_map_n_set;
*swig_rule_get = *Net::SAMLc::zxid_map_rule_get;
*swig_rule_set = *Net::SAMLc::zxid_map_rule_set;
*swig_ns_get = *Net::SAMLc::zxid_map_ns_get;
*swig_ns_set = *Net::SAMLc::zxid_map_ns_set;
*swig_src_get = *Net::SAMLc::zxid_map_src_get;
*swig_src_set = *Net::SAMLc::zxid_map_src_set;
*swig_dst_get = *Net::SAMLc::zxid_map_dst_get;
*swig_dst_set = *Net::SAMLc::zxid_map_dst_set;
*swig_ext_get = *Net::SAMLc::zxid_map_ext_get;
*swig_ext_set = *Net::SAMLc::zxid_map_ext_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_map(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_map($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_cstr_list ##############

package Net::SAML::zxid_cstr_list;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_cstr_list_n_get;
*swig_n_set = *Net::SAMLc::zxid_cstr_list_n_set;
*swig_s_get = *Net::SAMLc::zxid_cstr_list_s_get;
*swig_s_set = *Net::SAMLc::zxid_cstr_list_s_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_cstr_list(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_cstr_list($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_atsrc ##############

package Net::SAML::zxid_atsrc;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_atsrc_n_get;
*swig_n_set = *Net::SAMLc::zxid_atsrc_n_set;
*swig_at_get = *Net::SAMLc::zxid_atsrc_at_get;
*swig_at_set = *Net::SAMLc::zxid_atsrc_at_set;
*swig_ns_get = *Net::SAMLc::zxid_atsrc_ns_get;
*swig_ns_set = *Net::SAMLc::zxid_atsrc_ns_set;
*swig_weight_get = *Net::SAMLc::zxid_atsrc_weight_get;
*swig_weight_set = *Net::SAMLc::zxid_atsrc_weight_set;
*swig_url_get = *Net::SAMLc::zxid_atsrc_url_get;
*swig_url_set = *Net::SAMLc::zxid_atsrc_url_set;
*swig_aapml_get = *Net::SAMLc::zxid_atsrc_aapml_get;
*swig_aapml_set = *Net::SAMLc::zxid_atsrc_aapml_set;
*swig_otherlim_get = *Net::SAMLc::zxid_atsrc_otherlim_get;
*swig_otherlim_set = *Net::SAMLc::zxid_atsrc_otherlim_set;
*swig_ext_get = *Net::SAMLc::zxid_atsrc_ext_get;
*swig_ext_set = *Net::SAMLc::zxid_atsrc_ext_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_atsrc(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_atsrc($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_entity ##############

package Net::SAML::zxid_entity;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_entity_n_get;
*swig_n_set = *Net::SAMLc::zxid_entity_n_set;
*swig_n_cdc_get = *Net::SAMLc::zxid_entity_n_cdc_get;
*swig_n_cdc_set = *Net::SAMLc::zxid_entity_n_cdc_set;
*swig_eid_len_get = *Net::SAMLc::zxid_entity_eid_len_get;
*swig_eid_len_set = *Net::SAMLc::zxid_entity_eid_len_set;
*swig_eid_get = *Net::SAMLc::zxid_entity_eid_get;
*swig_eid_set = *Net::SAMLc::zxid_entity_eid_set;
*swig_sha1_name_get = *Net::SAMLc::zxid_entity_sha1_name_get;
*swig_sha1_name_set = *Net::SAMLc::zxid_entity_sha1_name_set;
*swig_tls_cert_get = *Net::SAMLc::zxid_entity_tls_cert_get;
*swig_tls_cert_set = *Net::SAMLc::zxid_entity_tls_cert_set;
*swig_sign_cert_get = *Net::SAMLc::zxid_entity_sign_cert_get;
*swig_sign_cert_set = *Net::SAMLc::zxid_entity_sign_cert_set;
*swig_enc_cert_get = *Net::SAMLc::zxid_entity_enc_cert_get;
*swig_enc_cert_set = *Net::SAMLc::zxid_entity_enc_cert_set;
*swig_ed_get = *Net::SAMLc::zxid_entity_ed_get;
*swig_ed_set = *Net::SAMLc::zxid_entity_ed_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_entity(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_entity($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxsig_ref ##############

package Net::SAML::zxsig_ref;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_sref_get = *Net::SAMLc::zxsig_ref_sref_get;
*swig_sref_set = *Net::SAMLc::zxsig_ref_sref_set;
*swig_blob_get = *Net::SAMLc::zxsig_ref_blob_get;
*swig_blob_set = *Net::SAMLc::zxsig_ref_blob_set;
*swig_id_get = *Net::SAMLc::zxsig_ref_id_get;
*swig_id_set = *Net::SAMLc::zxsig_ref_id_set;
*swig_canon_get = *Net::SAMLc::zxsig_ref_canon_get;
*swig_canon_set = *Net::SAMLc::zxsig_ref_canon_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxsig_ref(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxsig_ref($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


############# Class : Net::SAML::zxid_curl_ctx ##############

package Net::SAML::zxid_curl_ctx;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_p_get = *Net::SAMLc::zxid_curl_ctx_p_get;
*swig_p_set = *Net::SAMLc::zxid_curl_ctx_p_set;
*swig_lim_get = *Net::SAMLc::zxid_curl_ctx_lim_get;
*swig_lim_set = *Net::SAMLc::zxid_curl_ctx_lim_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zxid_curl_ctx(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zxid_curl_ctx($self);
        delete $OWNER{$self};
    }
}

sub DISOWN {
    my $self = shift;
    my $ptr = tied(%$self);
    delete $OWNER{$ptr};
}

sub ACQUIRE {
    my $self = shift;
    my $ptr = tied(%$self);
    $OWNER{$ptr} = 1;
}


# ------- VARIABLE STUBS --------

package Net::SAML;

*ZXERR_EOF = *Net::SAMLc::ZXERR_EOF;
*ZXERR_MISMATCH_CLOSE = *Net::SAMLc::ZXERR_MISMATCH_CLOSE;
*ZXERR_BAD_ATTR_NS = *Net::SAMLc::ZXERR_BAD_ATTR_NS;
*ZXERR_BAD_ELEM_NS = *Net::SAMLc::ZXERR_BAD_ELEM_NS;
*ZXERR_MISSING_ATTR = *Net::SAMLc::ZXERR_MISSING_ATTR;
*ZXERR_EXTRA_ATTR = *Net::SAMLc::ZXERR_EXTRA_ATTR;
*ZXERR_MISSING_ELEM = *Net::SAMLc::ZXERR_MISSING_ELEM;
*ZXERR_EXTRA_ELEM = *Net::SAMLc::ZXERR_EXTRA_ELEM;
*ZXERR_ELEM_ORDER = *Net::SAMLc::ZXERR_ELEM_ORDER;
*ZXERR_BAD_NS_PREFIX = *Net::SAMLc::ZXERR_BAD_NS_PREFIX;
*ZXERR_TAG_NOT_CLOSED = *Net::SAMLc::ZXERR_TAG_NOT_CLOSED;
*ZXERR_MASK = *Net::SAMLc::ZXERR_MASK;
*ZXERR_ATTR_FLAG = *Net::SAMLc::ZXERR_ATTR_FLAG;
*ZX_TOK_XMLNS = *Net::SAMLc::ZX_TOK_XMLNS;
*ZX_TOK_DATA = *Net::SAMLc::ZX_TOK_DATA;
*ZX_TOK_NOT_FOUND = *Net::SAMLc::ZX_TOK_NOT_FOUND;
*SIG_ALGO_RSA_SHA1 = *Net::SAMLc::SIG_ALGO_RSA_SHA1;
*SIG_ALGO_DSA_SHA1 = *Net::SAMLc::SIG_ALGO_DSA_SHA1;
*SIG_ALGO = *Net::SAMLc::SIG_ALGO;
*DIGEST_ALGO = *Net::SAMLc::DIGEST_ALGO;
*CANON_ALGO = *Net::SAMLc::CANON_ALGO;
*ENVELOPED_ALGO = *Net::SAMLc::ENVELOPED_ALGO;
*ENC_ALGO_TRIPLEDES_CBC = *Net::SAMLc::ENC_ALGO_TRIPLEDES_CBC;
*ENC_ALGO_AES128_CBC = *Net::SAMLc::ENC_ALGO_AES128_CBC;
*ENC_ALGO_AES192_CBC = *Net::SAMLc::ENC_ALGO_AES192_CBC;
*ENC_ALGO_AES256_CBC = *Net::SAMLc::ENC_ALGO_AES256_CBC;
*ENC_ALGO = *Net::SAMLc::ENC_ALGO;
*ENC_KEYTRAN_RSA_1_5 = *Net::SAMLc::ENC_KEYTRAN_RSA_1_5;
*ENC_KEYTRAN_RSA_OAEP = *Net::SAMLc::ENC_KEYTRAN_RSA_OAEP;
*ENC_KEYTRAN_ALGO = *Net::SAMLc::ENC_KEYTRAN_ALGO;
*ENC_ENCKEY_METH = *Net::SAMLc::ENC_ENCKEY_METH;
*ENC_TYPE_ELEMENT = *Net::SAMLc::ENC_TYPE_ELEMENT;
*ENC_TYPE_CONTENT = *Net::SAMLc::ENC_TYPE_CONTENT;
*CONF_MAGIC = *Net::SAMLc::ZXID_CONF_MAGIC;
*CGI_MAGIC = *Net::SAMLc::ZXID_CGI_MAGIC;
*SES_MAGIC = *Net::SAMLc::ZXID_SES_MAGIC;
*MAP_RULE_RENAME = *Net::SAMLc::ZXID_MAP_RULE_RENAME;
*MAP_RULE_DEL = *Net::SAMLc::ZXID_MAP_RULE_DEL;
*MAP_RULE_RESET = *Net::SAMLc::ZXID_MAP_RULE_RESET;
*MAP_RULE_FEIDEDEC = *Net::SAMLc::ZXID_MAP_RULE_FEIDEDEC;
*MAP_RULE_FEIDEENC = *Net::SAMLc::ZXID_MAP_RULE_FEIDEENC;
*MAP_RULE_UNSB64_INF = *Net::SAMLc::ZXID_MAP_RULE_UNSB64_INF;
*MAP_RULE_DEF_SB64 = *Net::SAMLc::ZXID_MAP_RULE_DEF_SB64;
*MAP_RULE_UNSB64 = *Net::SAMLc::ZXID_MAP_RULE_UNSB64;
*MAP_RULE_SB64 = *Net::SAMLc::ZXID_MAP_RULE_SB64;
*SES_DIR = *Net::SAMLc::ZXID_SES_DIR;
*USER_DIR = *Net::SAMLc::ZXID_USER_DIR;
*UID_DIR = *Net::SAMLc::ZXID_UID_DIR;
*PEM_DIR = *Net::SAMLc::ZXID_PEM_DIR;
*COT_DIR = *Net::SAMLc::ZXID_COT_DIR;
*MAX_USER = *Net::SAMLc::ZXID_MAX_USER;
*MAX_MD = *Net::SAMLc::ZXID_MAX_MD;
*MAX_SOAP = *Net::SAMLc::ZXID_MAX_SOAP;
*MAX_EID = *Net::SAMLc::ZXID_MAX_EID;
*MAX_DIR = *Net::SAMLc::ZXID_MAX_DIR;
*AUTO_EXIT = *Net::SAMLc::ZXID_AUTO_EXIT;
*AUTO_REDIR = *Net::SAMLc::ZXID_AUTO_REDIR;
*AUTO_SOAPC = *Net::SAMLc::ZXID_AUTO_SOAPC;
*AUTO_SOAPH = *Net::SAMLc::ZXID_AUTO_SOAPH;
*AUTO_METAC = *Net::SAMLc::ZXID_AUTO_METAC;
*AUTO_METAH = *Net::SAMLc::ZXID_AUTO_METAH;
*AUTO_LOGINC = *Net::SAMLc::ZXID_AUTO_LOGINC;
*AUTO_LOGINH = *Net::SAMLc::ZXID_AUTO_LOGINH;
*AUTO_MGMTC = *Net::SAMLc::ZXID_AUTO_MGMTC;
*AUTO_MGMTH = *Net::SAMLc::ZXID_AUTO_MGMTH;
*AUTO_FORMF = *Net::SAMLc::ZXID_AUTO_FORMF;
*AUTO_FORMT = *Net::SAMLc::ZXID_AUTO_FORMT;
*AUTO_ALL = *Net::SAMLc::ZXID_AUTO_ALL;
*AUTO_DEBUG = *Net::SAMLc::ZXID_AUTO_DEBUG;
*AUTO_FMTQ = *Net::SAMLc::ZXID_AUTO_FMTQ;
*AUTO_FMTJ = *Net::SAMLc::ZXID_AUTO_FMTJ;
*SSO_SIGN_A7N = *Net::SAMLc::ZXID_SSO_SIGN_A7N;
*SSO_SIGN_RESP = *Net::SAMLc::ZXID_SSO_SIGN_RESP;
*SSO_SIGN_A7N_SIMPLE = *Net::SAMLc::ZXID_SSO_SIGN_A7N_SIMPLE;
*ZXSIG_OK = *Net::SAMLc::ZXSIG_OK;
*ZXSIG_BAD_DALGO = *Net::SAMLc::ZXSIG_BAD_DALGO;
*ZXSIG_DIGEST_LEN = *Net::SAMLc::ZXSIG_DIGEST_LEN;
*ZXSIG_BAD_DIGEST = *Net::SAMLc::ZXSIG_BAD_DIGEST;
*ZXSIG_BAD_SALGO = *Net::SAMLc::ZXSIG_BAD_SALGO;
*ZXSIG_BAD_CERT = *Net::SAMLc::ZXSIG_BAD_CERT;
*ZXSIG_VFY_FAIL = *Net::SAMLc::ZXSIG_VFY_FAIL;
*ZXSIG_NO_SIG = *Net::SAMLc::ZXSIG_NO_SIG;
*ZXSIG_TIMEOUT = *Net::SAMLc::ZXSIG_TIMEOUT;
*ZXSIG_AUDIENCE = *Net::SAMLc::ZXSIG_AUDIENCE;
*ZXLOG_RELY_DIR = *Net::SAMLc::ZXLOG_RELY_DIR;
*ZXLOG_ISSUE_DIR = *Net::SAMLc::ZXLOG_ISSUE_DIR;
*ZXLOG_A7N_KIND = *Net::SAMLc::ZXLOG_A7N_KIND;
*ZXLOG_MSG_KIND = *Net::SAMLc::ZXLOG_MSG_KIND;
*ZXLOG_WIR_KIND = *Net::SAMLc::ZXLOG_WIR_KIND;
*DAP_SCOPE_BASE = *Net::SAMLc::ZXID_DAP_SCOPE_BASE;
*DAP_SCOPE_SINGLE = *Net::SAMLc::ZXID_DAP_SCOPE_SINGLE;
*DAP_SCOPE_SUBTREE = *Net::SAMLc::ZXID_DAP_SCOPE_SUBTREE;
*CDC_CHOICE_ALWAYS_FIRST = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_FIRST;
*CDC_CHOICE_ALWAYS_LAST = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_LAST;
*CDC_CHOICE_ALWAYS_ONLY = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_ONLY;
*CDC_CHOICE_UI_PREF = *Net::SAMLc::ZXID_CDC_CHOICE_UI_PREF;
*CDC_CHOICE_UI_NOPREF = *Net::SAMLc::ZXID_CDC_CHOICE_UI_NOPREF;
*CDC_CHOICE_UI_ONLY_CDC = *Net::SAMLc::ZXID_CDC_CHOICE_UI_ONLY_CDC;
*ART = *Net::SAMLc::ZXID_SAML2_ART;
*POST = *Net::SAMLc::ZXID_SAML2_POST;
*PAOS = *Net::SAMLc::ZXID_SAML2_PAOS;
*SOAP = *Net::SAMLc::ZXID_SAML2_SOAP;
*POST_SIMPLE_SIGN = *Net::SAMLc::ZXID_SAML2_POST_SIMPLE_SIGN;
*REDIR = *Net::SAMLc::ZXID_SAML2_REDIR;
*URI = *Net::SAMLc::ZXID_SAML2_URI;
*SLO_SVC = *Net::SAMLc::ZXID_SLO_SVC;
*MNI_SVC = *Net::SAMLc::ZXID_MNI_SVC;
*ACS_SVC = *Net::SAMLc::ZXID_ACS_SVC;
*SEC_MECH_NULL = *Net::SAMLc::ZXID_SEC_MECH_NULL;
*SEC_MECH_BEARER = *Net::SAMLc::ZXID_SEC_MECH_BEARER;
*SEC_MECH_SAML = *Net::SAMLc::ZXID_SEC_MECH_SAML;
*SEC_MECH_X509 = *Net::SAMLc::ZXID_SEC_MECH_X509;
*SEC_MECH_PEERS = *Net::SAMLc::ZXID_SEC_MECH_PEERS;
*FAIL = *Net::SAMLc::ZXID_FAIL;
*OK = *Net::SAMLc::ZXID_OK;
*REDIR_OK = *Net::SAMLc::ZXID_REDIR_OK;
*SSO_OK = *Net::SAMLc::ZXID_SSO_OK;
*IDP_REQ = *Net::SAMLc::ZXID_IDP_REQ;
*TRUE = *Net::SAMLc::ZXID_TRUE;
*FALSE = *Net::SAMLc::ZXID_FALSE;
*CRLF = *Net::SAMLc::CRLF;
*CRLF2 = *Net::SAMLc::CRLF2;
*std_basis_64 = *Net::SAMLc::std_basis_64;
*safe_basis_64 = *Net::SAMLc::safe_basis_64;
*zx_std_index_64 = *Net::SAMLc::zx_std_index_64;
*PROTO = *Net::SAMLc::SAML2_PROTO;
*VERSION = *Net::SAMLc::SAML2_VERSION;
*SC_SUCCESS = *Net::SAMLc::SAML2_SC_SUCCESS;
*SC_REQUESTER = *Net::SAMLc::SAML2_SC_REQUESTER;
*SC_RESPONDER = *Net::SAMLc::SAML2_SC_RESPONDER;
*SC_VERSION = *Net::SAMLc::SAML2_SC_VERSION;
*SC_AUTHNFAIL = *Net::SAMLc::SAML2_SC_AUTHNFAIL;
*SC_INVATTRNV = *Net::SAMLc::SAML2_SC_INVATTRNV;
*SC_INVNIDPOL = *Net::SAMLc::SAML2_SC_INVNIDPOL;
*SC_NOAUTNCTX = *Net::SAMLc::SAML2_SC_NOAUTNCTX;
*SC_NOAVALIDP = *Net::SAMLc::SAML2_SC_NOAVALIDP;
*SC_NOPASSIVE = *Net::SAMLc::SAML2_SC_NOPASSIVE;
*SC_NOSUPPIDP = *Net::SAMLc::SAML2_SC_NOSUPPIDP;
*SC_PARLOGOUT = *Net::SAMLc::SAML2_SC_PARLOGOUT;
*SC_PROXYCEXC = *Net::SAMLc::SAML2_SC_PROXYCEXC;
*SC_REQDENIED = *Net::SAMLc::SAML2_SC_REQDENIED;
*SC_REQUNSUPP = *Net::SAMLc::SAML2_SC_REQUNSUPP;
*SC_REQVERDEP = *Net::SAMLc::SAML2_SC_REQVERDEP;
*SC_REQVERHIG = *Net::SAMLc::SAML2_SC_REQVERHIG;
*SC_REQVERLOW = *Net::SAMLc::SAML2_SC_REQVERLOW;
*SC_RESONRECG = *Net::SAMLc::SAML2_SC_RESONRECG;
*SC_TOOMNYRES = *Net::SAMLc::SAML2_SC_TOOMNYRES;
*SC_UNKATTPRO = *Net::SAMLc::SAML2_SC_UNKATTPRO;
*SC_UNKPRNCPL = *Net::SAMLc::SAML2_SC_UNKPRNCPL;
*SC_UNSUPPBIN = *Net::SAMLc::SAML2_SC_UNSUPPBIN;
*AUTHCTX_PASSWORDPROTECTED = *Net::SAMLc::SAML_AUTHCTX_PASSWORDPROTECTED;
*AUTHCTX_PASSWORD = *Net::SAMLc::SAML_AUTHCTX_PASSWORD;
*AUTHCTX_SSL_TLS_CERT = *Net::SAMLc::SAML_AUTHCTX_SSL_TLS_CERT;
*AUTHCTX_PREVSESS = *Net::SAMLc::SAML_AUTHCTX_PREVSESS;
*AUTHCTX_UNSPCFD = *Net::SAMLc::SAML_AUTHCTX_UNSPCFD;
*AUTHCTX_INPROT = *Net::SAMLc::SAML_AUTHCTX_INPROT;
*UNSPECIFIED_NID_FMT = *Net::SAMLc::SAML2_UNSPECIFIED_NID_FMT;
*EMAILADDR_NID_FMT = *Net::SAMLc::SAML2_EMAILADDR_NID_FMT;
*X509_NID_FMT = *Net::SAMLc::SAML2_X509_NID_FMT;
*WINDOMAINQN_NID_FMT = *Net::SAMLc::SAML2_WINDOMAINQN_NID_FMT;
*KERBEROS_NID_FMT = *Net::SAMLc::SAML2_KERBEROS_NID_FMT;
*ENTITY_NID_FMT = *Net::SAMLc::SAML2_ENTITY_NID_FMT;
*PERSISTENT_NID_FMT = *Net::SAMLc::SAML2_PERSISTENT_NID_FMT;
*TRANSIENT_NID_FMT = *Net::SAMLc::SAML2_TRANSIENT_NID_FMT;
*SSO_BRWS = *Net::SAMLc::SAML2_SSO_BRWS;
*SSO_ECP = *Net::SAMLc::SAML2_SSO_ECP;
*SLO = *Net::SAMLc::SAML2_SLO;
*NIREG = *Net::SAMLc::SAML2_NIREG;
*NIMAP = *Net::SAMLc::SAML2_NIMAP;
*ARTIFACT = *Net::SAMLc::SAML2_ARTIFACT;
*QUERY = *Net::SAMLc::SAML2_QUERY;
*PAOS = *Net::SAMLc::SAML2_PAOS;
*SOAP = *Net::SAMLc::SAML2_SOAP;
*REDIR = *Net::SAMLc::SAML2_REDIR;
*ART = *Net::SAMLc::SAML2_ART;
*POST = *Net::SAMLc::SAML2_POST;
*POST_SIMPLE_SIGN = *Net::SAMLc::SAML2_POST_SIMPLE_SIGN;
*URI = *Net::SAMLc::SAML2_URI;
*AP_BASIC = *Net::SAMLc::SAML2_AP_BASIC;
*AP_X500 = *Net::SAMLc::SAML2_AP_X500;
*AP_UUID = *Net::SAMLc::SAML2_AP_UUID;
*AP_DCE = *Net::SAMLc::SAML2_AP_DCE;
*AP_XACML = *Net::SAMLc::SAML2_AP_XACML;
*ATTRNAME_UNSPECIFIED = *Net::SAMLc::ATTRNAME_UNSPECIFIED;
*ATTRNAME_BASIC = *Net::SAMLc::ATTRNAME_BASIC;
*SOAP_ACTOR_NEXT = *Net::SAMLc::SOAP_ACTOR_NEXT;
*BEARER = *Net::SAMLc::SAML2_BEARER;
*SOAP_ACTION = *Net::SAMLc::SAML2_SOAP_ACTION;
*ACTION_RW = *Net::SAMLc::ACTION_RW;
*ACTION_RWN = *Net::SAMLc::ACTION_RWN;
*ACTION_GHPP = *Net::SAMLc::ACTION_GHPP;
*ACTION_UNIX = *Net::SAMLc::ACTION_UNIX;
*PAOS_CONTENT = *Net::SAMLc::PAOS_CONTENT;
1;
