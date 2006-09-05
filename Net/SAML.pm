# This file was created automatically by SWIG 1.3.29.
# Don't modify this file, modify the SWIG interface instead.
package Net::SAML;
require Exporter;
require DynaLoader;
@ISA = qw(Exporter DynaLoader);
package zxidc;
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

*zx_new_simple_elem = *zxidc::zx_new_simple_elem;
*zx_ref_len_simple_elem = *zxidc::zx_ref_len_simple_elem;
*zx_ref_simple_elem = *zxidc::zx_ref_simple_elem;
*zx_dup_len_simple_elem = *zxidc::zx_dup_len_simple_elem;
*zx_dup_simple_elem = *zxidc::zx_dup_simple_elem;
*zx_ref_str = *zxidc::zx_ref_str;
*zx_ref_len_str = *zxidc::zx_ref_len_str;
*zx_dup_str = *zxidc::zx_dup_str;
*zx_dup_len_str = *zxidc::zx_dup_len_str;
*zx_strf = *zxidc::zx_strf;
*zx_str_free = *zxidc::zx_str_free;
*zx_str_to_c = *zxidc::zx_str_to_c;
*zx_alloc = *zxidc::zx_alloc;
*zx_zalloc = *zxidc::zx_zalloc;
*zx_free = *zxidc::zx_free;
*zx_fix_any_elem_dec = *zxidc::zx_fix_any_elem_dec;
*zx_locate_ns_by_prefix = *zxidc::zx_locate_ns_by_prefix;
*zx_locate_ns_by_url = *zxidc::zx_locate_ns_by_url;
*zx_is_ns_prefix = *zxidc::zx_is_ns_prefix;
*zx_xmlns_decl = *zxidc::zx_xmlns_decl;
*zx_scan_xmlns = *zxidc::zx_scan_xmlns;
*zx_len_common = *zxidc::zx_len_common;
*zx_enc_so_unknown_attrs = *zxidc::zx_enc_so_unknown_attrs;
*zx_enc_so_unknown_elems_and_content = *zxidc::zx_enc_so_unknown_elems_and_content;
*zx_easy_enc_common = *zxidc::zx_easy_enc_common;
*zx_attr_len = *zxidc::zx_attr_len;
*zx_attr_enc = *zxidc::zx_attr_enc;
*zx_dup_attr = *zxidc::zx_dup_attr;
*zx_free_attr = *zxidc::zx_free_attr;
*zx_clone_attr = *zxidc::zx_clone_attr;
*zx_free_elem_common = *zxidc::zx_free_elem_common;
*zx_clone_elem_common = *zxidc::zx_clone_elem_common;
*zx_dup_strs_common = *zxidc::zx_dup_strs_common;
*zx_walk_so_unknown_attributes = *zxidc::zx_walk_so_unknown_attributes;
*zx_walk_so_unknown_elems_and_content = *zxidc::zx_walk_so_unknown_elems_and_content;
*zx_deep_clone_simple_elems = *zxidc::zx_deep_clone_simple_elems;
*zx_walk_so_simple_elems = *zxidc::zx_walk_so_simple_elems;
*zx_free_simple_elems = *zxidc::zx_free_simple_elems;
*zx_dup_strs_simple_elems = *zxidc::zx_dup_strs_simple_elems;
*get_ent_from_file = *zxidc::zxid_get_ent_from_file;
*get_ent_from_cache = *zxidc::zxid_get_ent_from_cache;
*write_ent_to_cache = *zxidc::zxid_write_ent_to_cache;
*parse_meta = *zxidc::zxid_parse_meta;
*get_meta_ss = *zxidc::zxid_get_meta_ss;
*get_meta = *zxidc::zxid_get_meta;
*get_ent_ss = *zxidc::zxid_get_ent_ss;
*get_ent = *zxidc::zxid_get_ent;
*get_ent_by_succinct_id = *zxidc::zxid_get_ent_by_succinct_id;
*get_ent_by_sha1_name = *zxidc::zxid_get_ent_by_sha1_name;
*load_cot_cache = *zxidc::zxid_load_cot_cache;
*key_desc = *zxidc::zxid_key_desc;
*slo_desc = *zxidc::zxid_slo_desc;
*nireg_desc = *zxidc::zxid_nireg_desc;
*ac_desc = *zxidc::zxid_ac_desc;
*sp_sso_desc = *zxidc::zxid_sp_sso_desc;
*send_sp_meta = *zxidc::zxid_send_sp_meta;
*my_entity_id = *zxidc::zxid_my_entity_id;
*my_issuer = *zxidc::zxid_my_issuer;
*read_cert = *zxidc::zxid_read_cert;
*read_private_key = *zxidc::zxid_read_private_key;
*set_opt = *zxidc::zxid_set_opt;
*url_set = *zxidc::zxid_url_set;
*init_conf = *zxidc::zxid_init_conf;
*new_conf = *zxidc::zxid_new_conf;
*parse_cgi = *zxidc::zxid_parse_cgi;
*new_cgi = *zxidc::zxid_new_cgi;
*fetch_ses = *zxidc::zxid_fetch_ses;
*get_ses = *zxidc::zxid_get_ses;
*put_ses = *zxidc::zxid_put_ses;
*del_ses = *zxidc::zxid_del_ses;
*lecp_check = *zxidc::zxid_lecp_check;
*cdc_read = *zxidc::zxid_cdc_read;
*cdc_check = *zxidc::zxid_cdc_check;
*soap_call_body = *zxidc::zxid_soap_call_body;
*soap_cgi_resp_body = *zxidc::zxid_soap_cgi_resp_body;
*idp_loc_raw = *zxidc::zxid_idp_loc_raw;
*idp_loc = *zxidc::zxid_idp_loc;
*idp_soap = *zxidc::zxid_idp_soap;
*saml2_redir_enc = *zxidc::zxid_saml2_redir_enc;
*saml2_redir = *zxidc::zxid_saml2_redir;
*saml2_redir_url = *zxidc::zxid_saml2_redir_url;
*saml_ok = *zxidc::zxid_saml_ok;
*pick_sso_profile = *zxidc::zxid_pick_sso_profile;
*start_sso = *zxidc::zxid_start_sso;
*start_sso_url = *zxidc::zxid_start_sso_url;
*sp_deref_art = *zxidc::zxid_sp_deref_art;
*sp_sso_finalize = *zxidc::zxid_sp_sso_finalize;
*saml2_map_nid_fmt = *zxidc::zxid_saml2_map_nid_fmt;
*saml2_map_protocol_binding = *zxidc::zxid_saml2_map_protocol_binding;
*saml2_map_authn_ctx = *zxidc::zxid_saml2_map_authn_ctx;
*date_time = *zxidc::zxid_date_time;
*mk_id = *zxidc::zxid_mk_id;
*issuer = *zxidc::zxid_issuer;
*sp_slo_soap = *zxidc::zxid_sp_slo_soap;
*sp_slo_redir = *zxidc::zxid_sp_slo_redir;
*sp_nireg_soap = *zxidc::zxid_sp_nireg_soap;
*sp_nireg_redir = *zxidc::zxid_sp_nireg_redir;
*sp_dispatch = *zxidc::zxid_sp_dispatch;
*sp_soap_dispatch = *zxidc::zxid_sp_soap_dispatch;
*mk_authn_req = *zxidc::zxid_mk_authn_req;
*mk_art_deref = *zxidc::zxid_mk_art_deref;
*mk_Status = *zxidc::zxid_mk_Status;
*OK = *zxidc::zxid_OK;
*mk_logout = *zxidc::zxid_mk_logout;
*mk_logout_resp = *zxidc::zxid_mk_logout_resp;
*mk_nireg = *zxidc::zxid_mk_nireg;
*mk_nireg_resp = *zxidc::zxid_mk_nireg_resp;
*base64_fancy_raw = *zxidc::base64_fancy_raw;
*unbase64_raw = *zxidc::unbase64_raw;
*sha1_safe_base64 = *zxidc::sha1_safe_base64;
*zx_zlib_raw_deflate = *zxidc::zx_zlib_raw_deflate;
*zx_zlib_raw_inflate = *zxidc::zx_zlib_raw_inflate;
*zx_url_encode = *zxidc::zx_url_encode;
*name_from_path = *zxidc::name_from_path;
*open_fd_from_path = *zxidc::open_fd_from_path;
*read_all_fd = *zxidc::read_all_fd;
*write_all_fd = *zxidc::write_all_fd;
*write_or_append_lock_c_path = *zxidc::write_or_append_lock_c_path;
*curl_write_data = *zxidc::zxid_curl_write_data;
*curl_read_data = *zxidc::zxid_curl_read_data;
*version = *zxidc::zxid_version;
*version_str = *zxidc::zxid_version_str;

