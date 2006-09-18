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
*zx_dup_str = *Net::SAMLc::zx_dup_str;
*zx_dup_len_str = *Net::SAMLc::zx_dup_len_str;
*zx_strf = *Net::SAMLc::zx_strf;
*zx_str_free = *Net::SAMLc::zx_str_free;
*zx_str_to_c = *Net::SAMLc::zx_str_to_c;
*zx_str_conv = *Net::SAMLc::zx_str_conv;
*zx_alloc = *Net::SAMLc::zx_alloc;
*zx_zalloc = *Net::SAMLc::zx_zalloc;
*zx_free = *Net::SAMLc::zx_free;
*zx_fix_any_elem_dec = *Net::SAMLc::zx_fix_any_elem_dec;
*zx_locate_ns_by_prefix = *Net::SAMLc::zx_locate_ns_by_prefix;
*zx_locate_ns_by_url = *Net::SAMLc::zx_locate_ns_by_url;
*zx_is_ns_prefix = *Net::SAMLc::zx_is_ns_prefix;
*zx_xmlns_decl = *Net::SAMLc::zx_xmlns_decl;
*zx_scan_xmlns = *Net::SAMLc::zx_scan_xmlns;
*zx_len_common = *Net::SAMLc::zx_len_common;
*zx_enc_so_unknown_attrs = *Net::SAMLc::zx_enc_so_unknown_attrs;
*zx_enc_so_unknown_elems_and_content = *Net::SAMLc::zx_enc_so_unknown_elems_and_content;
*zx_easy_enc_common = *Net::SAMLc::zx_easy_enc_common;
*zx_attr_len = *Net::SAMLc::zx_attr_len;
*zx_attr_enc = *Net::SAMLc::zx_attr_enc;
*zx_dup_attr = *Net::SAMLc::zx_dup_attr;
*zx_free_attr = *Net::SAMLc::zx_free_attr;
*zx_clone_attr = *Net::SAMLc::zx_clone_attr;
*zx_free_elem_common = *Net::SAMLc::zx_free_elem_common;
*zx_clone_elem_common = *Net::SAMLc::zx_clone_elem_common;
*zx_dup_strs_common = *Net::SAMLc::zx_dup_strs_common;
*zx_walk_so_unknown_attributes = *Net::SAMLc::zx_walk_so_unknown_attributes;
*zx_walk_so_unknown_elems_and_content = *Net::SAMLc::zx_walk_so_unknown_elems_and_content;
*zx_deep_clone_simple_elems = *Net::SAMLc::zx_deep_clone_simple_elems;
*zx_walk_so_simple_elems = *Net::SAMLc::zx_walk_so_simple_elems;
*zx_free_simple_elems = *Net::SAMLc::zx_free_simple_elems;
*zx_dup_strs_simple_elems = *Net::SAMLc::zx_dup_strs_simple_elems;
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
*key_desc = *Net::SAMLc::zxid_key_desc;
*slo_desc = *Net::SAMLc::zxid_slo_desc;
*nireg_desc = *Net::SAMLc::zxid_nireg_desc;
*ac_desc = *Net::SAMLc::zxid_ac_desc;
*sp_sso_desc = *Net::SAMLc::zxid_sp_sso_desc;
*sp_meta = *Net::SAMLc::zxid_sp_meta;
*send_sp_meta = *Net::SAMLc::zxid_send_sp_meta;
*my_entity_id = *Net::SAMLc::zxid_my_entity_id;
*my_cdc_url = *Net::SAMLc::zxid_my_cdc_url;
*my_issuer = *Net::SAMLc::zxid_my_issuer;
*read_cert = *Net::SAMLc::zxid_read_cert;
*read_private_key = *Net::SAMLc::zxid_read_private_key;
*set_opt = *Net::SAMLc::zxid_set_opt;
*url_set = *Net::SAMLc::zxid_url_set;
*init_conf = *Net::SAMLc::zxid_init_conf;
*new_conf = *Net::SAMLc::zxid_new_conf;
*parse_cgi = *Net::SAMLc::zxid_parse_cgi;
*new_cgi = *Net::SAMLc::zxid_new_cgi;
*fetch_ses = *Net::SAMLc::zxid_fetch_ses;
*get_ses = *Net::SAMLc::zxid_get_ses;
*put_ses = *Net::SAMLc::zxid_put_ses;
*del_ses = *Net::SAMLc::zxid_del_ses;
*lecp_check = *Net::SAMLc::zxid_lecp_check;
*cdc_read = *Net::SAMLc::zxid_cdc_read;
*cdc_check = *Net::SAMLc::zxid_cdc_check;
*soap_call_body = *Net::SAMLc::zxid_soap_call_body;
*soap_cgi_resp_body = *Net::SAMLc::zxid_soap_cgi_resp_body;
*idp_loc_raw = *Net::SAMLc::zxid_idp_loc_raw;
*idp_loc = *Net::SAMLc::zxid_idp_loc;
*idp_soap = *Net::SAMLc::zxid_idp_soap;
*redir_enc = *Net::SAMLc::zxid_saml2_redir_enc;
*redir = *Net::SAMLc::zxid_saml2_redir;
*redir_url = *Net::SAMLc::zxid_saml2_redir_url;
*ok = *Net::SAMLc::zxid_saml_ok;
*pick_sso_profile = *Net::SAMLc::zxid_pick_sso_profile;
*start_sso = *Net::SAMLc::zxid_start_sso;
*start_sso_url = *Net::SAMLc::zxid_start_sso_url;
*sp_deref_art = *Net::SAMLc::zxid_sp_deref_art;
*sp_sso_finalize = *Net::SAMLc::zxid_sp_sso_finalize;
*map_nid_fmt = *Net::SAMLc::zxid_saml2_map_nid_fmt;
*map_protocol_binding = *Net::SAMLc::zxid_saml2_map_protocol_binding;
*map_authn_ctx = *Net::SAMLc::zxid_saml2_map_authn_ctx;
*date_time = *Net::SAMLc::zxid_date_time;
*mk_id = *Net::SAMLc::zxid_mk_id;
*issuer = *Net::SAMLc::zxid_issuer;
*sp_slo_soap = *Net::SAMLc::zxid_sp_slo_soap;
*sp_slo_redir = *Net::SAMLc::zxid_sp_slo_redir;
*sp_nireg_soap = *Net::SAMLc::zxid_sp_nireg_soap;
*sp_nireg_redir = *Net::SAMLc::zxid_sp_nireg_redir;
*sp_dispatch = *Net::SAMLc::zxid_sp_dispatch;
*sp_soap_dispatch = *Net::SAMLc::zxid_sp_soap_dispatch;
*mk_authn_req = *Net::SAMLc::zxid_mk_authn_req;
*mk_art_deref = *Net::SAMLc::zxid_mk_art_deref;
*mk_Status = *Net::SAMLc::zxid_mk_Status;
*OK = *Net::SAMLc::zxid_OK;
*mk_logout = *Net::SAMLc::zxid_mk_logout;
*mk_logout_resp = *Net::SAMLc::zxid_mk_logout_resp;
*mk_nireg = *Net::SAMLc::zxid_mk_nireg;
*mk_nireg_resp = *Net::SAMLc::zxid_mk_nireg_resp;
*base64_fancy_raw = *Net::SAMLc::base64_fancy_raw;
*unbase64_raw = *Net::SAMLc::unbase64_raw;
*sha1_safe_base64 = *Net::SAMLc::sha1_safe_base64;
*zx_zlib_raw_deflate = *Net::SAMLc::zx_zlib_raw_deflate;
*zx_zlib_raw_inflate = *Net::SAMLc::zx_zlib_raw_inflate;
*zx_url_encode = *Net::SAMLc::zx_url_encode;
*name_from_path = *Net::SAMLc::name_from_path;
*open_fd_from_path = *Net::SAMLc::open_fd_from_path;
*read_all_fd = *Net::SAMLc::read_all_fd;
*write_all_fd = *Net::SAMLc::write_all_fd;
*write_or_append_lock_c_path = *Net::SAMLc::write_or_append_lock_c_path;
*curl_write_data = *Net::SAMLc::zxid_curl_write_data;
*curl_read_data = *Net::SAMLc::zxid_curl_read_data;
*version = *Net::SAMLc::zxid_version;
*version_str = *Net::SAMLc::zxid_version_str;

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