############# Class : zxid::zx_ctx ##############

package Net::SAML::zx_ctx;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_base_get = *zxidc::zx_ctx_base_get;
*swig_base_set = *zxidc::zx_ctx_base_set;
*swig_p_get = *zxidc::zx_ctx_p_get;
*swig_p_set = *zxidc::zx_ctx_p_set;
*swig_lim_get = *zxidc::zx_ctx_lim_get;
*swig_lim_set = *zxidc::zx_ctx_lim_set;
*swig_ns_tab_get = *zxidc::zx_ctx_ns_tab_get;
*swig_ns_tab_set = *zxidc::zx_ctx_ns_tab_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_ctx(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_ctx($self);
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


############# Class : zxid::zx_ns_s ##############

package Net::SAML::zx_ns_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *zxidc::zx_ns_s_n_get;
*swig_n_set = *zxidc::zx_ns_s_n_set;
*swig_prefix_len_get = *zxidc::zx_ns_s_prefix_len_get;
*swig_prefix_len_set = *zxidc::zx_ns_s_prefix_len_set;
*swig_prefix_get = *zxidc::zx_ns_s_prefix_get;
*swig_prefix_set = *zxidc::zx_ns_s_prefix_set;
*swig_url_len_get = *zxidc::zx_ns_s_url_len_get;
*swig_url_len_set = *zxidc::zx_ns_s_url_len_set;
*swig_url_get = *zxidc::zx_ns_s_url_get;
*swig_url_set = *zxidc::zx_ns_s_url_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_ns_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_ns_s($self);
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


############# Class : zxid::zx_node_s ##############

package Net::SAML::zx_node_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *zxidc::zx_node_s_n_get;
*swig_n_set = *zxidc::zx_node_s_n_set;
*swig_wo_get = *zxidc::zx_node_s_wo_get;
*swig_wo_set = *zxidc::zx_node_s_wo_set;
*swig_ns_get = *zxidc::zx_node_s_ns_get;
*swig_ns_set = *zxidc::zx_node_s_ns_set;
*swig_tok_get = *zxidc::zx_node_s_tok_get;
*swig_tok_set = *zxidc::zx_node_s_tok_set;
*swig_err_get = *zxidc::zx_node_s_err_get;
*swig_err_set = *zxidc::zx_node_s_err_set;
*swig_span_start_get = *zxidc::zx_node_s_span_start_get;
*swig_span_start_set = *zxidc::zx_node_s_span_start_set;
*swig_span_end_get = *zxidc::zx_node_s_span_end_get;
*swig_span_end_set = *zxidc::zx_node_s_span_end_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_node_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_node_s($self);
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


############# Class : zxid::zx_elem_s ##############

package Net::SAML::zx_elem_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_g_get = *zxidc::zx_elem_s_g_get;
*swig_g_set = *zxidc::zx_elem_s_g_set;
*swig_any_attr_get = *zxidc::zx_elem_s_any_attr_get;
*swig_any_attr_set = *zxidc::zx_elem_s_any_attr_set;
*swig_any_elem_get = *zxidc::zx_elem_s_any_elem_get;
*swig_any_elem_set = *zxidc::zx_elem_s_any_elem_set;
*swig_xmlns_get = *zxidc::zx_elem_s_xmlns_get;
*swig_xmlns_set = *zxidc::zx_elem_s_xmlns_set;
*swig_content_get = *zxidc::zx_elem_s_content_get;
*swig_content_set = *zxidc::zx_elem_s_content_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_elem_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_elem_s($self);
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


############# Class : zxid::zx_str_s ##############

package Net::SAML::zx_str_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_g_get = *zxidc::zx_str_s_g_get;
*swig_g_set = *zxidc::zx_str_s_g_set;
*swig_len_get = *zxidc::zx_str_s_len_get;
*swig_len_set = *zxidc::zx_str_s_len_set;
*swig_s_get = *zxidc::zx_str_s_s_get;
*swig_s_set = *zxidc::zx_str_s_s_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_str_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_str_s($self);
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


############# Class : zxid::zx_any_elem_s ##############

package Net::SAML::zx_any_elem_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_gg_get = *zxidc::zx_any_elem_s_gg_get;
*swig_gg_set = *zxidc::zx_any_elem_s_gg_set;
*swig_name_len_get = *zxidc::zx_any_elem_s_name_len_get;
*swig_name_len_set = *zxidc::zx_any_elem_s_name_len_set;
*swig_name_get = *zxidc::zx_any_elem_s_name_get;
*swig_name_set = *zxidc::zx_any_elem_s_name_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_any_elem_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_any_elem_s($self);
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


############# Class : zxid::zx_any_attr_s ##############

package Net::SAML::zx_any_attr_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_ss_get = *zxidc::zx_any_attr_s_ss_get;
*swig_ss_set = *zxidc::zx_any_attr_s_ss_set;
*swig_name_len_get = *zxidc::zx_any_attr_s_name_len_get;
*swig_name_len_set = *zxidc::zx_any_attr_s_name_len_set;
*swig_name_get = *zxidc::zx_any_attr_s_name_get;
*swig_name_set = *zxidc::zx_any_attr_s_name_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_any_attr_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_any_attr_s($self);
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


############# Class : zxid::zx_tok ##############

package Net::SAML::zx_tok;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_name_get = *zxidc::zx_tok_name_get;
*swig_name_set = *zxidc::zx_tok_name_set;
*swig_prefix_get = *zxidc::zx_tok_prefix_get;
*swig_prefix_set = *zxidc::zx_tok_prefix_set;
*swig_ns_get = *zxidc::zx_tok_ns_get;
*swig_ns_set = *zxidc::zx_tok_ns_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zx_tok(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zx_tok($self);
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


############# Class : zxid::zxid_conf ##############

package Net::SAML::zxid_conf;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_ctx_get = *zxidc::zxid_conf_ctx_get;
*swig_ctx_set = *zxidc::zxid_conf_ctx_set;
*swig_cot_get = *zxidc::zxid_conf_cot_get;
*swig_cot_set = *zxidc::zxid_conf_cot_set;
*swig_path_len_get = *zxidc::zxid_conf_path_len_get;
*swig_path_len_set = *zxidc::zxid_conf_path_len_set;
*swig_path_get = *zxidc::zxid_conf_path_get;
*swig_path_set = *zxidc::zxid_conf_path_set;
*swig_url_get = *zxidc::zxid_conf_url_get;
*swig_url_set = *zxidc::zxid_conf_url_set;
*swig_cdc_choice_get = *zxidc::zxid_conf_cdc_choice_get;
*swig_cdc_choice_set = *zxidc::zxid_conf_cdc_choice_set;
*swig_cdc_url_get = *zxidc::zxid_conf_cdc_url_get;
*swig_cdc_url_set = *zxidc::zxid_conf_cdc_url_set;
*swig_md_fetch_get = *zxidc::zxid_conf_md_fetch_get;
*swig_md_fetch_set = *zxidc::zxid_conf_md_fetch_set;
*swig_md_populate_cache_get = *zxidc::zxid_conf_md_populate_cache_get;
*swig_md_populate_cache_set = *zxidc::zxid_conf_md_populate_cache_set;
*swig_md_cache_first_get = *zxidc::zxid_conf_md_cache_first_get;
*swig_md_cache_first_set = *zxidc::zxid_conf_md_cache_first_set;
*swig_md_cache_last_get = *zxidc::zxid_conf_md_cache_last_get;
*swig_md_cache_last_set = *zxidc::zxid_conf_md_cache_last_set;
*swig_authn_req_sign_get = *zxidc::zxid_conf_authn_req_sign_get;
*swig_authn_req_sign_set = *zxidc::zxid_conf_authn_req_sign_set;
*swig_want_sso_a7n_signed_get = *zxidc::zxid_conf_want_sso_a7n_signed_get;
*swig_want_sso_a7n_signed_set = *zxidc::zxid_conf_want_sso_a7n_signed_set;
*swig_affiliation_get = *zxidc::zxid_conf_affiliation_get;
*swig_affiliation_set = *zxidc::zxid_conf_affiliation_set;
*swig_nice_name_get = *zxidc::zxid_conf_nice_name_get;
*swig_nice_name_set = *zxidc::zxid_conf_nice_name_set;
*swig_ses_arch_dir_get = *zxidc::zxid_conf_ses_arch_dir_get;
*swig_ses_arch_dir_set = *zxidc::zxid_conf_ses_arch_dir_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zxid_conf(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zxid_conf($self);
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


############# Class : zxid::zxid_cgi ##############

package Net::SAML::zxid_cgi;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_op_get = *zxidc::zxid_cgi_op_get;
*swig_op_set = *zxidc::zxid_cgi_op_set;
*swig_pr_ix_get = *zxidc::zxid_cgi_pr_ix_get;
*swig_pr_ix_set = *zxidc::zxid_cgi_pr_ix_set;
*swig_allow_create_get = *zxidc::zxid_cgi_allow_create_get;
*swig_allow_create_set = *zxidc::zxid_cgi_allow_create_set;
*swig_ispassive_get = *zxidc::zxid_cgi_ispassive_get;
*swig_ispassive_set = *zxidc::zxid_cgi_ispassive_set;
*swig_force_authn_get = *zxidc::zxid_cgi_force_authn_get;
*swig_force_authn_set = *zxidc::zxid_cgi_force_authn_set;
*swig_sid_get = *zxidc::zxid_cgi_sid_get;
*swig_sid_set = *zxidc::zxid_cgi_sid_set;
*swig_nid_get = *zxidc::zxid_cgi_nid_get;
*swig_nid_set = *zxidc::zxid_cgi_nid_set;
*swig_user_get = *zxidc::zxid_cgi_user_get;
*swig_user_set = *zxidc::zxid_cgi_user_set;
*swig_pw_get = *zxidc::zxid_cgi_pw_get;
*swig_pw_set = *zxidc::zxid_cgi_pw_set;
*swig_cdc_get = *zxidc::zxid_cgi_cdc_get;
*swig_cdc_set = *zxidc::zxid_cgi_cdc_set;
*swig_eid_get = *zxidc::zxid_cgi_eid_get;
*swig_eid_set = *zxidc::zxid_cgi_eid_set;
*swig_nid_fmt_get = *zxidc::zxid_cgi_nid_fmt_get;
*swig_nid_fmt_set = *zxidc::zxid_cgi_nid_fmt_set;
*swig_affil_get = *zxidc::zxid_cgi_affil_get;
*swig_affil_set = *zxidc::zxid_cgi_affil_set;
*swig_consent_get = *zxidc::zxid_cgi_consent_get;
*swig_consent_set = *zxidc::zxid_cgi_consent_set;
*swig_matching_rule_get = *zxidc::zxid_cgi_matching_rule_get;
*swig_matching_rule_set = *zxidc::zxid_cgi_matching_rule_set;
*swig_authn_ctx_get = *zxidc::zxid_cgi_authn_ctx_get;
*swig_authn_ctx_set = *zxidc::zxid_cgi_authn_ctx_set;
*swig_rs_get = *zxidc::zxid_cgi_rs_get;
*swig_rs_set = *zxidc::zxid_cgi_rs_set;
*swig_saml_art_get = *zxidc::zxid_cgi_saml_art_get;
*swig_saml_art_set = *zxidc::zxid_cgi_saml_art_set;
*swig_saml_resp_get = *zxidc::zxid_cgi_saml_resp_get;
*swig_saml_resp_set = *zxidc::zxid_cgi_saml_resp_set;
*swig_saml_req_get = *zxidc::zxid_cgi_saml_req_get;
*swig_saml_req_set = *zxidc::zxid_cgi_saml_req_set;
*swig_sigalg_get = *zxidc::zxid_cgi_sigalg_get;
*swig_sigalg_set = *zxidc::zxid_cgi_sigalg_set;
*swig_sig_get = *zxidc::zxid_cgi_sig_get;
*swig_sig_set = *zxidc::zxid_cgi_sig_set;
*swig_err_get = *zxidc::zxid_cgi_err_get;
*swig_err_set = *zxidc::zxid_cgi_err_set;
*swig_msg_get = *zxidc::zxid_cgi_msg_get;
*swig_msg_set = *zxidc::zxid_cgi_msg_set;
*swig_dbg_get = *zxidc::zxid_cgi_dbg_get;
*swig_dbg_set = *zxidc::zxid_cgi_dbg_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zxid_cgi(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zxid_cgi($self);
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


############# Class : zxid::zxid_ses ##############

package Net::SAML::zxid_ses;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_sid_get = *zxidc::zxid_ses_sid_get;
*swig_sid_set = *zxidc::zxid_ses_sid_set;
*swig_nid_get = *zxidc::zxid_ses_nid_get;
*swig_nid_set = *zxidc::zxid_ses_nid_set;
*swig_a7n_get = *zxidc::zxid_ses_a7n_get;
*swig_a7n_set = *zxidc::zxid_ses_a7n_set;
*swig_sesbuf_get = *zxidc::zxid_ses_sesbuf_get;
*swig_sesbuf_set = *zxidc::zxid_ses_sesbuf_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zxid_ses(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zxid_ses($self);
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


############# Class : zxid::zxid_entity ##############

package Net::SAML::zxid_entity;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *zxidc::zxid_entity_n_get;
*swig_n_set = *zxidc::zxid_entity_n_set;
*swig_eid_len_get = *zxidc::zxid_entity_eid_len_get;
*swig_eid_len_set = *zxidc::zxid_entity_eid_len_set;
*swig_eid_get = *zxidc::zxid_entity_eid_get;
*swig_eid_set = *zxidc::zxid_entity_eid_set;
*swig_sha1_name_get = *zxidc::zxid_entity_sha1_name_get;
*swig_sha1_name_set = *zxidc::zxid_entity_sha1_name_set;
*swig_ed_get = *zxidc::zxid_entity_ed_get;
*swig_ed_set = *zxidc::zxid_entity_ed_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zxid_entity(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zxid_entity($self);
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


############# Class : zxid::zxid_curl_ctx ##############

package Net::SAML::zxid_curl_ctx;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_p_get = *zxidc::zxid_curl_ctx_p_get;
*swig_p_set = *zxidc::zxid_curl_ctx_p_set;
*swig_lim_get = *zxidc::zxid_curl_ctx_lim_get;
*swig_lim_set = *zxidc::zxid_curl_ctx_lim_set;
sub new {
    my $pkg = shift;
    my $self = zxidc::new_zxid_curl_ctx(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        zxidc::delete_zxid_curl_ctx($self);
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

*ZXERR_EOF = *zxidc::ZXERR_EOF;
*ZXERR_MISMATCH_CLOSE = *zxidc::ZXERR_MISMATCH_CLOSE;
*ZXERR_BAD_ATTR_NS = *zxidc::ZXERR_BAD_ATTR_NS;
*ZXERR_BAD_ELEM_NS = *zxidc::ZXERR_BAD_ELEM_NS;
*ZXERR_MISSING_ATTR = *zxidc::ZXERR_MISSING_ATTR;
*ZXERR_EXTRA_ATTR = *zxidc::ZXERR_EXTRA_ATTR;
*ZXERR_MISSING_ELEM = *zxidc::ZXERR_MISSING_ELEM;
*ZXERR_EXTRA_ELEM = *zxidc::ZXERR_EXTRA_ELEM;
*ZXERR_ELEM_ORDER = *zxidc::ZXERR_ELEM_ORDER;
*ZXERR_BAD_NS_PREFIX = *zxidc::ZXERR_BAD_NS_PREFIX;
*ZXERR_TAG_NOT_CLOSED = *zxidc::ZXERR_TAG_NOT_CLOSED;
*ZX_TOK_XMLNS = *zxidc::ZX_TOK_XMLNS;
*ZX_TOK_DATA = *zxidc::ZX_TOK_DATA;
*ZX_TOK_NOT_FOUND = *zxidc::ZX_TOK_NOT_FOUND;
*CDC_CHOICE_ALWAYS_FIRST = *zxidc::ZXID_CDC_CHOICE_ALWAYS_FIRST;
*CDC_CHOICE_ALWAYS_LAST = *zxidc::ZXID_CDC_CHOICE_ALWAYS_LAST;
*CDC_CHOICE_ALWAYS_ONLY = *zxidc::ZXID_CDC_CHOICE_ALWAYS_ONLY;
*CDC_CHOICE_UI_PREF = *zxidc::ZXID_CDC_CHOICE_UI_PREF;
*CDC_CHOICE_UI_NOPREF = *zxidc::ZXID_CDC_CHOICE_UI_NOPREF;
*ART = *zxidc::ZXID_SAML2_ART;
*POST = *zxidc::ZXID_SAML2_POST;
*PAOS = *zxidc::ZXID_SAML2_PAOS;
*SOAP = *zxidc::ZXID_SAML2_SOAP;
*REDIR = *zxidc::ZXID_SAML2_REDIR;
*URI = *zxidc::ZXID_SAML2_URI;
*SLO_SVC = *zxidc::ZXID_SLO_SVC;
*NIREG_SVC = *zxidc::ZXID_NIREG_SVC;
*FAIL = *zxidc::ZXID_FAIL;
*OK = *zxidc::ZXID_OK;
*REDIR_OK = *zxidc::ZXID_REDIR_OK;
*SSO_OK = *zxidc::ZXID_SSO_OK;
*TRUE = *zxidc::ZXID_TRUE;
*FALSE = *zxidc::ZXID_FALSE;
*CRLF = *zxidc::CRLF;
*CRLF2 = *zxidc::CRLF2;
*std_basis_64 = *zxidc::std_basis_64;
*safe_basis_64 = *zxidc::safe_basis_64;
*zx_std_index_64 = *zxidc::zx_std_index_64;
*PROTO = *zxidc::SAML2_PROTO;
*VERSION = *zxidc::SAML2_VERSION;
*SC_SUCCESS = *zxidc::SAML2_SC_SUCCESS;
*SC_REQUESTER = *zxidc::SAML2_SC_REQUESTER;
*SC_RESPONDER = *zxidc::SAML2_SC_RESPONDER;
*SC_VERSION = *zxidc::SAML2_SC_VERSION;
*SC_AUTHNFAIL = *zxidc::SAML2_SC_AUTHNFAIL;
*SC_INVATTRNV = *zxidc::SAML2_SC_INVATTRNV;
*SC_INVNIDPOL = *zxidc::SAML2_SC_INVNIDPOL;
*SC_NOAUTNCTX = *zxidc::SAML2_SC_NOAUTNCTX;
*SC_NOAVALIDP = *zxidc::SAML2_SC_NOAVALIDP;
*SC_NOPASSIVE = *zxidc::SAML2_SC_NOPASSIVE;
*SC_NOSUPPIDP = *zxidc::SAML2_SC_NOSUPPIDP;
*SC_PARLOGOUT = *zxidc::SAML2_SC_PARLOGOUT;
*SC_PROXYCEXC = *zxidc::SAML2_SC_PROXYCEXC;
*SC_REQDENIED = *zxidc::SAML2_SC_REQDENIED;
*SC_REQUNSUPP = *zxidc::SAML2_SC_REQUNSUPP;
*SC_REQVERDEP = *zxidc::SAML2_SC_REQVERDEP;
*SC_REQVERHIG = *zxidc::SAML2_SC_REQVERHIG;
*SC_REQVERLOW = *zxidc::SAML2_SC_REQVERLOW;
*SC_RESONRECG = *zxidc::SAML2_SC_RESONRECG;
*SC_TOOMNYRES = *zxidc::SAML2_SC_TOOMNYRES;
*SC_UNKATTPRO = *zxidc::SAML2_SC_UNKATTPRO;
*SC_UNKPRNCPL = *zxidc::SAML2_SC_UNKPRNCPL;
*SC_UNSUPPBIN = *zxidc::SAML2_SC_UNSUPPBIN;
*AUTHCTX_PASSWORDPROTECTED = *zxidc::SAML_AUTHCTX_PASSWORDPROTECTED;
*AUTHCTX_PASSWORD = *zxidc::SAML_AUTHCTX_PASSWORD;
*AUTHCTX_SSL_TLS_CERT = *zxidc::SAML_AUTHCTX_SSL_TLS_CERT;
*AUTHCTX_PREVSESS = *zxidc::SAML_AUTHCTX_PREVSESS;
*AUTHCTX_UNSPCFD = *zxidc::SAML_AUTHCTX_UNSPCFD;
*AUTHCTX_INPROT = *zxidc::SAML_AUTHCTX_INPROT;
*UNSPECIFIED_NID_FMT = *zxidc::SAML2_UNSPECIFIED_NID_FMT;
*EMAILADDR_NID_FMT = *zxidc::SAML2_EMAILADDR_NID_FMT;
*X509_NID_FMT = *zxidc::SAML2_X509_NID_FMT;
*WINDOMAINQN_NID_FMT = *zxidc::SAML2_WINDOMAINQN_NID_FMT;
*KERBEROS_NID_FMT = *zxidc::SAML2_KERBEROS_NID_FMT;
*ENTITY_NID_FMT = *zxidc::SAML2_ENTITY_NID_FMT;
*PERSISTENT_NID_FMT = *zxidc::SAML2_PERSISTENT_NID_FMT;
*TRANSIENT_NID_FMT = *zxidc::SAML2_TRANSIENT_NID_FMT;
*SSO_BRWS = *zxidc::SAML2_SSO_BRWS;
*SSO_ECP = *zxidc::SAML2_SSO_ECP;
*SLO = *zxidc::SAML2_SLO;
*NIREG = *zxidc::SAML2_NIREG;
*NIMAP = *zxidc::SAML2_NIMAP;
*ARTIFACT = *zxidc::SAML2_ARTIFACT;
*QUERY = *zxidc::SAML2_QUERY;
*PAOS = *zxidc::SAML2_PAOS;
*SOAP = *zxidc::SAML2_SOAP;
*REDIR = *zxidc::SAML2_REDIR;
*ART = *zxidc::SAML2_ART;
*POST = *zxidc::SAML2_POST;
*URI = *zxidc::SAML2_URI;
*AP_BASIC = *zxidc::SAML2_AP_BASIC;
*AP_X500 = *zxidc::SAML2_AP_X500;
*AP_UUID = *zxidc::SAML2_AP_UUID;
*AP_DCE = *zxidc::SAML2_AP_DCE;
*AP_XACML = *zxidc::SAML2_AP_XACML;
*ATTRNAME_UNSPECIFIED = *zxidc::ATTRNAME_UNSPECIFIED;
*ATTRNAME_BASIC = *zxidc::ATTRNAME_BASIC;
*SOAP_ACTOR_NEXT = *zxidc::SOAP_ACTOR_NEXT;
*BEARER = *zxidc::SAML2_BEARER;
*SOAP_ACTION = *zxidc::SAML2_SOAP_ACTION;
*ACTION_RW = *zxidc::ACTION_RW;
*ACTION_RWN = *zxidc::ACTION_RWN;
*ACTION_GHPP = *zxidc::ACTION_GHPP;
*ACTION_UNIX = *zxidc::ACTION_UNIX;
*PAOS_CONTENT = *zxidc::PAOS_CONTENT;
1;