############# Class : Net::SAML::zx_ns_s ##############

package Net::SAML::zx_ns_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zx_ns_s_n_get;
*swig_n_set = *Net::SAMLc::zx_ns_s_n_set;
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
*swig_span_start_get = *Net::SAMLc::zx_node_s_span_start_get;
*swig_span_start_set = *Net::SAMLc::zx_node_s_span_start_set;
*swig_span_end_get = *Net::SAMLc::zx_node_s_span_end_get;
*swig_span_end_set = *Net::SAMLc::zx_node_s_span_end_set;
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


############# Class : Net::SAML::zx_str_s ##############

package Net::SAML::zx_str_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_g_get = *Net::SAMLc::zx_str_s_g_get;
*swig_g_set = *Net::SAMLc::zx_str_s_g_set;
*swig_len_get = *Net::SAMLc::zx_str_s_len_get;
*swig_len_set = *Net::SAMLc::zx_str_s_len_set;
*swig_s_get = *Net::SAMLc::zx_str_s_s_get;
*swig_s_set = *Net::SAMLc::zx_str_s_s_set;
sub new {
    my $pkg = shift;
    my $self = Net::SAMLc::new_zx_str_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::SAMLc::delete_zx_str_s($self);
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
*swig_ctx_get = *Net::SAMLc::zxid_conf_ctx_get;
*swig_ctx_set = *Net::SAMLc::zxid_conf_ctx_set;
*swig_cot_get = *Net::SAMLc::zxid_conf_cot_get;
*swig_cot_set = *Net::SAMLc::zxid_conf_cot_set;
*swig_path_len_get = *Net::SAMLc::zxid_conf_path_len_get;
*swig_path_len_set = *Net::SAMLc::zxid_conf_path_len_set;
*swig_path_get = *Net::SAMLc::zxid_conf_path_get;
*swig_path_set = *Net::SAMLc::zxid_conf_path_set;
*swig_url_get = *Net::SAMLc::zxid_conf_url_get;
*swig_url_set = *Net::SAMLc::zxid_conf_url_set;
*swig_cdc_choice_get = *Net::SAMLc::zxid_conf_cdc_choice_get;
*swig_cdc_choice_set = *Net::SAMLc::zxid_conf_cdc_choice_set;
*swig_cdc_url_get = *Net::SAMLc::zxid_conf_cdc_url_get;
*swig_cdc_url_set = *Net::SAMLc::zxid_conf_cdc_url_set;
*swig_md_fetch_get = *Net::SAMLc::zxid_conf_md_fetch_get;
*swig_md_fetch_set = *Net::SAMLc::zxid_conf_md_fetch_set;
*swig_md_populate_cache_get = *Net::SAMLc::zxid_conf_md_populate_cache_get;
*swig_md_populate_cache_set = *Net::SAMLc::zxid_conf_md_populate_cache_set;
*swig_md_cache_first_get = *Net::SAMLc::zxid_conf_md_cache_first_get;
*swig_md_cache_first_set = *Net::SAMLc::zxid_conf_md_cache_first_set;
*swig_md_cache_last_get = *Net::SAMLc::zxid_conf_md_cache_last_get;
*swig_md_cache_last_set = *Net::SAMLc::zxid_conf_md_cache_last_set;
*swig_authn_req_sign_get = *Net::SAMLc::zxid_conf_authn_req_sign_get;
*swig_authn_req_sign_set = *Net::SAMLc::zxid_conf_authn_req_sign_set;
*swig_want_sso_a7n_signed_get = *Net::SAMLc::zxid_conf_want_sso_a7n_signed_get;
*swig_want_sso_a7n_signed_set = *Net::SAMLc::zxid_conf_want_sso_a7n_signed_set;
*swig_affiliation_get = *Net::SAMLc::zxid_conf_affiliation_get;
*swig_affiliation_set = *Net::SAMLc::zxid_conf_affiliation_set;
*swig_nice_name_get = *Net::SAMLc::zxid_conf_nice_name_get;
*swig_nice_name_set = *Net::SAMLc::zxid_conf_nice_name_set;
*swig_ses_arch_dir_get = *Net::SAMLc::zxid_conf_ses_arch_dir_get;
*swig_ses_arch_dir_set = *Net::SAMLc::zxid_conf_ses_arch_dir_set;
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
*swig_sid_get = *Net::SAMLc::zxid_cgi_sid_get;
*swig_sid_set = *Net::SAMLc::zxid_cgi_sid_set;
*swig_nid_get = *Net::SAMLc::zxid_cgi_nid_get;
*swig_nid_set = *Net::SAMLc::zxid_cgi_nid_set;
*swig_user_get = *Net::SAMLc::zxid_cgi_user_get;
*swig_user_set = *Net::SAMLc::zxid_cgi_user_set;
*swig_pw_get = *Net::SAMLc::zxid_cgi_pw_get;
*swig_pw_set = *Net::SAMLc::zxid_cgi_pw_set;
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
*swig_rs_get = *Net::SAMLc::zxid_cgi_rs_get;
*swig_rs_set = *Net::SAMLc::zxid_cgi_rs_set;
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
*swig_err_get = *Net::SAMLc::zxid_cgi_err_get;
*swig_err_set = *Net::SAMLc::zxid_cgi_err_set;
*swig_msg_get = *Net::SAMLc::zxid_cgi_msg_get;
*swig_msg_set = *Net::SAMLc::zxid_cgi_msg_set;
*swig_dbg_get = *Net::SAMLc::zxid_cgi_dbg_get;
*swig_dbg_set = *Net::SAMLc::zxid_cgi_dbg_set;
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
*swig_sid_get = *Net::SAMLc::zxid_ses_sid_get;
*swig_sid_set = *Net::SAMLc::zxid_ses_sid_set;
*swig_nid_get = *Net::SAMLc::zxid_ses_nid_get;
*swig_nid_set = *Net::SAMLc::zxid_ses_nid_set;
*swig_a7n_get = *Net::SAMLc::zxid_ses_a7n_get;
*swig_a7n_set = *Net::SAMLc::zxid_ses_a7n_set;
*swig_sesbuf_get = *Net::SAMLc::zxid_ses_sesbuf_get;
*swig_sesbuf_set = *Net::SAMLc::zxid_ses_sesbuf_set;
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


############# Class : Net::SAML::zxid_entity ##############

package Net::SAML::zxid_entity;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::SAML );
%OWNER = ();
%ITERATORS = ();
*swig_n_get = *Net::SAMLc::zxid_entity_n_get;
*swig_n_set = *Net::SAMLc::zxid_entity_n_set;
*swig_eid_len_get = *Net::SAMLc::zxid_entity_eid_len_get;
*swig_eid_len_set = *Net::SAMLc::zxid_entity_eid_len_set;
*swig_eid_get = *Net::SAMLc::zxid_entity_eid_get;
*swig_eid_set = *Net::SAMLc::zxid_entity_eid_set;
*swig_sha1_name_get = *Net::SAMLc::zxid_entity_sha1_name_get;
*swig_sha1_name_set = *Net::SAMLc::zxid_entity_sha1_name_set;
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
*ZX_TOK_XMLNS = *Net::SAMLc::ZX_TOK_XMLNS;
*ZX_TOK_DATA = *Net::SAMLc::ZX_TOK_DATA;
*ZX_TOK_NOT_FOUND = *Net::SAMLc::ZX_TOK_NOT_FOUND;
*CDC_CHOICE_ALWAYS_FIRST = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_FIRST;
*CDC_CHOICE_ALWAYS_LAST = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_LAST;
*CDC_CHOICE_ALWAYS_ONLY = *Net::SAMLc::ZXID_CDC_CHOICE_ALWAYS_ONLY;
*CDC_CHOICE_UI_PREF = *Net::SAMLc::ZXID_CDC_CHOICE_UI_PREF;
*CDC_CHOICE_UI_NOPREF = *Net::SAMLc::ZXID_CDC_CHOICE_UI_NOPREF;
*ART = *Net::SAMLc::ZXID_SAML2_ART;
*POST = *Net::SAMLc::ZXID_SAML2_POST;
*PAOS = *Net::SAMLc::ZXID_SAML2_PAOS;
*SOAP = *Net::SAMLc::ZXID_SAML2_SOAP;
*REDIR = *Net::SAMLc::ZXID_SAML2_REDIR;
*URI = *Net::SAMLc::ZXID_SAML2_URI;
*SLO_SVC = *Net::SAMLc::ZXID_SLO_SVC;
*NIREG_SVC = *Net::SAMLc::ZXID_NIREG_SVC;
*FAIL = *Net::SAMLc::ZXID_FAIL;
*OK = *Net::SAMLc::ZXID_OK;
*REDIR_OK = *Net::SAMLc::ZXID_REDIR_OK;
*SSO_OK = *Net::SAMLc::ZXID_SSO_OK;
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