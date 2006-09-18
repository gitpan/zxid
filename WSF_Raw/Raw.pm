# This file was created automatically by SWIG 1.3.29.
# Don't modify this file, modify the SWIG interface instead.
package Net::WSF::Raw;
require Exporter;
require DynaLoader;
@ISA = qw(Exporter DynaLoader);
package Net::WSF::Rawc;
bootstrap Net::WSF::Raw;
package Net::WSF::Raw;
@EXPORT = qw( );

# ---------- BASE METHODS -------------

package Net::WSF::Raw;

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

package Net::WSF::Raw;

*zxwsf_attr2tok = *Net::WSF::Rawc::zxwsf_attr2tok;
*zxwsf_elem2tok = *Net::WSF::Rawc::zxwsf_elem2tok;
*zxwsf_attr_lookup = *Net::WSF::Rawc::zxwsf_attr_lookup;
*zxwsf_elem_lookup = *Net::WSF::Rawc::zxwsf_elem_lookup;
*zxwsf_DEC_a_Action = *Net::WSF::Rawc::zxwsf_DEC_a_Action;
*zxwsf_NEW_a_Action = *Net::WSF::Rawc::zxwsf_NEW_a_Action;
*zxwsf_DEEP_CLONE_a_Action = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_Action;
*zxwsf_DUP_STRS_a_Action = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_Action;
*zxwsf_FREE_a_Action = *Net::WSF::Rawc::zxwsf_FREE_a_Action;
*zxwsf_WALK_SO_a_Action = *Net::WSF::Rawc::zxwsf_WALK_SO_a_Action;
*zxwsf_WALK_WO_a_Action = *Net::WSF::Rawc::zxwsf_WALK_WO_a_Action;
*zxwsf_LEN_a_Action = *Net::WSF::Rawc::zxwsf_LEN_a_Action;
*zxwsf_ENC_SO_a_Action = *Net::WSF::Rawc::zxwsf_ENC_SO_a_Action;
*zxwsf_ENC_WO_a_Action = *Net::WSF::Rawc::zxwsf_ENC_WO_a_Action;
*zxwsf_EASY_ENC_SO_a_Action = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_Action;
*zxwsf_EASY_ENC_WO_a_Action = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_Action;
*zxwsf_DEC_a_Address = *Net::WSF::Rawc::zxwsf_DEC_a_Address;
*zxwsf_NEW_a_Address = *Net::WSF::Rawc::zxwsf_NEW_a_Address;
*zxwsf_DEEP_CLONE_a_Address = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_Address;
*zxwsf_DUP_STRS_a_Address = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_Address;
*zxwsf_FREE_a_Address = *Net::WSF::Rawc::zxwsf_FREE_a_Address;
*zxwsf_WALK_SO_a_Address = *Net::WSF::Rawc::zxwsf_WALK_SO_a_Address;
*zxwsf_WALK_WO_a_Address = *Net::WSF::Rawc::zxwsf_WALK_WO_a_Address;
*zxwsf_LEN_a_Address = *Net::WSF::Rawc::zxwsf_LEN_a_Address;
*zxwsf_ENC_SO_a_Address = *Net::WSF::Rawc::zxwsf_ENC_SO_a_Address;
*zxwsf_ENC_WO_a_Address = *Net::WSF::Rawc::zxwsf_ENC_WO_a_Address;
*zxwsf_EASY_ENC_SO_a_Address = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_Address;
*zxwsf_EASY_ENC_WO_a_Address = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_Address;
*zxwsf_DEC_a_EndpointReference = *Net::WSF::Rawc::zxwsf_DEC_a_EndpointReference;
*zxwsf_NEW_a_EndpointReference = *Net::WSF::Rawc::zxwsf_NEW_a_EndpointReference;
*zxwsf_DEEP_CLONE_a_EndpointReference = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_EndpointReference;
*zxwsf_DUP_STRS_a_EndpointReference = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_EndpointReference;
*zxwsf_FREE_a_EndpointReference = *Net::WSF::Rawc::zxwsf_FREE_a_EndpointReference;
*zxwsf_WALK_SO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_WALK_SO_a_EndpointReference;
*zxwsf_WALK_WO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_WALK_WO_a_EndpointReference;
*zxwsf_LEN_a_EndpointReference = *Net::WSF::Rawc::zxwsf_LEN_a_EndpointReference;
*zxwsf_ENC_SO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_ENC_SO_a_EndpointReference;
*zxwsf_ENC_WO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_ENC_WO_a_EndpointReference;
*zxwsf_EASY_ENC_SO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_EndpointReference;
*zxwsf_EASY_ENC_WO_a_EndpointReference = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_EndpointReference;
*zxwsf_a_EndpointReference_GET_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_GET_Address;
*zxwsf_a_EndpointReference_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_GET_ReferenceParameters;
*zxwsf_a_EndpointReference_GET_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_GET_Metadata;
*zxwsf_a_EndpointReference_NUM_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_NUM_Address;
*zxwsf_a_EndpointReference_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_NUM_ReferenceParameters;
*zxwsf_a_EndpointReference_NUM_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_NUM_Metadata;
*zxwsf_a_EndpointReference_POP_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_POP_Address;
*zxwsf_a_EndpointReference_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_POP_ReferenceParameters;
*zxwsf_a_EndpointReference_POP_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_POP_Metadata;
*zxwsf_a_EndpointReference_PUSH_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUSH_Address;
*zxwsf_a_EndpointReference_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUSH_ReferenceParameters;
*zxwsf_a_EndpointReference_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUSH_Metadata;
*zxwsf_a_EndpointReference_PUT_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUT_Address;
*zxwsf_a_EndpointReference_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUT_ReferenceParameters;
*zxwsf_a_EndpointReference_PUT_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_PUT_Metadata;
*zxwsf_a_EndpointReference_ADD_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_ADD_Address;
*zxwsf_a_EndpointReference_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_ADD_ReferenceParameters;
*zxwsf_a_EndpointReference_ADD_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_ADD_Metadata;
*zxwsf_a_EndpointReference_DEL_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_DEL_Address;
*zxwsf_a_EndpointReference_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_DEL_ReferenceParameters;
*zxwsf_a_EndpointReference_DEL_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_DEL_Metadata;
*zxwsf_a_EndpointReference_REV_Address = *Net::WSF::Rawc::zxwsf_a_EndpointReference_REV_Address;
*zxwsf_a_EndpointReference_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_EndpointReference_REV_ReferenceParameters;
*zxwsf_a_EndpointReference_REV_Metadata = *Net::WSF::Rawc::zxwsf_a_EndpointReference_REV_Metadata;
*zxwsf_DEC_a_FaultTo = *Net::WSF::Rawc::zxwsf_DEC_a_FaultTo;
*zxwsf_NEW_a_FaultTo = *Net::WSF::Rawc::zxwsf_NEW_a_FaultTo;
*zxwsf_DEEP_CLONE_a_FaultTo = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_FaultTo;
*zxwsf_DUP_STRS_a_FaultTo = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_FaultTo;
*zxwsf_FREE_a_FaultTo = *Net::WSF::Rawc::zxwsf_FREE_a_FaultTo;
*zxwsf_WALK_SO_a_FaultTo = *Net::WSF::Rawc::zxwsf_WALK_SO_a_FaultTo;
*zxwsf_WALK_WO_a_FaultTo = *Net::WSF::Rawc::zxwsf_WALK_WO_a_FaultTo;
*zxwsf_LEN_a_FaultTo = *Net::WSF::Rawc::zxwsf_LEN_a_FaultTo;
*zxwsf_ENC_SO_a_FaultTo = *Net::WSF::Rawc::zxwsf_ENC_SO_a_FaultTo;
*zxwsf_ENC_WO_a_FaultTo = *Net::WSF::Rawc::zxwsf_ENC_WO_a_FaultTo;
*zxwsf_EASY_ENC_SO_a_FaultTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_FaultTo;
*zxwsf_EASY_ENC_WO_a_FaultTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_FaultTo;
*zxwsf_a_FaultTo_GET_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_GET_Address;
*zxwsf_a_FaultTo_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_GET_ReferenceParameters;
*zxwsf_a_FaultTo_GET_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_GET_Metadata;
*zxwsf_a_FaultTo_NUM_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_NUM_Address;
*zxwsf_a_FaultTo_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_NUM_ReferenceParameters;
*zxwsf_a_FaultTo_NUM_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_NUM_Metadata;
*zxwsf_a_FaultTo_POP_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_POP_Address;
*zxwsf_a_FaultTo_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_POP_ReferenceParameters;
*zxwsf_a_FaultTo_POP_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_POP_Metadata;
*zxwsf_a_FaultTo_PUSH_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUSH_Address;
*zxwsf_a_FaultTo_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUSH_ReferenceParameters;
*zxwsf_a_FaultTo_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUSH_Metadata;
*zxwsf_a_FaultTo_PUT_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUT_Address;
*zxwsf_a_FaultTo_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUT_ReferenceParameters;
*zxwsf_a_FaultTo_PUT_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_PUT_Metadata;
*zxwsf_a_FaultTo_ADD_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_ADD_Address;
*zxwsf_a_FaultTo_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_ADD_ReferenceParameters;
*zxwsf_a_FaultTo_ADD_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_ADD_Metadata;
*zxwsf_a_FaultTo_DEL_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_DEL_Address;
*zxwsf_a_FaultTo_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_DEL_ReferenceParameters;
*zxwsf_a_FaultTo_DEL_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_DEL_Metadata;
*zxwsf_a_FaultTo_REV_Address = *Net::WSF::Rawc::zxwsf_a_FaultTo_REV_Address;
*zxwsf_a_FaultTo_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_FaultTo_REV_ReferenceParameters;
*zxwsf_a_FaultTo_REV_Metadata = *Net::WSF::Rawc::zxwsf_a_FaultTo_REV_Metadata;
*zxwsf_DEC_a_From = *Net::WSF::Rawc::zxwsf_DEC_a_From;
*zxwsf_NEW_a_From = *Net::WSF::Rawc::zxwsf_NEW_a_From;
*zxwsf_DEEP_CLONE_a_From = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_From;
*zxwsf_DUP_STRS_a_From = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_From;
*zxwsf_FREE_a_From = *Net::WSF::Rawc::zxwsf_FREE_a_From;
*zxwsf_WALK_SO_a_From = *Net::WSF::Rawc::zxwsf_WALK_SO_a_From;
*zxwsf_WALK_WO_a_From = *Net::WSF::Rawc::zxwsf_WALK_WO_a_From;
*zxwsf_LEN_a_From = *Net::WSF::Rawc::zxwsf_LEN_a_From;
*zxwsf_ENC_SO_a_From = *Net::WSF::Rawc::zxwsf_ENC_SO_a_From;
*zxwsf_ENC_WO_a_From = *Net::WSF::Rawc::zxwsf_ENC_WO_a_From;
*zxwsf_EASY_ENC_SO_a_From = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_From;
*zxwsf_EASY_ENC_WO_a_From = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_From;
*zxwsf_a_From_GET_Address = *Net::WSF::Rawc::zxwsf_a_From_GET_Address;
*zxwsf_a_From_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_GET_ReferenceParameters;
*zxwsf_a_From_GET_Metadata = *Net::WSF::Rawc::zxwsf_a_From_GET_Metadata;
*zxwsf_a_From_NUM_Address = *Net::WSF::Rawc::zxwsf_a_From_NUM_Address;
*zxwsf_a_From_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_NUM_ReferenceParameters;
*zxwsf_a_From_NUM_Metadata = *Net::WSF::Rawc::zxwsf_a_From_NUM_Metadata;
*zxwsf_a_From_POP_Address = *Net::WSF::Rawc::zxwsf_a_From_POP_Address;
*zxwsf_a_From_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_POP_ReferenceParameters;
*zxwsf_a_From_POP_Metadata = *Net::WSF::Rawc::zxwsf_a_From_POP_Metadata;
*zxwsf_a_From_PUSH_Address = *Net::WSF::Rawc::zxwsf_a_From_PUSH_Address;
*zxwsf_a_From_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_PUSH_ReferenceParameters;
*zxwsf_a_From_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_a_From_PUSH_Metadata;
*zxwsf_a_From_PUT_Address = *Net::WSF::Rawc::zxwsf_a_From_PUT_Address;
*zxwsf_a_From_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_PUT_ReferenceParameters;
*zxwsf_a_From_PUT_Metadata = *Net::WSF::Rawc::zxwsf_a_From_PUT_Metadata;
*zxwsf_a_From_ADD_Address = *Net::WSF::Rawc::zxwsf_a_From_ADD_Address;
*zxwsf_a_From_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_ADD_ReferenceParameters;
*zxwsf_a_From_ADD_Metadata = *Net::WSF::Rawc::zxwsf_a_From_ADD_Metadata;
*zxwsf_a_From_DEL_Address = *Net::WSF::Rawc::zxwsf_a_From_DEL_Address;
*zxwsf_a_From_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_DEL_ReferenceParameters;
*zxwsf_a_From_DEL_Metadata = *Net::WSF::Rawc::zxwsf_a_From_DEL_Metadata;
*zxwsf_a_From_REV_Address = *Net::WSF::Rawc::zxwsf_a_From_REV_Address;
*zxwsf_a_From_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_From_REV_ReferenceParameters;
*zxwsf_a_From_REV_Metadata = *Net::WSF::Rawc::zxwsf_a_From_REV_Metadata;
*zxwsf_DEC_a_MessageID = *Net::WSF::Rawc::zxwsf_DEC_a_MessageID;
*zxwsf_NEW_a_MessageID = *Net::WSF::Rawc::zxwsf_NEW_a_MessageID;
*zxwsf_DEEP_CLONE_a_MessageID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_MessageID;
*zxwsf_DUP_STRS_a_MessageID = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_MessageID;
*zxwsf_FREE_a_MessageID = *Net::WSF::Rawc::zxwsf_FREE_a_MessageID;
*zxwsf_WALK_SO_a_MessageID = *Net::WSF::Rawc::zxwsf_WALK_SO_a_MessageID;
*zxwsf_WALK_WO_a_MessageID = *Net::WSF::Rawc::zxwsf_WALK_WO_a_MessageID;
*zxwsf_LEN_a_MessageID = *Net::WSF::Rawc::zxwsf_LEN_a_MessageID;
*zxwsf_ENC_SO_a_MessageID = *Net::WSF::Rawc::zxwsf_ENC_SO_a_MessageID;
*zxwsf_ENC_WO_a_MessageID = *Net::WSF::Rawc::zxwsf_ENC_WO_a_MessageID;
*zxwsf_EASY_ENC_SO_a_MessageID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_MessageID;
*zxwsf_EASY_ENC_WO_a_MessageID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_MessageID;
*zxwsf_DEC_a_Metadata = *Net::WSF::Rawc::zxwsf_DEC_a_Metadata;
*zxwsf_NEW_a_Metadata = *Net::WSF::Rawc::zxwsf_NEW_a_Metadata;
*zxwsf_DEEP_CLONE_a_Metadata = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_Metadata;
*zxwsf_DUP_STRS_a_Metadata = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_Metadata;
*zxwsf_FREE_a_Metadata = *Net::WSF::Rawc::zxwsf_FREE_a_Metadata;
*zxwsf_WALK_SO_a_Metadata = *Net::WSF::Rawc::zxwsf_WALK_SO_a_Metadata;
*zxwsf_WALK_WO_a_Metadata = *Net::WSF::Rawc::zxwsf_WALK_WO_a_Metadata;
*zxwsf_LEN_a_Metadata = *Net::WSF::Rawc::zxwsf_LEN_a_Metadata;
*zxwsf_ENC_SO_a_Metadata = *Net::WSF::Rawc::zxwsf_ENC_SO_a_Metadata;
*zxwsf_ENC_WO_a_Metadata = *Net::WSF::Rawc::zxwsf_ENC_WO_a_Metadata;
*zxwsf_EASY_ENC_SO_a_Metadata = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_Metadata;
*zxwsf_EASY_ENC_WO_a_Metadata = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_Metadata;
*zxwsf_DEC_a_ProblemAction = *Net::WSF::Rawc::zxwsf_DEC_a_ProblemAction;
*zxwsf_NEW_a_ProblemAction = *Net::WSF::Rawc::zxwsf_NEW_a_ProblemAction;
*zxwsf_DEEP_CLONE_a_ProblemAction = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ProblemAction;
*zxwsf_DUP_STRS_a_ProblemAction = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ProblemAction;
*zxwsf_FREE_a_ProblemAction = *Net::WSF::Rawc::zxwsf_FREE_a_ProblemAction;
*zxwsf_WALK_SO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ProblemAction;
*zxwsf_WALK_WO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ProblemAction;
*zxwsf_LEN_a_ProblemAction = *Net::WSF::Rawc::zxwsf_LEN_a_ProblemAction;
*zxwsf_ENC_SO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ProblemAction;
*zxwsf_ENC_WO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ProblemAction;
*zxwsf_EASY_ENC_SO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ProblemAction;
*zxwsf_EASY_ENC_WO_a_ProblemAction = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ProblemAction;
*zxwsf_a_ProblemAction_GET_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_GET_Action;
*zxwsf_a_ProblemAction_GET_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_GET_SoapAction;
*zxwsf_a_ProblemAction_NUM_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_NUM_Action;
*zxwsf_a_ProblemAction_NUM_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_NUM_SoapAction;
*zxwsf_a_ProblemAction_POP_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_POP_Action;
*zxwsf_a_ProblemAction_POP_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_POP_SoapAction;
*zxwsf_a_ProblemAction_PUSH_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_PUSH_Action;
*zxwsf_a_ProblemAction_PUSH_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_PUSH_SoapAction;
*zxwsf_a_ProblemAction_PUT_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_PUT_Action;
*zxwsf_a_ProblemAction_PUT_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_PUT_SoapAction;
*zxwsf_a_ProblemAction_ADD_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_ADD_Action;
*zxwsf_a_ProblemAction_ADD_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_ADD_SoapAction;
*zxwsf_a_ProblemAction_DEL_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_DEL_Action;
*zxwsf_a_ProblemAction_DEL_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_DEL_SoapAction;
*zxwsf_a_ProblemAction_REV_Action = *Net::WSF::Rawc::zxwsf_a_ProblemAction_REV_Action;
*zxwsf_a_ProblemAction_REV_SoapAction = *Net::WSF::Rawc::zxwsf_a_ProblemAction_REV_SoapAction;
*zxwsf_DEC_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_DEC_a_ProblemHeader;
*zxwsf_NEW_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_NEW_a_ProblemHeader;
*zxwsf_DEEP_CLONE_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ProblemHeader;
*zxwsf_DUP_STRS_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ProblemHeader;
*zxwsf_FREE_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_FREE_a_ProblemHeader;
*zxwsf_WALK_SO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ProblemHeader;
*zxwsf_WALK_WO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ProblemHeader;
*zxwsf_LEN_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_LEN_a_ProblemHeader;
*zxwsf_ENC_SO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ProblemHeader;
*zxwsf_ENC_WO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ProblemHeader;
*zxwsf_EASY_ENC_SO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ProblemHeader;
*zxwsf_EASY_ENC_WO_a_ProblemHeader = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ProblemHeader;
*zxwsf_DEC_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_DEC_a_ProblemHeaderQName;
*zxwsf_NEW_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_NEW_a_ProblemHeaderQName;
*zxwsf_DEEP_CLONE_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ProblemHeaderQName;
*zxwsf_DUP_STRS_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ProblemHeaderQName;
*zxwsf_FREE_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_FREE_a_ProblemHeaderQName;
*zxwsf_WALK_SO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ProblemHeaderQName;
*zxwsf_WALK_WO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ProblemHeaderQName;
*zxwsf_LEN_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_LEN_a_ProblemHeaderQName;
*zxwsf_ENC_SO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ProblemHeaderQName;
*zxwsf_ENC_WO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ProblemHeaderQName;
*zxwsf_EASY_ENC_SO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ProblemHeaderQName;
*zxwsf_EASY_ENC_WO_a_ProblemHeaderQName = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ProblemHeaderQName;
*zxwsf_DEC_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_DEC_a_ProblemIRI;
*zxwsf_NEW_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_NEW_a_ProblemIRI;
*zxwsf_DEEP_CLONE_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ProblemIRI;
*zxwsf_DUP_STRS_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ProblemIRI;
*zxwsf_FREE_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_FREE_a_ProblemIRI;
*zxwsf_WALK_SO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ProblemIRI;
*zxwsf_WALK_WO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ProblemIRI;
*zxwsf_LEN_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_LEN_a_ProblemIRI;
*zxwsf_ENC_SO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ProblemIRI;
*zxwsf_ENC_WO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ProblemIRI;
*zxwsf_EASY_ENC_SO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ProblemIRI;
*zxwsf_EASY_ENC_WO_a_ProblemIRI = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ProblemIRI;
*zxwsf_DEC_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_DEC_a_ReferenceParameters;
*zxwsf_NEW_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_NEW_a_ReferenceParameters;
*zxwsf_DEEP_CLONE_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ReferenceParameters;
*zxwsf_DUP_STRS_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ReferenceParameters;
*zxwsf_FREE_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_FREE_a_ReferenceParameters;
*zxwsf_WALK_SO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ReferenceParameters;
*zxwsf_WALK_WO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ReferenceParameters;
*zxwsf_LEN_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_LEN_a_ReferenceParameters;
*zxwsf_ENC_SO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ReferenceParameters;
*zxwsf_ENC_WO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ReferenceParameters;
*zxwsf_EASY_ENC_SO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ReferenceParameters;
*zxwsf_EASY_ENC_WO_a_ReferenceParameters = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ReferenceParameters;
*zxwsf_DEC_a_RelatesTo = *Net::WSF::Rawc::zxwsf_DEC_a_RelatesTo;
*zxwsf_NEW_a_RelatesTo = *Net::WSF::Rawc::zxwsf_NEW_a_RelatesTo;
*zxwsf_DEEP_CLONE_a_RelatesTo = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_RelatesTo;
*zxwsf_DUP_STRS_a_RelatesTo = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_RelatesTo;
*zxwsf_FREE_a_RelatesTo = *Net::WSF::Rawc::zxwsf_FREE_a_RelatesTo;
*zxwsf_WALK_SO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_WALK_SO_a_RelatesTo;
*zxwsf_WALK_WO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_WALK_WO_a_RelatesTo;
*zxwsf_LEN_a_RelatesTo = *Net::WSF::Rawc::zxwsf_LEN_a_RelatesTo;
*zxwsf_ENC_SO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_ENC_SO_a_RelatesTo;
*zxwsf_ENC_WO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_ENC_WO_a_RelatesTo;
*zxwsf_EASY_ENC_SO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_RelatesTo;
*zxwsf_EASY_ENC_WO_a_RelatesTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_RelatesTo;
*zxwsf_a_RelatesTo_GET_RelationshipType = *Net::WSF::Rawc::zxwsf_a_RelatesTo_GET_RelationshipType;
*zxwsf_a_RelatesTo_PUT_RelationshipType = *Net::WSF::Rawc::zxwsf_a_RelatesTo_PUT_RelationshipType;
*zxwsf_DEC_a_ReplyTo = *Net::WSF::Rawc::zxwsf_DEC_a_ReplyTo;
*zxwsf_NEW_a_ReplyTo = *Net::WSF::Rawc::zxwsf_NEW_a_ReplyTo;
*zxwsf_DEEP_CLONE_a_ReplyTo = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_ReplyTo;
*zxwsf_DUP_STRS_a_ReplyTo = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_ReplyTo;
*zxwsf_FREE_a_ReplyTo = *Net::WSF::Rawc::zxwsf_FREE_a_ReplyTo;
*zxwsf_WALK_SO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_WALK_SO_a_ReplyTo;
*zxwsf_WALK_WO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_WALK_WO_a_ReplyTo;
*zxwsf_LEN_a_ReplyTo = *Net::WSF::Rawc::zxwsf_LEN_a_ReplyTo;
*zxwsf_ENC_SO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_ENC_SO_a_ReplyTo;
*zxwsf_ENC_WO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_ENC_WO_a_ReplyTo;
*zxwsf_EASY_ENC_SO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_ReplyTo;
*zxwsf_EASY_ENC_WO_a_ReplyTo = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_ReplyTo;
*zxwsf_a_ReplyTo_GET_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_GET_Address;
*zxwsf_a_ReplyTo_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_GET_ReferenceParameters;
*zxwsf_a_ReplyTo_GET_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_GET_Metadata;
*zxwsf_a_ReplyTo_NUM_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_NUM_Address;
*zxwsf_a_ReplyTo_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_NUM_ReferenceParameters;
*zxwsf_a_ReplyTo_NUM_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_NUM_Metadata;
*zxwsf_a_ReplyTo_POP_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_POP_Address;
*zxwsf_a_ReplyTo_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_POP_ReferenceParameters;
*zxwsf_a_ReplyTo_POP_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_POP_Metadata;
*zxwsf_a_ReplyTo_PUSH_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUSH_Address;
*zxwsf_a_ReplyTo_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUSH_ReferenceParameters;
*zxwsf_a_ReplyTo_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUSH_Metadata;
*zxwsf_a_ReplyTo_PUT_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUT_Address;
*zxwsf_a_ReplyTo_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUT_ReferenceParameters;
*zxwsf_a_ReplyTo_PUT_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_PUT_Metadata;
*zxwsf_a_ReplyTo_ADD_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_ADD_Address;
*zxwsf_a_ReplyTo_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_ADD_ReferenceParameters;
*zxwsf_a_ReplyTo_ADD_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_ADD_Metadata;
*zxwsf_a_ReplyTo_DEL_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_DEL_Address;
*zxwsf_a_ReplyTo_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_DEL_ReferenceParameters;
*zxwsf_a_ReplyTo_DEL_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_DEL_Metadata;
*zxwsf_a_ReplyTo_REV_Address = *Net::WSF::Rawc::zxwsf_a_ReplyTo_REV_Address;
*zxwsf_a_ReplyTo_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_a_ReplyTo_REV_ReferenceParameters;
*zxwsf_a_ReplyTo_REV_Metadata = *Net::WSF::Rawc::zxwsf_a_ReplyTo_REV_Metadata;
*zxwsf_DEC_a_RetryAfter = *Net::WSF::Rawc::zxwsf_DEC_a_RetryAfter;
*zxwsf_NEW_a_RetryAfter = *Net::WSF::Rawc::zxwsf_NEW_a_RetryAfter;
*zxwsf_DEEP_CLONE_a_RetryAfter = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_RetryAfter;
*zxwsf_DUP_STRS_a_RetryAfter = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_RetryAfter;
*zxwsf_FREE_a_RetryAfter = *Net::WSF::Rawc::zxwsf_FREE_a_RetryAfter;
*zxwsf_WALK_SO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_WALK_SO_a_RetryAfter;
*zxwsf_WALK_WO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_WALK_WO_a_RetryAfter;
*zxwsf_LEN_a_RetryAfter = *Net::WSF::Rawc::zxwsf_LEN_a_RetryAfter;
*zxwsf_ENC_SO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_ENC_SO_a_RetryAfter;
*zxwsf_ENC_WO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_ENC_WO_a_RetryAfter;
*zxwsf_EASY_ENC_SO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_RetryAfter;
*zxwsf_EASY_ENC_WO_a_RetryAfter = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_RetryAfter;
*zxwsf_DEC_a_To = *Net::WSF::Rawc::zxwsf_DEC_a_To;
*zxwsf_NEW_a_To = *Net::WSF::Rawc::zxwsf_NEW_a_To;
*zxwsf_DEEP_CLONE_a_To = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_a_To;
*zxwsf_DUP_STRS_a_To = *Net::WSF::Rawc::zxwsf_DUP_STRS_a_To;
*zxwsf_FREE_a_To = *Net::WSF::Rawc::zxwsf_FREE_a_To;
*zxwsf_WALK_SO_a_To = *Net::WSF::Rawc::zxwsf_WALK_SO_a_To;
*zxwsf_WALK_WO_a_To = *Net::WSF::Rawc::zxwsf_WALK_WO_a_To;
*zxwsf_LEN_a_To = *Net::WSF::Rawc::zxwsf_LEN_a_To;
*zxwsf_ENC_SO_a_To = *Net::WSF::Rawc::zxwsf_ENC_SO_a_To;
*zxwsf_ENC_WO_a_To = *Net::WSF::Rawc::zxwsf_ENC_WO_a_To;
*zxwsf_EASY_ENC_SO_a_To = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_a_To;
*zxwsf_EASY_ENC_WO_a_To = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_a_To;
*zxwsf_DEC_b12_Consent = *Net::WSF::Rawc::zxwsf_DEC_b12_Consent;
*zxwsf_NEW_b12_Consent = *Net::WSF::Rawc::zxwsf_NEW_b12_Consent;
*zxwsf_DEEP_CLONE_b12_Consent = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b12_Consent;
*zxwsf_DUP_STRS_b12_Consent = *Net::WSF::Rawc::zxwsf_DUP_STRS_b12_Consent;
*zxwsf_FREE_b12_Consent = *Net::WSF::Rawc::zxwsf_FREE_b12_Consent;
*zxwsf_WALK_SO_b12_Consent = *Net::WSF::Rawc::zxwsf_WALK_SO_b12_Consent;
*zxwsf_WALK_WO_b12_Consent = *Net::WSF::Rawc::zxwsf_WALK_WO_b12_Consent;
*zxwsf_LEN_b12_Consent = *Net::WSF::Rawc::zxwsf_LEN_b12_Consent;
*zxwsf_ENC_SO_b12_Consent = *Net::WSF::Rawc::zxwsf_ENC_SO_b12_Consent;
*zxwsf_ENC_WO_b12_Consent = *Net::WSF::Rawc::zxwsf_ENC_WO_b12_Consent;
*zxwsf_EASY_ENC_SO_b12_Consent = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b12_Consent;
*zxwsf_EASY_ENC_WO_b12_Consent = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b12_Consent;
*zxwsf_b12_Consent_GET_uri = *Net::WSF::Rawc::zxwsf_b12_Consent_GET_uri;
*zxwsf_b12_Consent_GET_timestamp = *Net::WSF::Rawc::zxwsf_b12_Consent_GET_timestamp;
*zxwsf_b12_Consent_GET_id = *Net::WSF::Rawc::zxwsf_b12_Consent_GET_id;
*zxwsf_b12_Consent_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Consent_GET_mustUnderstand;
*zxwsf_b12_Consent_GET_actor = *Net::WSF::Rawc::zxwsf_b12_Consent_GET_actor;
*zxwsf_b12_Consent_PUT_uri = *Net::WSF::Rawc::zxwsf_b12_Consent_PUT_uri;
*zxwsf_b12_Consent_PUT_timestamp = *Net::WSF::Rawc::zxwsf_b12_Consent_PUT_timestamp;
*zxwsf_b12_Consent_PUT_id = *Net::WSF::Rawc::zxwsf_b12_Consent_PUT_id;
*zxwsf_b12_Consent_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Consent_PUT_mustUnderstand;
*zxwsf_b12_Consent_PUT_actor = *Net::WSF::Rawc::zxwsf_b12_Consent_PUT_actor;
*zxwsf_DEC_b12_Correlation = *Net::WSF::Rawc::zxwsf_DEC_b12_Correlation;
*zxwsf_NEW_b12_Correlation = *Net::WSF::Rawc::zxwsf_NEW_b12_Correlation;
*zxwsf_DEEP_CLONE_b12_Correlation = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b12_Correlation;
*zxwsf_DUP_STRS_b12_Correlation = *Net::WSF::Rawc::zxwsf_DUP_STRS_b12_Correlation;
*zxwsf_FREE_b12_Correlation = *Net::WSF::Rawc::zxwsf_FREE_b12_Correlation;
*zxwsf_WALK_SO_b12_Correlation = *Net::WSF::Rawc::zxwsf_WALK_SO_b12_Correlation;
*zxwsf_WALK_WO_b12_Correlation = *Net::WSF::Rawc::zxwsf_WALK_WO_b12_Correlation;
*zxwsf_LEN_b12_Correlation = *Net::WSF::Rawc::zxwsf_LEN_b12_Correlation;
*zxwsf_ENC_SO_b12_Correlation = *Net::WSF::Rawc::zxwsf_ENC_SO_b12_Correlation;
*zxwsf_ENC_WO_b12_Correlation = *Net::WSF::Rawc::zxwsf_ENC_WO_b12_Correlation;
*zxwsf_EASY_ENC_SO_b12_Correlation = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b12_Correlation;
*zxwsf_EASY_ENC_WO_b12_Correlation = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b12_Correlation;
*zxwsf_b12_Correlation_GET_messageID = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_messageID;
*zxwsf_b12_Correlation_GET_refToMessageID = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_refToMessageID;
*zxwsf_b12_Correlation_GET_timestamp = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_timestamp;
*zxwsf_b12_Correlation_GET_id = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_id;
*zxwsf_b12_Correlation_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_mustUnderstand;
*zxwsf_b12_Correlation_GET_actor = *Net::WSF::Rawc::zxwsf_b12_Correlation_GET_actor;
*zxwsf_b12_Correlation_PUT_messageID = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_messageID;
*zxwsf_b12_Correlation_PUT_refToMessageID = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_refToMessageID;
*zxwsf_b12_Correlation_PUT_timestamp = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_timestamp;
*zxwsf_b12_Correlation_PUT_id = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_id;
*zxwsf_b12_Correlation_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_mustUnderstand;
*zxwsf_b12_Correlation_PUT_actor = *Net::WSF::Rawc::zxwsf_b12_Correlation_PUT_actor;
*zxwsf_DEC_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_DEC_b12_ProcessingContext;
*zxwsf_NEW_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_NEW_b12_ProcessingContext;
*zxwsf_DEEP_CLONE_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b12_ProcessingContext;
*zxwsf_DUP_STRS_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_b12_ProcessingContext;
*zxwsf_FREE_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_FREE_b12_ProcessingContext;
*zxwsf_WALK_SO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_WALK_SO_b12_ProcessingContext;
*zxwsf_WALK_WO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_WALK_WO_b12_ProcessingContext;
*zxwsf_LEN_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_LEN_b12_ProcessingContext;
*zxwsf_ENC_SO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_ENC_SO_b12_ProcessingContext;
*zxwsf_ENC_WO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_ENC_WO_b12_ProcessingContext;
*zxwsf_EASY_ENC_SO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b12_ProcessingContext;
*zxwsf_EASY_ENC_WO_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b12_ProcessingContext;
*zxwsf_b12_ProcessingContext_GET_id = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_GET_id;
*zxwsf_b12_ProcessingContext_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_GET_mustUnderstand;
*zxwsf_b12_ProcessingContext_GET_actor = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_GET_actor;
*zxwsf_b12_ProcessingContext_PUT_id = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_PUT_id;
*zxwsf_b12_ProcessingContext_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_PUT_mustUnderstand;
*zxwsf_b12_ProcessingContext_PUT_actor = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_PUT_actor;
*zxwsf_DEC_b12_Provider = *Net::WSF::Rawc::zxwsf_DEC_b12_Provider;
*zxwsf_NEW_b12_Provider = *Net::WSF::Rawc::zxwsf_NEW_b12_Provider;
*zxwsf_DEEP_CLONE_b12_Provider = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b12_Provider;
*zxwsf_DUP_STRS_b12_Provider = *Net::WSF::Rawc::zxwsf_DUP_STRS_b12_Provider;
*zxwsf_FREE_b12_Provider = *Net::WSF::Rawc::zxwsf_FREE_b12_Provider;
*zxwsf_WALK_SO_b12_Provider = *Net::WSF::Rawc::zxwsf_WALK_SO_b12_Provider;
*zxwsf_WALK_WO_b12_Provider = *Net::WSF::Rawc::zxwsf_WALK_WO_b12_Provider;
*zxwsf_LEN_b12_Provider = *Net::WSF::Rawc::zxwsf_LEN_b12_Provider;
*zxwsf_ENC_SO_b12_Provider = *Net::WSF::Rawc::zxwsf_ENC_SO_b12_Provider;
*zxwsf_ENC_WO_b12_Provider = *Net::WSF::Rawc::zxwsf_ENC_WO_b12_Provider;
*zxwsf_EASY_ENC_SO_b12_Provider = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b12_Provider;
*zxwsf_EASY_ENC_WO_b12_Provider = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b12_Provider;
*zxwsf_b12_Provider_GET_providerID = *Net::WSF::Rawc::zxwsf_b12_Provider_GET_providerID;
*zxwsf_b12_Provider_GET_affiliationID = *Net::WSF::Rawc::zxwsf_b12_Provider_GET_affiliationID;
*zxwsf_b12_Provider_GET_id = *Net::WSF::Rawc::zxwsf_b12_Provider_GET_id;
*zxwsf_b12_Provider_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Provider_GET_mustUnderstand;
*zxwsf_b12_Provider_GET_actor = *Net::WSF::Rawc::zxwsf_b12_Provider_GET_actor;
*zxwsf_b12_Provider_PUT_providerID = *Net::WSF::Rawc::zxwsf_b12_Provider_PUT_providerID;
*zxwsf_b12_Provider_PUT_affiliationID = *Net::WSF::Rawc::zxwsf_b12_Provider_PUT_affiliationID;
*zxwsf_b12_Provider_PUT_id = *Net::WSF::Rawc::zxwsf_b12_Provider_PUT_id;
*zxwsf_b12_Provider_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_Provider_PUT_mustUnderstand;
*zxwsf_b12_Provider_PUT_actor = *Net::WSF::Rawc::zxwsf_b12_Provider_PUT_actor;
*zxwsf_DEC_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_DEC_b12_UsageDirective;
*zxwsf_NEW_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_NEW_b12_UsageDirective;
*zxwsf_DEEP_CLONE_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b12_UsageDirective;
*zxwsf_DUP_STRS_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_DUP_STRS_b12_UsageDirective;
*zxwsf_FREE_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_FREE_b12_UsageDirective;
*zxwsf_WALK_SO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_WALK_SO_b12_UsageDirective;
*zxwsf_WALK_WO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_WALK_WO_b12_UsageDirective;
*zxwsf_LEN_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_LEN_b12_UsageDirective;
*zxwsf_ENC_SO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_ENC_SO_b12_UsageDirective;
*zxwsf_ENC_WO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_ENC_WO_b12_UsageDirective;
*zxwsf_EASY_ENC_SO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b12_UsageDirective;
*zxwsf_EASY_ENC_WO_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b12_UsageDirective;
*zxwsf_b12_UsageDirective_GET_id = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_GET_id;
*zxwsf_b12_UsageDirective_GET_ref = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_GET_ref;
*zxwsf_b12_UsageDirective_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_GET_mustUnderstand;
*zxwsf_b12_UsageDirective_GET_actor = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_GET_actor;
*zxwsf_b12_UsageDirective_PUT_id = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_PUT_id;
*zxwsf_b12_UsageDirective_PUT_ref = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_PUT_ref;
*zxwsf_b12_UsageDirective_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_PUT_mustUnderstand;
*zxwsf_b12_UsageDirective_PUT_actor = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_PUT_actor;
*zxwsf_DEC_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_DEC_b_ApplicationEPR;
*zxwsf_NEW_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_NEW_b_ApplicationEPR;
*zxwsf_DEEP_CLONE_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_ApplicationEPR;
*zxwsf_DUP_STRS_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_ApplicationEPR;
*zxwsf_FREE_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_FREE_b_ApplicationEPR;
*zxwsf_WALK_SO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_WALK_SO_b_ApplicationEPR;
*zxwsf_WALK_WO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_WALK_WO_b_ApplicationEPR;
*zxwsf_LEN_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_LEN_b_ApplicationEPR;
*zxwsf_ENC_SO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_ENC_SO_b_ApplicationEPR;
*zxwsf_ENC_WO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_ENC_WO_b_ApplicationEPR;
*zxwsf_EASY_ENC_SO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_ApplicationEPR;
*zxwsf_EASY_ENC_WO_b_ApplicationEPR = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_ApplicationEPR;
*zxwsf_b_ApplicationEPR_GET_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_GET_Address;
*zxwsf_b_ApplicationEPR_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_GET_ReferenceParameters;
*zxwsf_b_ApplicationEPR_GET_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_GET_Metadata;
*zxwsf_b_ApplicationEPR_NUM_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_NUM_Address;
*zxwsf_b_ApplicationEPR_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_NUM_ReferenceParameters;
*zxwsf_b_ApplicationEPR_NUM_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_NUM_Metadata;
*zxwsf_b_ApplicationEPR_POP_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_POP_Address;
*zxwsf_b_ApplicationEPR_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_POP_ReferenceParameters;
*zxwsf_b_ApplicationEPR_POP_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_POP_Metadata;
*zxwsf_b_ApplicationEPR_PUSH_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUSH_Address;
*zxwsf_b_ApplicationEPR_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUSH_ReferenceParameters;
*zxwsf_b_ApplicationEPR_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUSH_Metadata;
*zxwsf_b_ApplicationEPR_PUT_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUT_Address;
*zxwsf_b_ApplicationEPR_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUT_ReferenceParameters;
*zxwsf_b_ApplicationEPR_PUT_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_PUT_Metadata;
*zxwsf_b_ApplicationEPR_ADD_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_ADD_Address;
*zxwsf_b_ApplicationEPR_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_ADD_ReferenceParameters;
*zxwsf_b_ApplicationEPR_ADD_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_ADD_Metadata;
*zxwsf_b_ApplicationEPR_DEL_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_DEL_Address;
*zxwsf_b_ApplicationEPR_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_DEL_ReferenceParameters;
*zxwsf_b_ApplicationEPR_DEL_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_DEL_Metadata;
*zxwsf_b_ApplicationEPR_REV_Address = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_REV_Address;
*zxwsf_b_ApplicationEPR_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_REV_ReferenceParameters;
*zxwsf_b_ApplicationEPR_REV_Metadata = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_REV_Metadata;
*zxwsf_DEC_b_Consent = *Net::WSF::Rawc::zxwsf_DEC_b_Consent;
*zxwsf_NEW_b_Consent = *Net::WSF::Rawc::zxwsf_NEW_b_Consent;
*zxwsf_DEEP_CLONE_b_Consent = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_Consent;
*zxwsf_DUP_STRS_b_Consent = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_Consent;
*zxwsf_FREE_b_Consent = *Net::WSF::Rawc::zxwsf_FREE_b_Consent;
*zxwsf_WALK_SO_b_Consent = *Net::WSF::Rawc::zxwsf_WALK_SO_b_Consent;
*zxwsf_WALK_WO_b_Consent = *Net::WSF::Rawc::zxwsf_WALK_WO_b_Consent;
*zxwsf_LEN_b_Consent = *Net::WSF::Rawc::zxwsf_LEN_b_Consent;
*zxwsf_ENC_SO_b_Consent = *Net::WSF::Rawc::zxwsf_ENC_SO_b_Consent;
*zxwsf_ENC_WO_b_Consent = *Net::WSF::Rawc::zxwsf_ENC_WO_b_Consent;
*zxwsf_EASY_ENC_SO_b_Consent = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_Consent;
*zxwsf_EASY_ENC_WO_b_Consent = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_Consent;
*zxwsf_b_Consent_GET_uri = *Net::WSF::Rawc::zxwsf_b_Consent_GET_uri;
*zxwsf_b_Consent_GET_timestamp = *Net::WSF::Rawc::zxwsf_b_Consent_GET_timestamp;
*zxwsf_b_Consent_PUT_uri = *Net::WSF::Rawc::zxwsf_b_Consent_PUT_uri;
*zxwsf_b_Consent_PUT_timestamp = *Net::WSF::Rawc::zxwsf_b_Consent_PUT_timestamp;
*zxwsf_DEC_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_DEC_b_CredentialsContext;
*zxwsf_NEW_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_NEW_b_CredentialsContext;
*zxwsf_DEEP_CLONE_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_CredentialsContext;
*zxwsf_DUP_STRS_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_CredentialsContext;
*zxwsf_FREE_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_FREE_b_CredentialsContext;
*zxwsf_WALK_SO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_WALK_SO_b_CredentialsContext;
*zxwsf_WALK_WO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_WALK_WO_b_CredentialsContext;
*zxwsf_LEN_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_LEN_b_CredentialsContext;
*zxwsf_ENC_SO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_ENC_SO_b_CredentialsContext;
*zxwsf_ENC_WO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_ENC_WO_b_CredentialsContext;
*zxwsf_EASY_ENC_SO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_CredentialsContext;
*zxwsf_EASY_ENC_WO_b_CredentialsContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_CredentialsContext;
*zxwsf_b_CredentialsContext_GET_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_GET_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_GET_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_GET_SecurityMechID;
*zxwsf_b_CredentialsContext_NUM_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_NUM_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_NUM_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_NUM_SecurityMechID;
*zxwsf_b_CredentialsContext_POP_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_POP_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_POP_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_POP_SecurityMechID;
*zxwsf_b_CredentialsContext_PUSH_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_PUSH_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_PUSH_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_PUSH_SecurityMechID;
*zxwsf_b_CredentialsContext_PUT_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_PUT_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_PUT_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_PUT_SecurityMechID;
*zxwsf_b_CredentialsContext_ADD_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_ADD_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_ADD_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_ADD_SecurityMechID;
*zxwsf_b_CredentialsContext_DEL_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_DEL_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_DEL_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_DEL_SecurityMechID;
*zxwsf_b_CredentialsContext_REV_RequestedAuthnContext = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_REV_RequestedAuthnContext;
*zxwsf_b_CredentialsContext_REV_SecurityMechID = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_REV_SecurityMechID;
*zxwsf_DEC_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_DEC_b_EndpointUpdate;
*zxwsf_NEW_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_NEW_b_EndpointUpdate;
*zxwsf_DEEP_CLONE_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_EndpointUpdate;
*zxwsf_DUP_STRS_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_EndpointUpdate;
*zxwsf_FREE_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_FREE_b_EndpointUpdate;
*zxwsf_WALK_SO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_WALK_SO_b_EndpointUpdate;
*zxwsf_WALK_WO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_WALK_WO_b_EndpointUpdate;
*zxwsf_LEN_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_LEN_b_EndpointUpdate;
*zxwsf_ENC_SO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_ENC_SO_b_EndpointUpdate;
*zxwsf_ENC_WO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_ENC_WO_b_EndpointUpdate;
*zxwsf_EASY_ENC_SO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_EndpointUpdate;
*zxwsf_EASY_ENC_WO_b_EndpointUpdate = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_EndpointUpdate;
*zxwsf_b_EndpointUpdate_GET_updateType = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_GET_updateType;
*zxwsf_b_EndpointUpdate_GET_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_GET_Address;
*zxwsf_b_EndpointUpdate_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_GET_ReferenceParameters;
*zxwsf_b_EndpointUpdate_GET_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_GET_Metadata;
*zxwsf_b_EndpointUpdate_NUM_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_NUM_Address;
*zxwsf_b_EndpointUpdate_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_NUM_ReferenceParameters;
*zxwsf_b_EndpointUpdate_NUM_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_NUM_Metadata;
*zxwsf_b_EndpointUpdate_POP_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_POP_Address;
*zxwsf_b_EndpointUpdate_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_POP_ReferenceParameters;
*zxwsf_b_EndpointUpdate_POP_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_POP_Metadata;
*zxwsf_b_EndpointUpdate_PUSH_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUSH_Address;
*zxwsf_b_EndpointUpdate_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUSH_ReferenceParameters;
*zxwsf_b_EndpointUpdate_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUSH_Metadata;
*zxwsf_b_EndpointUpdate_PUT_updateType = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUT_updateType;
*zxwsf_b_EndpointUpdate_PUT_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUT_Address;
*zxwsf_b_EndpointUpdate_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUT_ReferenceParameters;
*zxwsf_b_EndpointUpdate_PUT_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_PUT_Metadata;
*zxwsf_b_EndpointUpdate_ADD_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_ADD_Address;
*zxwsf_b_EndpointUpdate_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_ADD_ReferenceParameters;
*zxwsf_b_EndpointUpdate_ADD_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_ADD_Metadata;
*zxwsf_b_EndpointUpdate_DEL_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_DEL_Address;
*zxwsf_b_EndpointUpdate_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_DEL_ReferenceParameters;
*zxwsf_b_EndpointUpdate_DEL_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_DEL_Metadata;
*zxwsf_b_EndpointUpdate_REV_Address = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_REV_Address;
*zxwsf_b_EndpointUpdate_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_REV_ReferenceParameters;
*zxwsf_b_EndpointUpdate_REV_Metadata = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_REV_Metadata;
*zxwsf_DEC_b_Framework = *Net::WSF::Rawc::zxwsf_DEC_b_Framework;
*zxwsf_NEW_b_Framework = *Net::WSF::Rawc::zxwsf_NEW_b_Framework;
*zxwsf_DEEP_CLONE_b_Framework = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_Framework;
*zxwsf_DUP_STRS_b_Framework = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_Framework;
*zxwsf_FREE_b_Framework = *Net::WSF::Rawc::zxwsf_FREE_b_Framework;
*zxwsf_WALK_SO_b_Framework = *Net::WSF::Rawc::zxwsf_WALK_SO_b_Framework;
*zxwsf_WALK_WO_b_Framework = *Net::WSF::Rawc::zxwsf_WALK_WO_b_Framework;
*zxwsf_LEN_b_Framework = *Net::WSF::Rawc::zxwsf_LEN_b_Framework;
*zxwsf_ENC_SO_b_Framework = *Net::WSF::Rawc::zxwsf_ENC_SO_b_Framework;
*zxwsf_ENC_WO_b_Framework = *Net::WSF::Rawc::zxwsf_ENC_WO_b_Framework;
*zxwsf_EASY_ENC_SO_b_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_Framework;
*zxwsf_EASY_ENC_WO_b_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_Framework;
*zxwsf_b_Framework_GET_version = *Net::WSF::Rawc::zxwsf_b_Framework_GET_version;
*zxwsf_b_Framework_PUT_version = *Net::WSF::Rawc::zxwsf_b_Framework_PUT_version;
*zxwsf_DEC_b_InteractionService = *Net::WSF::Rawc::zxwsf_DEC_b_InteractionService;
*zxwsf_NEW_b_InteractionService = *Net::WSF::Rawc::zxwsf_NEW_b_InteractionService;
*zxwsf_DEEP_CLONE_b_InteractionService = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_InteractionService;
*zxwsf_DUP_STRS_b_InteractionService = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_InteractionService;
*zxwsf_FREE_b_InteractionService = *Net::WSF::Rawc::zxwsf_FREE_b_InteractionService;
*zxwsf_WALK_SO_b_InteractionService = *Net::WSF::Rawc::zxwsf_WALK_SO_b_InteractionService;
*zxwsf_WALK_WO_b_InteractionService = *Net::WSF::Rawc::zxwsf_WALK_WO_b_InteractionService;
*zxwsf_LEN_b_InteractionService = *Net::WSF::Rawc::zxwsf_LEN_b_InteractionService;
*zxwsf_ENC_SO_b_InteractionService = *Net::WSF::Rawc::zxwsf_ENC_SO_b_InteractionService;
*zxwsf_ENC_WO_b_InteractionService = *Net::WSF::Rawc::zxwsf_ENC_WO_b_InteractionService;
*zxwsf_EASY_ENC_SO_b_InteractionService = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_InteractionService;
*zxwsf_EASY_ENC_WO_b_InteractionService = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_InteractionService;
*zxwsf_b_InteractionService_GET_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_GET_Address;
*zxwsf_b_InteractionService_GET_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_GET_ReferenceParameters;
*zxwsf_b_InteractionService_GET_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_GET_Metadata;
*zxwsf_b_InteractionService_NUM_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_NUM_Address;
*zxwsf_b_InteractionService_NUM_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_NUM_ReferenceParameters;
*zxwsf_b_InteractionService_NUM_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_NUM_Metadata;
*zxwsf_b_InteractionService_POP_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_POP_Address;
*zxwsf_b_InteractionService_POP_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_POP_ReferenceParameters;
*zxwsf_b_InteractionService_POP_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_POP_Metadata;
*zxwsf_b_InteractionService_PUSH_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUSH_Address;
*zxwsf_b_InteractionService_PUSH_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUSH_ReferenceParameters;
*zxwsf_b_InteractionService_PUSH_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUSH_Metadata;
*zxwsf_b_InteractionService_PUT_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUT_Address;
*zxwsf_b_InteractionService_PUT_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUT_ReferenceParameters;
*zxwsf_b_InteractionService_PUT_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_PUT_Metadata;
*zxwsf_b_InteractionService_ADD_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_ADD_Address;
*zxwsf_b_InteractionService_ADD_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_ADD_ReferenceParameters;
*zxwsf_b_InteractionService_ADD_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_ADD_Metadata;
*zxwsf_b_InteractionService_DEL_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_DEL_Address;
*zxwsf_b_InteractionService_DEL_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_DEL_ReferenceParameters;
*zxwsf_b_InteractionService_DEL_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_DEL_Metadata;
*zxwsf_b_InteractionService_REV_Address = *Net::WSF::Rawc::zxwsf_b_InteractionService_REV_Address;
*zxwsf_b_InteractionService_REV_ReferenceParameters = *Net::WSF::Rawc::zxwsf_b_InteractionService_REV_ReferenceParameters;
*zxwsf_b_InteractionService_REV_Metadata = *Net::WSF::Rawc::zxwsf_b_InteractionService_REV_Metadata;
*zxwsf_DEC_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_DEC_b_ProcessingContext;
*zxwsf_NEW_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_NEW_b_ProcessingContext;
*zxwsf_DEEP_CLONE_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_ProcessingContext;
*zxwsf_DUP_STRS_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_ProcessingContext;
*zxwsf_FREE_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_FREE_b_ProcessingContext;
*zxwsf_WALK_SO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_WALK_SO_b_ProcessingContext;
*zxwsf_WALK_WO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_WALK_WO_b_ProcessingContext;
*zxwsf_LEN_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_LEN_b_ProcessingContext;
*zxwsf_ENC_SO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_ENC_SO_b_ProcessingContext;
*zxwsf_ENC_WO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_ENC_WO_b_ProcessingContext;
*zxwsf_EASY_ENC_SO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_ProcessingContext;
*zxwsf_EASY_ENC_WO_b_ProcessingContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_ProcessingContext;
*zxwsf_DEC_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_DEC_b_RedirectRequest;
*zxwsf_NEW_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_NEW_b_RedirectRequest;
*zxwsf_DEEP_CLONE_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_RedirectRequest;
*zxwsf_DUP_STRS_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_RedirectRequest;
*zxwsf_FREE_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_FREE_b_RedirectRequest;
*zxwsf_WALK_SO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_WALK_SO_b_RedirectRequest;
*zxwsf_WALK_WO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_WALK_WO_b_RedirectRequest;
*zxwsf_LEN_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_LEN_b_RedirectRequest;
*zxwsf_ENC_SO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_ENC_SO_b_RedirectRequest;
*zxwsf_ENC_WO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_ENC_WO_b_RedirectRequest;
*zxwsf_EASY_ENC_SO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_RedirectRequest;
*zxwsf_EASY_ENC_WO_b_RedirectRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_RedirectRequest;
*zxwsf_b_RedirectRequest_GET_redirectURL = *Net::WSF::Rawc::zxwsf_b_RedirectRequest_GET_redirectURL;
*zxwsf_b_RedirectRequest_PUT_redirectURL = *Net::WSF::Rawc::zxwsf_b_RedirectRequest_PUT_redirectURL;
*zxwsf_DEC_b_Sender = *Net::WSF::Rawc::zxwsf_DEC_b_Sender;
*zxwsf_NEW_b_Sender = *Net::WSF::Rawc::zxwsf_NEW_b_Sender;
*zxwsf_DEEP_CLONE_b_Sender = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_Sender;
*zxwsf_DUP_STRS_b_Sender = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_Sender;
*zxwsf_FREE_b_Sender = *Net::WSF::Rawc::zxwsf_FREE_b_Sender;
*zxwsf_WALK_SO_b_Sender = *Net::WSF::Rawc::zxwsf_WALK_SO_b_Sender;
*zxwsf_WALK_WO_b_Sender = *Net::WSF::Rawc::zxwsf_WALK_WO_b_Sender;
*zxwsf_LEN_b_Sender = *Net::WSF::Rawc::zxwsf_LEN_b_Sender;
*zxwsf_ENC_SO_b_Sender = *Net::WSF::Rawc::zxwsf_ENC_SO_b_Sender;
*zxwsf_ENC_WO_b_Sender = *Net::WSF::Rawc::zxwsf_ENC_WO_b_Sender;
*zxwsf_EASY_ENC_SO_b_Sender = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_Sender;
*zxwsf_EASY_ENC_WO_b_Sender = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_Sender;
*zxwsf_b_Sender_GET_providerID = *Net::WSF::Rawc::zxwsf_b_Sender_GET_providerID;
*zxwsf_b_Sender_GET_affiliationID = *Net::WSF::Rawc::zxwsf_b_Sender_GET_affiliationID;
*zxwsf_b_Sender_PUT_providerID = *Net::WSF::Rawc::zxwsf_b_Sender_PUT_providerID;
*zxwsf_b_Sender_PUT_affiliationID = *Net::WSF::Rawc::zxwsf_b_Sender_PUT_affiliationID;
*zxwsf_DEC_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_DEC_b_TargetIdentity;
*zxwsf_NEW_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_NEW_b_TargetIdentity;
*zxwsf_DEEP_CLONE_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_TargetIdentity;
*zxwsf_DUP_STRS_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_TargetIdentity;
*zxwsf_FREE_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_FREE_b_TargetIdentity;
*zxwsf_WALK_SO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_WALK_SO_b_TargetIdentity;
*zxwsf_WALK_WO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_WALK_WO_b_TargetIdentity;
*zxwsf_LEN_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_LEN_b_TargetIdentity;
*zxwsf_ENC_SO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_ENC_SO_b_TargetIdentity;
*zxwsf_ENC_WO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_ENC_WO_b_TargetIdentity;
*zxwsf_EASY_ENC_SO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_TargetIdentity;
*zxwsf_EASY_ENC_WO_b_TargetIdentity = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_TargetIdentity;
*zxwsf_DEC_b_UsageDirective = *Net::WSF::Rawc::zxwsf_DEC_b_UsageDirective;
*zxwsf_NEW_b_UsageDirective = *Net::WSF::Rawc::zxwsf_NEW_b_UsageDirective;
*zxwsf_DEEP_CLONE_b_UsageDirective = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_UsageDirective;
*zxwsf_DUP_STRS_b_UsageDirective = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_UsageDirective;
*zxwsf_FREE_b_UsageDirective = *Net::WSF::Rawc::zxwsf_FREE_b_UsageDirective;
*zxwsf_WALK_SO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_WALK_SO_b_UsageDirective;
*zxwsf_WALK_WO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_WALK_WO_b_UsageDirective;
*zxwsf_LEN_b_UsageDirective = *Net::WSF::Rawc::zxwsf_LEN_b_UsageDirective;
*zxwsf_ENC_SO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_ENC_SO_b_UsageDirective;
*zxwsf_ENC_WO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_ENC_WO_b_UsageDirective;
*zxwsf_EASY_ENC_SO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_UsageDirective;
*zxwsf_EASY_ENC_WO_b_UsageDirective = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_UsageDirective;
*zxwsf_b_UsageDirective_GET_ref = *Net::WSF::Rawc::zxwsf_b_UsageDirective_GET_ref;
*zxwsf_b_UsageDirective_PUT_ref = *Net::WSF::Rawc::zxwsf_b_UsageDirective_PUT_ref;
*zxwsf_DEC_b_UserInteraction = *Net::WSF::Rawc::zxwsf_DEC_b_UserInteraction;
*zxwsf_NEW_b_UserInteraction = *Net::WSF::Rawc::zxwsf_NEW_b_UserInteraction;
*zxwsf_DEEP_CLONE_b_UserInteraction = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_b_UserInteraction;
*zxwsf_DUP_STRS_b_UserInteraction = *Net::WSF::Rawc::zxwsf_DUP_STRS_b_UserInteraction;
*zxwsf_FREE_b_UserInteraction = *Net::WSF::Rawc::zxwsf_FREE_b_UserInteraction;
*zxwsf_WALK_SO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_WALK_SO_b_UserInteraction;
*zxwsf_WALK_WO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_WALK_WO_b_UserInteraction;
*zxwsf_LEN_b_UserInteraction = *Net::WSF::Rawc::zxwsf_LEN_b_UserInteraction;
*zxwsf_ENC_SO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_ENC_SO_b_UserInteraction;
*zxwsf_ENC_WO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_ENC_WO_b_UserInteraction;
*zxwsf_EASY_ENC_SO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_b_UserInteraction;
*zxwsf_EASY_ENC_WO_b_UserInteraction = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_b_UserInteraction;
*zxwsf_b_UserInteraction_GET_interact = *Net::WSF::Rawc::zxwsf_b_UserInteraction_GET_interact;
*zxwsf_b_UserInteraction_GET_language = *Net::WSF::Rawc::zxwsf_b_UserInteraction_GET_language;
*zxwsf_b_UserInteraction_GET_redirect = *Net::WSF::Rawc::zxwsf_b_UserInteraction_GET_redirect;
*zxwsf_b_UserInteraction_GET_maxInteractTime = *Net::WSF::Rawc::zxwsf_b_UserInteraction_GET_maxInteractTime;
*zxwsf_b_UserInteraction_GET_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_GET_InteractionService;
*zxwsf_b_UserInteraction_NUM_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_NUM_InteractionService;
*zxwsf_b_UserInteraction_POP_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_POP_InteractionService;
*zxwsf_b_UserInteraction_PUSH_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUSH_InteractionService;
*zxwsf_b_UserInteraction_PUT_interact = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUT_interact;
*zxwsf_b_UserInteraction_PUT_language = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUT_language;
*zxwsf_b_UserInteraction_PUT_redirect = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUT_redirect;
*zxwsf_b_UserInteraction_PUT_maxInteractTime = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUT_maxInteractTime;
*zxwsf_b_UserInteraction_PUT_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_PUT_InteractionService;
*zxwsf_b_UserInteraction_ADD_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_ADD_InteractionService;
*zxwsf_b_UserInteraction_DEL_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_DEL_InteractionService;
*zxwsf_b_UserInteraction_REV_InteractionService = *Net::WSF::Rawc::zxwsf_b_UserInteraction_REV_InteractionService;
*zxwsf_DEC_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_DEC_di12_AuthenticateRequester;
*zxwsf_NEW_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_NEW_di12_AuthenticateRequester;
*zxwsf_DEEP_CLONE_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_AuthenticateRequester;
*zxwsf_DUP_STRS_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_AuthenticateRequester;
*zxwsf_FREE_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_FREE_di12_AuthenticateRequester;
*zxwsf_WALK_SO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_AuthenticateRequester;
*zxwsf_WALK_WO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_AuthenticateRequester;
*zxwsf_LEN_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_LEN_di12_AuthenticateRequester;
*zxwsf_ENC_SO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_AuthenticateRequester;
*zxwsf_ENC_WO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_AuthenticateRequester;
*zxwsf_EASY_ENC_SO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_AuthenticateRequester;
*zxwsf_EASY_ENC_WO_di12_AuthenticateRequester = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_AuthenticateRequester;
*zxwsf_di12_AuthenticateRequester_GET_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthenticateRequester_GET_descriptionIDRefs;
*zxwsf_di12_AuthenticateRequester_PUT_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthenticateRequester_PUT_descriptionIDRefs;
*zxwsf_DEC_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_DEC_di12_AuthenticateSessionContext;
*zxwsf_NEW_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_NEW_di12_AuthenticateSessionContext;
*zxwsf_DEEP_CLONE_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_AuthenticateSessionContext;
*zxwsf_DUP_STRS_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_AuthenticateSessionContext;
*zxwsf_FREE_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_FREE_di12_AuthenticateSessionContext;
*zxwsf_WALK_SO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_AuthenticateSessionContext;
*zxwsf_WALK_WO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_AuthenticateSessionContext;
*zxwsf_LEN_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_LEN_di12_AuthenticateSessionContext;
*zxwsf_ENC_SO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_AuthenticateSessionContext;
*zxwsf_ENC_WO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_AuthenticateSessionContext;
*zxwsf_EASY_ENC_SO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_AuthenticateSessionContext;
*zxwsf_EASY_ENC_WO_di12_AuthenticateSessionContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_AuthenticateSessionContext;
*zxwsf_di12_AuthenticateSessionContext_GET_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthenticateSessionContext_GET_descriptionIDRefs;
*zxwsf_di12_AuthenticateSessionContext_PUT_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthenticateSessionContext_PUT_descriptionIDRefs;
*zxwsf_DEC_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_DEC_di12_AuthorizeRequester;
*zxwsf_NEW_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_NEW_di12_AuthorizeRequester;
*zxwsf_DEEP_CLONE_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_AuthorizeRequester;
*zxwsf_DUP_STRS_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_AuthorizeRequester;
*zxwsf_FREE_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_FREE_di12_AuthorizeRequester;
*zxwsf_WALK_SO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_AuthorizeRequester;
*zxwsf_WALK_WO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_AuthorizeRequester;
*zxwsf_LEN_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_LEN_di12_AuthorizeRequester;
*zxwsf_ENC_SO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_AuthorizeRequester;
*zxwsf_ENC_WO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_AuthorizeRequester;
*zxwsf_EASY_ENC_SO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_AuthorizeRequester;
*zxwsf_EASY_ENC_WO_di12_AuthorizeRequester = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_AuthorizeRequester;
*zxwsf_di12_AuthorizeRequester_GET_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthorizeRequester_GET_descriptionIDRefs;
*zxwsf_di12_AuthorizeRequester_PUT_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_AuthorizeRequester_PUT_descriptionIDRefs;
*zxwsf_DEC_di12_Credentials = *Net::WSF::Rawc::zxwsf_DEC_di12_Credentials;
*zxwsf_NEW_di12_Credentials = *Net::WSF::Rawc::zxwsf_NEW_di12_Credentials;
*zxwsf_DEEP_CLONE_di12_Credentials = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Credentials;
*zxwsf_DUP_STRS_di12_Credentials = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Credentials;
*zxwsf_FREE_di12_Credentials = *Net::WSF::Rawc::zxwsf_FREE_di12_Credentials;
*zxwsf_WALK_SO_di12_Credentials = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Credentials;
*zxwsf_WALK_WO_di12_Credentials = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Credentials;
*zxwsf_LEN_di12_Credentials = *Net::WSF::Rawc::zxwsf_LEN_di12_Credentials;
*zxwsf_ENC_SO_di12_Credentials = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Credentials;
*zxwsf_ENC_WO_di12_Credentials = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Credentials;
*zxwsf_EASY_ENC_SO_di12_Credentials = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Credentials;
*zxwsf_EASY_ENC_WO_di12_Credentials = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Credentials;
*zxwsf_DEC_di12_Description = *Net::WSF::Rawc::zxwsf_DEC_di12_Description;
*zxwsf_NEW_di12_Description = *Net::WSF::Rawc::zxwsf_NEW_di12_Description;
*zxwsf_DEEP_CLONE_di12_Description = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Description;
*zxwsf_DUP_STRS_di12_Description = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Description;
*zxwsf_FREE_di12_Description = *Net::WSF::Rawc::zxwsf_FREE_di12_Description;
*zxwsf_WALK_SO_di12_Description = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Description;
*zxwsf_WALK_WO_di12_Description = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Description;
*zxwsf_LEN_di12_Description = *Net::WSF::Rawc::zxwsf_LEN_di12_Description;
*zxwsf_ENC_SO_di12_Description = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Description;
*zxwsf_ENC_WO_di12_Description = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Description;
*zxwsf_EASY_ENC_SO_di12_Description = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Description;
*zxwsf_EASY_ENC_WO_di12_Description = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Description;
*zxwsf_di12_Description_GET_id = *Net::WSF::Rawc::zxwsf_di12_Description_GET_id;
*zxwsf_di12_Description_GET_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_GET_SecurityMechID;
*zxwsf_di12_Description_GET_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_GET_CredentialRef;
*zxwsf_di12_Description_GET_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_GET_WsdlURI;
*zxwsf_di12_Description_GET_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_GET_ServiceNameRef;
*zxwsf_di12_Description_GET_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_GET_Endpoint;
*zxwsf_di12_Description_GET_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_GET_SoapAction;
*zxwsf_di12_Description_NUM_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_SecurityMechID;
*zxwsf_di12_Description_NUM_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_CredentialRef;
*zxwsf_di12_Description_NUM_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_WsdlURI;
*zxwsf_di12_Description_NUM_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_ServiceNameRef;
*zxwsf_di12_Description_NUM_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_Endpoint;
*zxwsf_di12_Description_NUM_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_NUM_SoapAction;
*zxwsf_di12_Description_POP_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_POP_SecurityMechID;
*zxwsf_di12_Description_POP_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_POP_CredentialRef;
*zxwsf_di12_Description_POP_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_POP_WsdlURI;
*zxwsf_di12_Description_POP_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_POP_ServiceNameRef;
*zxwsf_di12_Description_POP_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_POP_Endpoint;
*zxwsf_di12_Description_POP_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_POP_SoapAction;
*zxwsf_di12_Description_PUSH_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_SecurityMechID;
*zxwsf_di12_Description_PUSH_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_CredentialRef;
*zxwsf_di12_Description_PUSH_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_WsdlURI;
*zxwsf_di12_Description_PUSH_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_ServiceNameRef;
*zxwsf_di12_Description_PUSH_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_Endpoint;
*zxwsf_di12_Description_PUSH_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_PUSH_SoapAction;
*zxwsf_di12_Description_PUT_id = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_id;
*zxwsf_di12_Description_PUT_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_SecurityMechID;
*zxwsf_di12_Description_PUT_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_CredentialRef;
*zxwsf_di12_Description_PUT_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_WsdlURI;
*zxwsf_di12_Description_PUT_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_ServiceNameRef;
*zxwsf_di12_Description_PUT_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_Endpoint;
*zxwsf_di12_Description_PUT_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_PUT_SoapAction;
*zxwsf_di12_Description_ADD_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_SecurityMechID;
*zxwsf_di12_Description_ADD_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_CredentialRef;
*zxwsf_di12_Description_ADD_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_WsdlURI;
*zxwsf_di12_Description_ADD_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_ServiceNameRef;
*zxwsf_di12_Description_ADD_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_Endpoint;
*zxwsf_di12_Description_ADD_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_ADD_SoapAction;
*zxwsf_di12_Description_DEL_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_SecurityMechID;
*zxwsf_di12_Description_DEL_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_CredentialRef;
*zxwsf_di12_Description_DEL_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_WsdlURI;
*zxwsf_di12_Description_DEL_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_ServiceNameRef;
*zxwsf_di12_Description_DEL_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_Endpoint;
*zxwsf_di12_Description_DEL_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_DEL_SoapAction;
*zxwsf_di12_Description_REV_SecurityMechID = *Net::WSF::Rawc::zxwsf_di12_Description_REV_SecurityMechID;
*zxwsf_di12_Description_REV_CredentialRef = *Net::WSF::Rawc::zxwsf_di12_Description_REV_CredentialRef;
*zxwsf_di12_Description_REV_WsdlURI = *Net::WSF::Rawc::zxwsf_di12_Description_REV_WsdlURI;
*zxwsf_di12_Description_REV_ServiceNameRef = *Net::WSF::Rawc::zxwsf_di12_Description_REV_ServiceNameRef;
*zxwsf_di12_Description_REV_Endpoint = *Net::WSF::Rawc::zxwsf_di12_Description_REV_Endpoint;
*zxwsf_di12_Description_REV_SoapAction = *Net::WSF::Rawc::zxwsf_di12_Description_REV_SoapAction;
*zxwsf_DEC_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_DEC_di12_EncryptResourceID;
*zxwsf_NEW_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_NEW_di12_EncryptResourceID;
*zxwsf_DEEP_CLONE_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_EncryptResourceID;
*zxwsf_DUP_STRS_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_EncryptResourceID;
*zxwsf_FREE_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_FREE_di12_EncryptResourceID;
*zxwsf_WALK_SO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_EncryptResourceID;
*zxwsf_WALK_WO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_EncryptResourceID;
*zxwsf_LEN_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_LEN_di12_EncryptResourceID;
*zxwsf_ENC_SO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_EncryptResourceID;
*zxwsf_ENC_WO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_EncryptResourceID;
*zxwsf_EASY_ENC_SO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_EncryptResourceID;
*zxwsf_EASY_ENC_WO_di12_EncryptResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_EncryptResourceID;
*zxwsf_di12_EncryptResourceID_GET_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_EncryptResourceID_GET_descriptionIDRefs;
*zxwsf_di12_EncryptResourceID_PUT_descriptionIDRefs = *Net::WSF::Rawc::zxwsf_di12_EncryptResourceID_PUT_descriptionIDRefs;
*zxwsf_DEC_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DEC_di12_EncryptedResourceID;
*zxwsf_NEW_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_NEW_di12_EncryptedResourceID;
*zxwsf_DEEP_CLONE_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_EncryptedResourceID;
*zxwsf_DUP_STRS_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_EncryptedResourceID;
*zxwsf_FREE_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_FREE_di12_EncryptedResourceID;
*zxwsf_WALK_SO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_EncryptedResourceID;
*zxwsf_WALK_WO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_EncryptedResourceID;
*zxwsf_LEN_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_LEN_di12_EncryptedResourceID;
*zxwsf_ENC_SO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_EncryptedResourceID;
*zxwsf_ENC_WO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_EncryptedResourceID;
*zxwsf_EASY_ENC_SO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_EncryptedResourceID;
*zxwsf_EASY_ENC_WO_di12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_EncryptedResourceID;
*zxwsf_di12_EncryptedResourceID_GET_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_GET_EncryptedData;
*zxwsf_di12_EncryptedResourceID_GET_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_GET_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_NUM_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_NUM_EncryptedData;
*zxwsf_di12_EncryptedResourceID_NUM_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_NUM_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_POP_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_POP_EncryptedData;
*zxwsf_di12_EncryptedResourceID_POP_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_POP_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_PUSH_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_PUSH_EncryptedData;
*zxwsf_di12_EncryptedResourceID_PUSH_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_PUSH_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_PUT_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_PUT_EncryptedData;
*zxwsf_di12_EncryptedResourceID_PUT_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_PUT_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_ADD_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_ADD_EncryptedData;
*zxwsf_di12_EncryptedResourceID_ADD_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_ADD_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_DEL_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_DEL_EncryptedData;
*zxwsf_di12_EncryptedResourceID_DEL_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_DEL_EncryptedKey;
*zxwsf_di12_EncryptedResourceID_REV_EncryptedData = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_REV_EncryptedData;
*zxwsf_di12_EncryptedResourceID_REV_EncryptedKey = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_REV_EncryptedKey;
*zxwsf_DEC_di12_Extension = *Net::WSF::Rawc::zxwsf_DEC_di12_Extension;
*zxwsf_NEW_di12_Extension = *Net::WSF::Rawc::zxwsf_NEW_di12_Extension;
*zxwsf_DEEP_CLONE_di12_Extension = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Extension;
*zxwsf_DUP_STRS_di12_Extension = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Extension;
*zxwsf_FREE_di12_Extension = *Net::WSF::Rawc::zxwsf_FREE_di12_Extension;
*zxwsf_WALK_SO_di12_Extension = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Extension;
*zxwsf_WALK_WO_di12_Extension = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Extension;
*zxwsf_LEN_di12_Extension = *Net::WSF::Rawc::zxwsf_LEN_di12_Extension;
*zxwsf_ENC_SO_di12_Extension = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Extension;
*zxwsf_ENC_WO_di12_Extension = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Extension;
*zxwsf_EASY_ENC_SO_di12_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Extension;
*zxwsf_EASY_ENC_WO_di12_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Extension;
*zxwsf_DEC_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_DEC_di12_InsertEntry;
*zxwsf_NEW_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_NEW_di12_InsertEntry;
*zxwsf_DEEP_CLONE_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_InsertEntry;
*zxwsf_DUP_STRS_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_InsertEntry;
*zxwsf_FREE_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_FREE_di12_InsertEntry;
*zxwsf_WALK_SO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_InsertEntry;
*zxwsf_WALK_WO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_InsertEntry;
*zxwsf_LEN_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_LEN_di12_InsertEntry;
*zxwsf_ENC_SO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_InsertEntry;
*zxwsf_ENC_WO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_InsertEntry;
*zxwsf_EASY_ENC_SO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_InsertEntry;
*zxwsf_EASY_ENC_WO_di12_InsertEntry = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_InsertEntry;
*zxwsf_di12_InsertEntry_GET_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_GET_ResourceOffering;
*zxwsf_di12_InsertEntry_NUM_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_NUM_ResourceOffering;
*zxwsf_di12_InsertEntry_POP_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_POP_ResourceOffering;
*zxwsf_di12_InsertEntry_PUSH_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_PUSH_ResourceOffering;
*zxwsf_di12_InsertEntry_PUT_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_PUT_ResourceOffering;
*zxwsf_di12_InsertEntry_ADD_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_ADD_ResourceOffering;
*zxwsf_di12_InsertEntry_DEL_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_DEL_ResourceOffering;
*zxwsf_di12_InsertEntry_REV_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_REV_ResourceOffering;
*zxwsf_DEC_di12_Modify = *Net::WSF::Rawc::zxwsf_DEC_di12_Modify;
*zxwsf_NEW_di12_Modify = *Net::WSF::Rawc::zxwsf_NEW_di12_Modify;
*zxwsf_DEEP_CLONE_di12_Modify = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Modify;
*zxwsf_DUP_STRS_di12_Modify = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Modify;
*zxwsf_FREE_di12_Modify = *Net::WSF::Rawc::zxwsf_FREE_di12_Modify;
*zxwsf_WALK_SO_di12_Modify = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Modify;
*zxwsf_WALK_WO_di12_Modify = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Modify;
*zxwsf_LEN_di12_Modify = *Net::WSF::Rawc::zxwsf_LEN_di12_Modify;
*zxwsf_ENC_SO_di12_Modify = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Modify;
*zxwsf_ENC_WO_di12_Modify = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Modify;
*zxwsf_EASY_ENC_SO_di12_Modify = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Modify;
*zxwsf_EASY_ENC_WO_di12_Modify = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Modify;
*zxwsf_di12_Modify_GET_id = *Net::WSF::Rawc::zxwsf_di12_Modify_GET_id;
*zxwsf_di12_Modify_GET_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_GET_InsertEntry;
*zxwsf_di12_Modify_GET_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_GET_RemoveEntry;
*zxwsf_di12_Modify_NUM_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_NUM_InsertEntry;
*zxwsf_di12_Modify_NUM_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_NUM_RemoveEntry;
*zxwsf_di12_Modify_POP_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_POP_InsertEntry;
*zxwsf_di12_Modify_POP_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_POP_RemoveEntry;
*zxwsf_di12_Modify_PUSH_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_PUSH_InsertEntry;
*zxwsf_di12_Modify_PUSH_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_PUSH_RemoveEntry;
*zxwsf_di12_Modify_PUT_id = *Net::WSF::Rawc::zxwsf_di12_Modify_PUT_id;
*zxwsf_di12_Modify_PUT_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_PUT_InsertEntry;
*zxwsf_di12_Modify_PUT_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_PUT_RemoveEntry;
*zxwsf_di12_Modify_ADD_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_ADD_InsertEntry;
*zxwsf_di12_Modify_ADD_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_ADD_RemoveEntry;
*zxwsf_di12_Modify_DEL_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_DEL_InsertEntry;
*zxwsf_di12_Modify_DEL_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_DEL_RemoveEntry;
*zxwsf_di12_Modify_REV_InsertEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_REV_InsertEntry;
*zxwsf_di12_Modify_REV_RemoveEntry = *Net::WSF::Rawc::zxwsf_di12_Modify_REV_RemoveEntry;
*zxwsf_DEC_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_DEC_di12_ModifyResponse;
*zxwsf_NEW_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_NEW_di12_ModifyResponse;
*zxwsf_DEEP_CLONE_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_ModifyResponse;
*zxwsf_DUP_STRS_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_ModifyResponse;
*zxwsf_FREE_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_FREE_di12_ModifyResponse;
*zxwsf_WALK_SO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_ModifyResponse;
*zxwsf_WALK_WO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_ModifyResponse;
*zxwsf_LEN_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_LEN_di12_ModifyResponse;
*zxwsf_ENC_SO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_ModifyResponse;
*zxwsf_ENC_WO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_ModifyResponse;
*zxwsf_EASY_ENC_SO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_ModifyResponse;
*zxwsf_EASY_ENC_WO_di12_ModifyResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_ModifyResponse;
*zxwsf_di12_ModifyResponse_GET_id = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_GET_id;
*zxwsf_di12_ModifyResponse_GET_newEntryIDs = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_GET_newEntryIDs;
*zxwsf_di12_ModifyResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_GET_Status;
*zxwsf_di12_ModifyResponse_GET_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_GET_Extension;
*zxwsf_di12_ModifyResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_NUM_Status;
*zxwsf_di12_ModifyResponse_NUM_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_NUM_Extension;
*zxwsf_di12_ModifyResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_POP_Status;
*zxwsf_di12_ModifyResponse_POP_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_POP_Extension;
*zxwsf_di12_ModifyResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUSH_Status;
*zxwsf_di12_ModifyResponse_PUSH_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUSH_Extension;
*zxwsf_di12_ModifyResponse_PUT_id = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUT_id;
*zxwsf_di12_ModifyResponse_PUT_newEntryIDs = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUT_newEntryIDs;
*zxwsf_di12_ModifyResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUT_Status;
*zxwsf_di12_ModifyResponse_PUT_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_PUT_Extension;
*zxwsf_di12_ModifyResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_ADD_Status;
*zxwsf_di12_ModifyResponse_ADD_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_ADD_Extension;
*zxwsf_di12_ModifyResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_DEL_Status;
*zxwsf_di12_ModifyResponse_DEL_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_DEL_Extension;
*zxwsf_di12_ModifyResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_REV_Status;
*zxwsf_di12_ModifyResponse_REV_Extension = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_REV_Extension;
*zxwsf_DEC_di12_Options = *Net::WSF::Rawc::zxwsf_DEC_di12_Options;
*zxwsf_NEW_di12_Options = *Net::WSF::Rawc::zxwsf_NEW_di12_Options;
*zxwsf_DEEP_CLONE_di12_Options = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Options;
*zxwsf_DUP_STRS_di12_Options = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Options;
*zxwsf_FREE_di12_Options = *Net::WSF::Rawc::zxwsf_FREE_di12_Options;
*zxwsf_WALK_SO_di12_Options = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Options;
*zxwsf_WALK_WO_di12_Options = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Options;
*zxwsf_LEN_di12_Options = *Net::WSF::Rawc::zxwsf_LEN_di12_Options;
*zxwsf_ENC_SO_di12_Options = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Options;
*zxwsf_ENC_WO_di12_Options = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Options;
*zxwsf_EASY_ENC_SO_di12_Options = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Options;
*zxwsf_EASY_ENC_WO_di12_Options = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Options;
*zxwsf_di12_Options_GET_Option = *Net::WSF::Rawc::zxwsf_di12_Options_GET_Option;
*zxwsf_di12_Options_NUM_Option = *Net::WSF::Rawc::zxwsf_di12_Options_NUM_Option;
*zxwsf_di12_Options_POP_Option = *Net::WSF::Rawc::zxwsf_di12_Options_POP_Option;
*zxwsf_di12_Options_PUSH_Option = *Net::WSF::Rawc::zxwsf_di12_Options_PUSH_Option;
*zxwsf_di12_Options_PUT_Option = *Net::WSF::Rawc::zxwsf_di12_Options_PUT_Option;
*zxwsf_di12_Options_ADD_Option = *Net::WSF::Rawc::zxwsf_di12_Options_ADD_Option;
*zxwsf_di12_Options_DEL_Option = *Net::WSF::Rawc::zxwsf_di12_Options_DEL_Option;
*zxwsf_di12_Options_REV_Option = *Net::WSF::Rawc::zxwsf_di12_Options_REV_Option;
*zxwsf_DEC_di12_Query = *Net::WSF::Rawc::zxwsf_DEC_di12_Query;
*zxwsf_NEW_di12_Query = *Net::WSF::Rawc::zxwsf_NEW_di12_Query;
*zxwsf_DEEP_CLONE_di12_Query = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Query;
*zxwsf_DUP_STRS_di12_Query = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Query;
*zxwsf_FREE_di12_Query = *Net::WSF::Rawc::zxwsf_FREE_di12_Query;
*zxwsf_WALK_SO_di12_Query = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Query;
*zxwsf_WALK_WO_di12_Query = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Query;
*zxwsf_LEN_di12_Query = *Net::WSF::Rawc::zxwsf_LEN_di12_Query;
*zxwsf_ENC_SO_di12_Query = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Query;
*zxwsf_ENC_WO_di12_Query = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Query;
*zxwsf_EASY_ENC_SO_di12_Query = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Query;
*zxwsf_EASY_ENC_WO_di12_Query = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Query;
*zxwsf_di12_Query_GET_id = *Net::WSF::Rawc::zxwsf_di12_Query_GET_id;
*zxwsf_di12_Query_GET_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_GET_RequestedServiceType;
*zxwsf_di12_Query_NUM_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_NUM_RequestedServiceType;
*zxwsf_di12_Query_POP_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_POP_RequestedServiceType;
*zxwsf_di12_Query_PUSH_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_PUSH_RequestedServiceType;
*zxwsf_di12_Query_PUT_id = *Net::WSF::Rawc::zxwsf_di12_Query_PUT_id;
*zxwsf_di12_Query_PUT_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_PUT_RequestedServiceType;
*zxwsf_di12_Query_ADD_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_ADD_RequestedServiceType;
*zxwsf_di12_Query_DEL_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_DEL_RequestedServiceType;
*zxwsf_di12_Query_REV_RequestedServiceType = *Net::WSF::Rawc::zxwsf_di12_Query_REV_RequestedServiceType;
*zxwsf_DEC_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_DEC_di12_QueryResponse;
*zxwsf_NEW_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_NEW_di12_QueryResponse;
*zxwsf_DEEP_CLONE_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_QueryResponse;
*zxwsf_DUP_STRS_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_QueryResponse;
*zxwsf_FREE_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_FREE_di12_QueryResponse;
*zxwsf_WALK_SO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_QueryResponse;
*zxwsf_WALK_WO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_QueryResponse;
*zxwsf_LEN_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_LEN_di12_QueryResponse;
*zxwsf_ENC_SO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_QueryResponse;
*zxwsf_ENC_WO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_QueryResponse;
*zxwsf_EASY_ENC_SO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_QueryResponse;
*zxwsf_EASY_ENC_WO_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_QueryResponse;
*zxwsf_di12_QueryResponse_GET_id = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_GET_id;
*zxwsf_di12_QueryResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_GET_Status;
*zxwsf_di12_QueryResponse_GET_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_GET_ResourceOffering;
*zxwsf_di12_QueryResponse_GET_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_GET_Credentials;
*zxwsf_di12_QueryResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_NUM_Status;
*zxwsf_di12_QueryResponse_NUM_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_NUM_ResourceOffering;
*zxwsf_di12_QueryResponse_NUM_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_NUM_Credentials;
*zxwsf_di12_QueryResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_POP_Status;
*zxwsf_di12_QueryResponse_POP_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_POP_ResourceOffering;
*zxwsf_di12_QueryResponse_POP_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_POP_Credentials;
*zxwsf_di12_QueryResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUSH_Status;
*zxwsf_di12_QueryResponse_PUSH_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUSH_ResourceOffering;
*zxwsf_di12_QueryResponse_PUSH_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUSH_Credentials;
*zxwsf_di12_QueryResponse_PUT_id = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUT_id;
*zxwsf_di12_QueryResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUT_Status;
*zxwsf_di12_QueryResponse_PUT_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUT_ResourceOffering;
*zxwsf_di12_QueryResponse_PUT_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_PUT_Credentials;
*zxwsf_di12_QueryResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_ADD_Status;
*zxwsf_di12_QueryResponse_ADD_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_ADD_ResourceOffering;
*zxwsf_di12_QueryResponse_ADD_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_ADD_Credentials;
*zxwsf_di12_QueryResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_DEL_Status;
*zxwsf_di12_QueryResponse_DEL_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_DEL_ResourceOffering;
*zxwsf_di12_QueryResponse_DEL_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_DEL_Credentials;
*zxwsf_di12_QueryResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_REV_Status;
*zxwsf_di12_QueryResponse_REV_ResourceOffering = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_REV_ResourceOffering;
*zxwsf_di12_QueryResponse_REV_Credentials = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_REV_Credentials;
*zxwsf_DEC_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_DEC_di12_RemoveEntry;
*zxwsf_NEW_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_NEW_di12_RemoveEntry;
*zxwsf_DEEP_CLONE_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_RemoveEntry;
*zxwsf_DUP_STRS_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_RemoveEntry;
*zxwsf_FREE_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_FREE_di12_RemoveEntry;
*zxwsf_WALK_SO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_RemoveEntry;
*zxwsf_WALK_WO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_RemoveEntry;
*zxwsf_LEN_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_LEN_di12_RemoveEntry;
*zxwsf_ENC_SO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_RemoveEntry;
*zxwsf_ENC_WO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_RemoveEntry;
*zxwsf_EASY_ENC_SO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_RemoveEntry;
*zxwsf_EASY_ENC_WO_di12_RemoveEntry = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_RemoveEntry;
*zxwsf_di12_RemoveEntry_GET_entryID = *Net::WSF::Rawc::zxwsf_di12_RemoveEntry_GET_entryID;
*zxwsf_di12_RemoveEntry_PUT_entryID = *Net::WSF::Rawc::zxwsf_di12_RemoveEntry_PUT_entryID;
*zxwsf_DEC_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_DEC_di12_RequestedServiceType;
*zxwsf_NEW_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_NEW_di12_RequestedServiceType;
*zxwsf_DEEP_CLONE_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_RequestedServiceType;
*zxwsf_DUP_STRS_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_RequestedServiceType;
*zxwsf_FREE_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_FREE_di12_RequestedServiceType;
*zxwsf_WALK_SO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_RequestedServiceType;
*zxwsf_WALK_WO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_RequestedServiceType;
*zxwsf_LEN_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_LEN_di12_RequestedServiceType;
*zxwsf_ENC_SO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_RequestedServiceType;
*zxwsf_ENC_WO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_RequestedServiceType;
*zxwsf_EASY_ENC_SO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_RequestedServiceType;
*zxwsf_EASY_ENC_WO_di12_RequestedServiceType = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_RequestedServiceType;
*zxwsf_di12_RequestedServiceType_GET_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_GET_ServiceType;
*zxwsf_di12_RequestedServiceType_GET_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_GET_Options;
*zxwsf_di12_RequestedServiceType_NUM_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_NUM_ServiceType;
*zxwsf_di12_RequestedServiceType_NUM_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_NUM_Options;
*zxwsf_di12_RequestedServiceType_POP_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_POP_ServiceType;
*zxwsf_di12_RequestedServiceType_POP_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_POP_Options;
*zxwsf_di12_RequestedServiceType_PUSH_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_PUSH_ServiceType;
*zxwsf_di12_RequestedServiceType_PUSH_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_PUSH_Options;
*zxwsf_di12_RequestedServiceType_PUT_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_PUT_ServiceType;
*zxwsf_di12_RequestedServiceType_PUT_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_PUT_Options;
*zxwsf_di12_RequestedServiceType_ADD_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_ADD_ServiceType;
*zxwsf_di12_RequestedServiceType_ADD_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_ADD_Options;
*zxwsf_di12_RequestedServiceType_DEL_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_DEL_ServiceType;
*zxwsf_di12_RequestedServiceType_DEL_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_DEL_Options;
*zxwsf_di12_RequestedServiceType_REV_ServiceType = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_REV_ServiceType;
*zxwsf_di12_RequestedServiceType_REV_Options = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_REV_Options;
*zxwsf_DEC_di12_ResourceID = *Net::WSF::Rawc::zxwsf_DEC_di12_ResourceID;
*zxwsf_NEW_di12_ResourceID = *Net::WSF::Rawc::zxwsf_NEW_di12_ResourceID;
*zxwsf_DEEP_CLONE_di12_ResourceID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_ResourceID;
*zxwsf_DUP_STRS_di12_ResourceID = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_ResourceID;
*zxwsf_FREE_di12_ResourceID = *Net::WSF::Rawc::zxwsf_FREE_di12_ResourceID;
*zxwsf_WALK_SO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_ResourceID;
*zxwsf_WALK_WO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_ResourceID;
*zxwsf_LEN_di12_ResourceID = *Net::WSF::Rawc::zxwsf_LEN_di12_ResourceID;
*zxwsf_ENC_SO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_ResourceID;
*zxwsf_ENC_WO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_ResourceID;
*zxwsf_EASY_ENC_SO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_ResourceID;
*zxwsf_EASY_ENC_WO_di12_ResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_ResourceID;
*zxwsf_di12_ResourceID_GET_id = *Net::WSF::Rawc::zxwsf_di12_ResourceID_GET_id;
*zxwsf_di12_ResourceID_PUT_id = *Net::WSF::Rawc::zxwsf_di12_ResourceID_PUT_id;
*zxwsf_DEC_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_DEC_di12_ResourceOffering;
*zxwsf_NEW_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_NEW_di12_ResourceOffering;
*zxwsf_DEEP_CLONE_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_ResourceOffering;
*zxwsf_DUP_STRS_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_ResourceOffering;
*zxwsf_FREE_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_FREE_di12_ResourceOffering;
*zxwsf_WALK_SO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_ResourceOffering;
*zxwsf_WALK_WO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_ResourceOffering;
*zxwsf_LEN_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_LEN_di12_ResourceOffering;
*zxwsf_ENC_SO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_ResourceOffering;
*zxwsf_ENC_WO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_ResourceOffering;
*zxwsf_EASY_ENC_SO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_ResourceOffering;
*zxwsf_EASY_ENC_WO_di12_ResourceOffering = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_ResourceOffering;
*zxwsf_di12_ResourceOffering_GET_entryID = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_GET_entryID;
*zxwsf_di12_ResourceOffering_GET_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_GET_ServiceInstance;
*zxwsf_di12_ResourceOffering_GET_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_GET_Options;
*zxwsf_di12_ResourceOffering_GET_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_GET_Abstract;
*zxwsf_di12_ResourceOffering_NUM_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_NUM_ServiceInstance;
*zxwsf_di12_ResourceOffering_NUM_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_NUM_Options;
*zxwsf_di12_ResourceOffering_NUM_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_NUM_Abstract;
*zxwsf_di12_ResourceOffering_POP_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_POP_ServiceInstance;
*zxwsf_di12_ResourceOffering_POP_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_POP_Options;
*zxwsf_di12_ResourceOffering_POP_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_POP_Abstract;
*zxwsf_di12_ResourceOffering_PUSH_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUSH_ServiceInstance;
*zxwsf_di12_ResourceOffering_PUSH_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUSH_Options;
*zxwsf_di12_ResourceOffering_PUSH_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUSH_Abstract;
*zxwsf_di12_ResourceOffering_PUT_entryID = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUT_entryID;
*zxwsf_di12_ResourceOffering_PUT_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUT_ServiceInstance;
*zxwsf_di12_ResourceOffering_PUT_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUT_Options;
*zxwsf_di12_ResourceOffering_PUT_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_PUT_Abstract;
*zxwsf_di12_ResourceOffering_ADD_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_ADD_ServiceInstance;
*zxwsf_di12_ResourceOffering_ADD_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_ADD_Options;
*zxwsf_di12_ResourceOffering_ADD_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_ADD_Abstract;
*zxwsf_di12_ResourceOffering_DEL_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_DEL_ServiceInstance;
*zxwsf_di12_ResourceOffering_DEL_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_DEL_Options;
*zxwsf_di12_ResourceOffering_DEL_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_DEL_Abstract;
*zxwsf_di12_ResourceOffering_REV_ServiceInstance = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_REV_ServiceInstance;
*zxwsf_di12_ResourceOffering_REV_Options = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_REV_Options;
*zxwsf_di12_ResourceOffering_REV_Abstract = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_REV_Abstract;
*zxwsf_DEC_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_DEC_di12_ServiceInstance;
*zxwsf_NEW_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_NEW_di12_ServiceInstance;
*zxwsf_DEEP_CLONE_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_ServiceInstance;
*zxwsf_DUP_STRS_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_ServiceInstance;
*zxwsf_FREE_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_FREE_di12_ServiceInstance;
*zxwsf_WALK_SO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_ServiceInstance;
*zxwsf_WALK_WO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_ServiceInstance;
*zxwsf_LEN_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_LEN_di12_ServiceInstance;
*zxwsf_ENC_SO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_ServiceInstance;
*zxwsf_ENC_WO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_ServiceInstance;
*zxwsf_EASY_ENC_SO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_ServiceInstance;
*zxwsf_EASY_ENC_WO_di12_ServiceInstance = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_ServiceInstance;
*zxwsf_di12_ServiceInstance_GET_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_GET_ServiceType;
*zxwsf_di12_ServiceInstance_GET_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_GET_ProviderID;
*zxwsf_di12_ServiceInstance_GET_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_GET_Description;
*zxwsf_di12_ServiceInstance_NUM_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_NUM_ServiceType;
*zxwsf_di12_ServiceInstance_NUM_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_NUM_ProviderID;
*zxwsf_di12_ServiceInstance_NUM_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_NUM_Description;
*zxwsf_di12_ServiceInstance_POP_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_POP_ServiceType;
*zxwsf_di12_ServiceInstance_POP_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_POP_ProviderID;
*zxwsf_di12_ServiceInstance_POP_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_POP_Description;
*zxwsf_di12_ServiceInstance_PUSH_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUSH_ServiceType;
*zxwsf_di12_ServiceInstance_PUSH_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUSH_ProviderID;
*zxwsf_di12_ServiceInstance_PUSH_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUSH_Description;
*zxwsf_di12_ServiceInstance_PUT_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUT_ServiceType;
*zxwsf_di12_ServiceInstance_PUT_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUT_ProviderID;
*zxwsf_di12_ServiceInstance_PUT_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_PUT_Description;
*zxwsf_di12_ServiceInstance_ADD_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_ADD_ServiceType;
*zxwsf_di12_ServiceInstance_ADD_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_ADD_ProviderID;
*zxwsf_di12_ServiceInstance_ADD_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_ADD_Description;
*zxwsf_di12_ServiceInstance_DEL_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_DEL_ServiceType;
*zxwsf_di12_ServiceInstance_DEL_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_DEL_ProviderID;
*zxwsf_di12_ServiceInstance_DEL_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_DEL_Description;
*zxwsf_di12_ServiceInstance_REV_ServiceType = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_REV_ServiceType;
*zxwsf_di12_ServiceInstance_REV_ProviderID = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_REV_ProviderID;
*zxwsf_di12_ServiceInstance_REV_Description = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_REV_Description;
*zxwsf_DEC_di12_Status = *Net::WSF::Rawc::zxwsf_DEC_di12_Status;
*zxwsf_NEW_di12_Status = *Net::WSF::Rawc::zxwsf_NEW_di12_Status;
*zxwsf_DEEP_CLONE_di12_Status = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di12_Status;
*zxwsf_DUP_STRS_di12_Status = *Net::WSF::Rawc::zxwsf_DUP_STRS_di12_Status;
*zxwsf_FREE_di12_Status = *Net::WSF::Rawc::zxwsf_FREE_di12_Status;
*zxwsf_WALK_SO_di12_Status = *Net::WSF::Rawc::zxwsf_WALK_SO_di12_Status;
*zxwsf_WALK_WO_di12_Status = *Net::WSF::Rawc::zxwsf_WALK_WO_di12_Status;
*zxwsf_LEN_di12_Status = *Net::WSF::Rawc::zxwsf_LEN_di12_Status;
*zxwsf_ENC_SO_di12_Status = *Net::WSF::Rawc::zxwsf_ENC_SO_di12_Status;
*zxwsf_ENC_WO_di12_Status = *Net::WSF::Rawc::zxwsf_ENC_WO_di12_Status;
*zxwsf_EASY_ENC_SO_di12_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di12_Status;
*zxwsf_EASY_ENC_WO_di12_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di12_Status;
*zxwsf_di12_Status_GET_code = *Net::WSF::Rawc::zxwsf_di12_Status_GET_code;
*zxwsf_di12_Status_GET_ref = *Net::WSF::Rawc::zxwsf_di12_Status_GET_ref;
*zxwsf_di12_Status_GET_comment = *Net::WSF::Rawc::zxwsf_di12_Status_GET_comment;
*zxwsf_di12_Status_GET_Status = *Net::WSF::Rawc::zxwsf_di12_Status_GET_Status;
*zxwsf_di12_Status_NUM_Status = *Net::WSF::Rawc::zxwsf_di12_Status_NUM_Status;
*zxwsf_di12_Status_POP_Status = *Net::WSF::Rawc::zxwsf_di12_Status_POP_Status;
*zxwsf_di12_Status_PUSH_Status = *Net::WSF::Rawc::zxwsf_di12_Status_PUSH_Status;
*zxwsf_di12_Status_PUT_code = *Net::WSF::Rawc::zxwsf_di12_Status_PUT_code;
*zxwsf_di12_Status_PUT_ref = *Net::WSF::Rawc::zxwsf_di12_Status_PUT_ref;
*zxwsf_di12_Status_PUT_comment = *Net::WSF::Rawc::zxwsf_di12_Status_PUT_comment;
*zxwsf_di12_Status_PUT_Status = *Net::WSF::Rawc::zxwsf_di12_Status_PUT_Status;
*zxwsf_di12_Status_ADD_Status = *Net::WSF::Rawc::zxwsf_di12_Status_ADD_Status;
*zxwsf_di12_Status_DEL_Status = *Net::WSF::Rawc::zxwsf_di12_Status_DEL_Status;
*zxwsf_di12_Status_REV_Status = *Net::WSF::Rawc::zxwsf_di12_Status_REV_Status;
*zxwsf_DEC_di_EndpointContext = *Net::WSF::Rawc::zxwsf_DEC_di_EndpointContext;
*zxwsf_NEW_di_EndpointContext = *Net::WSF::Rawc::zxwsf_NEW_di_EndpointContext;
*zxwsf_DEEP_CLONE_di_EndpointContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_EndpointContext;
*zxwsf_DUP_STRS_di_EndpointContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_EndpointContext;
*zxwsf_FREE_di_EndpointContext = *Net::WSF::Rawc::zxwsf_FREE_di_EndpointContext;
*zxwsf_WALK_SO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_WALK_SO_di_EndpointContext;
*zxwsf_WALK_WO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_WALK_WO_di_EndpointContext;
*zxwsf_LEN_di_EndpointContext = *Net::WSF::Rawc::zxwsf_LEN_di_EndpointContext;
*zxwsf_ENC_SO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_ENC_SO_di_EndpointContext;
*zxwsf_ENC_WO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_ENC_WO_di_EndpointContext;
*zxwsf_EASY_ENC_SO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_EndpointContext;
*zxwsf_EASY_ENC_WO_di_EndpointContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_EndpointContext;
*zxwsf_di_EndpointContext_GET_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_GET_Address;
*zxwsf_di_EndpointContext_GET_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_GET_Framework;
*zxwsf_di_EndpointContext_GET_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_GET_SecurityMechID;
*zxwsf_di_EndpointContext_GET_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_GET_Action;
*zxwsf_di_EndpointContext_NUM_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_NUM_Address;
*zxwsf_di_EndpointContext_NUM_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_NUM_Framework;
*zxwsf_di_EndpointContext_NUM_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_NUM_SecurityMechID;
*zxwsf_di_EndpointContext_NUM_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_NUM_Action;
*zxwsf_di_EndpointContext_POP_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_POP_Address;
*zxwsf_di_EndpointContext_POP_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_POP_Framework;
*zxwsf_di_EndpointContext_POP_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_POP_SecurityMechID;
*zxwsf_di_EndpointContext_POP_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_POP_Action;
*zxwsf_di_EndpointContext_PUSH_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUSH_Address;
*zxwsf_di_EndpointContext_PUSH_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUSH_Framework;
*zxwsf_di_EndpointContext_PUSH_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUSH_SecurityMechID;
*zxwsf_di_EndpointContext_PUSH_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUSH_Action;
*zxwsf_di_EndpointContext_PUT_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUT_Address;
*zxwsf_di_EndpointContext_PUT_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUT_Framework;
*zxwsf_di_EndpointContext_PUT_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUT_SecurityMechID;
*zxwsf_di_EndpointContext_PUT_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_PUT_Action;
*zxwsf_di_EndpointContext_ADD_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_ADD_Address;
*zxwsf_di_EndpointContext_ADD_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_ADD_Framework;
*zxwsf_di_EndpointContext_ADD_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_ADD_SecurityMechID;
*zxwsf_di_EndpointContext_ADD_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_ADD_Action;
*zxwsf_di_EndpointContext_DEL_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_DEL_Address;
*zxwsf_di_EndpointContext_DEL_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_DEL_Framework;
*zxwsf_di_EndpointContext_DEL_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_DEL_SecurityMechID;
*zxwsf_di_EndpointContext_DEL_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_DEL_Action;
*zxwsf_di_EndpointContext_REV_Address = *Net::WSF::Rawc::zxwsf_di_EndpointContext_REV_Address;
*zxwsf_di_EndpointContext_REV_Framework = *Net::WSF::Rawc::zxwsf_di_EndpointContext_REV_Framework;
*zxwsf_di_EndpointContext_REV_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_EndpointContext_REV_SecurityMechID;
*zxwsf_di_EndpointContext_REV_Action = *Net::WSF::Rawc::zxwsf_di_EndpointContext_REV_Action;
*zxwsf_DEC_di_Framework = *Net::WSF::Rawc::zxwsf_DEC_di_Framework;
*zxwsf_NEW_di_Framework = *Net::WSF::Rawc::zxwsf_NEW_di_Framework;
*zxwsf_DEEP_CLONE_di_Framework = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_Framework;
*zxwsf_DUP_STRS_di_Framework = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_Framework;
*zxwsf_FREE_di_Framework = *Net::WSF::Rawc::zxwsf_FREE_di_Framework;
*zxwsf_WALK_SO_di_Framework = *Net::WSF::Rawc::zxwsf_WALK_SO_di_Framework;
*zxwsf_WALK_WO_di_Framework = *Net::WSF::Rawc::zxwsf_WALK_WO_di_Framework;
*zxwsf_LEN_di_Framework = *Net::WSF::Rawc::zxwsf_LEN_di_Framework;
*zxwsf_ENC_SO_di_Framework = *Net::WSF::Rawc::zxwsf_ENC_SO_di_Framework;
*zxwsf_ENC_WO_di_Framework = *Net::WSF::Rawc::zxwsf_ENC_WO_di_Framework;
*zxwsf_EASY_ENC_SO_di_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_Framework;
*zxwsf_EASY_ENC_WO_di_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_Framework;
*zxwsf_di_Framework_GET_version = *Net::WSF::Rawc::zxwsf_di_Framework_GET_version;
*zxwsf_di_Framework_PUT_version = *Net::WSF::Rawc::zxwsf_di_Framework_PUT_version;
*zxwsf_DEC_di_Keys = *Net::WSF::Rawc::zxwsf_DEC_di_Keys;
*zxwsf_NEW_di_Keys = *Net::WSF::Rawc::zxwsf_NEW_di_Keys;
*zxwsf_DEEP_CLONE_di_Keys = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_Keys;
*zxwsf_DUP_STRS_di_Keys = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_Keys;
*zxwsf_FREE_di_Keys = *Net::WSF::Rawc::zxwsf_FREE_di_Keys;
*zxwsf_WALK_SO_di_Keys = *Net::WSF::Rawc::zxwsf_WALK_SO_di_Keys;
*zxwsf_WALK_WO_di_Keys = *Net::WSF::Rawc::zxwsf_WALK_WO_di_Keys;
*zxwsf_LEN_di_Keys = *Net::WSF::Rawc::zxwsf_LEN_di_Keys;
*zxwsf_ENC_SO_di_Keys = *Net::WSF::Rawc::zxwsf_ENC_SO_di_Keys;
*zxwsf_ENC_WO_di_Keys = *Net::WSF::Rawc::zxwsf_ENC_WO_di_Keys;
*zxwsf_EASY_ENC_SO_di_Keys = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_Keys;
*zxwsf_EASY_ENC_WO_di_Keys = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_Keys;
*zxwsf_di_Keys_GET_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_GET_KeyDescriptor;
*zxwsf_di_Keys_NUM_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_NUM_KeyDescriptor;
*zxwsf_di_Keys_POP_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_POP_KeyDescriptor;
*zxwsf_di_Keys_PUSH_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_PUSH_KeyDescriptor;
*zxwsf_di_Keys_PUT_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_PUT_KeyDescriptor;
*zxwsf_di_Keys_ADD_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_ADD_KeyDescriptor;
*zxwsf_di_Keys_DEL_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_DEL_KeyDescriptor;
*zxwsf_di_Keys_REV_KeyDescriptor = *Net::WSF::Rawc::zxwsf_di_Keys_REV_KeyDescriptor;
*zxwsf_DEC_di_Options = *Net::WSF::Rawc::zxwsf_DEC_di_Options;
*zxwsf_NEW_di_Options = *Net::WSF::Rawc::zxwsf_NEW_di_Options;
*zxwsf_DEEP_CLONE_di_Options = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_Options;
*zxwsf_DUP_STRS_di_Options = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_Options;
*zxwsf_FREE_di_Options = *Net::WSF::Rawc::zxwsf_FREE_di_Options;
*zxwsf_WALK_SO_di_Options = *Net::WSF::Rawc::zxwsf_WALK_SO_di_Options;
*zxwsf_WALK_WO_di_Options = *Net::WSF::Rawc::zxwsf_WALK_WO_di_Options;
*zxwsf_LEN_di_Options = *Net::WSF::Rawc::zxwsf_LEN_di_Options;
*zxwsf_ENC_SO_di_Options = *Net::WSF::Rawc::zxwsf_ENC_SO_di_Options;
*zxwsf_ENC_WO_di_Options = *Net::WSF::Rawc::zxwsf_ENC_WO_di_Options;
*zxwsf_EASY_ENC_SO_di_Options = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_Options;
*zxwsf_EASY_ENC_WO_di_Options = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_Options;
*zxwsf_di_Options_GET_Option = *Net::WSF::Rawc::zxwsf_di_Options_GET_Option;
*zxwsf_di_Options_NUM_Option = *Net::WSF::Rawc::zxwsf_di_Options_NUM_Option;
*zxwsf_di_Options_POP_Option = *Net::WSF::Rawc::zxwsf_di_Options_POP_Option;
*zxwsf_di_Options_PUSH_Option = *Net::WSF::Rawc::zxwsf_di_Options_PUSH_Option;
*zxwsf_di_Options_PUT_Option = *Net::WSF::Rawc::zxwsf_di_Options_PUT_Option;
*zxwsf_di_Options_ADD_Option = *Net::WSF::Rawc::zxwsf_di_Options_ADD_Option;
*zxwsf_di_Options_DEL_Option = *Net::WSF::Rawc::zxwsf_di_Options_DEL_Option;
*zxwsf_di_Options_REV_Option = *Net::WSF::Rawc::zxwsf_di_Options_REV_Option;
*zxwsf_DEC_di_Query = *Net::WSF::Rawc::zxwsf_DEC_di_Query;
*zxwsf_NEW_di_Query = *Net::WSF::Rawc::zxwsf_NEW_di_Query;
*zxwsf_DEEP_CLONE_di_Query = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_Query;
*zxwsf_DUP_STRS_di_Query = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_Query;
*zxwsf_FREE_di_Query = *Net::WSF::Rawc::zxwsf_FREE_di_Query;
*zxwsf_WALK_SO_di_Query = *Net::WSF::Rawc::zxwsf_WALK_SO_di_Query;
*zxwsf_WALK_WO_di_Query = *Net::WSF::Rawc::zxwsf_WALK_WO_di_Query;
*zxwsf_LEN_di_Query = *Net::WSF::Rawc::zxwsf_LEN_di_Query;
*zxwsf_ENC_SO_di_Query = *Net::WSF::Rawc::zxwsf_ENC_SO_di_Query;
*zxwsf_ENC_WO_di_Query = *Net::WSF::Rawc::zxwsf_ENC_WO_di_Query;
*zxwsf_EASY_ENC_SO_di_Query = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_Query;
*zxwsf_EASY_ENC_WO_di_Query = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_Query;
*zxwsf_di_Query_GET_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_GET_RequestedService;
*zxwsf_di_Query_NUM_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_NUM_RequestedService;
*zxwsf_di_Query_POP_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_POP_RequestedService;
*zxwsf_di_Query_PUSH_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_PUSH_RequestedService;
*zxwsf_di_Query_PUT_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_PUT_RequestedService;
*zxwsf_di_Query_ADD_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_ADD_RequestedService;
*zxwsf_di_Query_DEL_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_DEL_RequestedService;
*zxwsf_di_Query_REV_RequestedService = *Net::WSF::Rawc::zxwsf_di_Query_REV_RequestedService;
*zxwsf_DEC_di_QueryResponse = *Net::WSF::Rawc::zxwsf_DEC_di_QueryResponse;
*zxwsf_NEW_di_QueryResponse = *Net::WSF::Rawc::zxwsf_NEW_di_QueryResponse;
*zxwsf_DEEP_CLONE_di_QueryResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_QueryResponse;
*zxwsf_DUP_STRS_di_QueryResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_QueryResponse;
*zxwsf_FREE_di_QueryResponse = *Net::WSF::Rawc::zxwsf_FREE_di_QueryResponse;
*zxwsf_WALK_SO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_QueryResponse;
*zxwsf_WALK_WO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_QueryResponse;
*zxwsf_LEN_di_QueryResponse = *Net::WSF::Rawc::zxwsf_LEN_di_QueryResponse;
*zxwsf_ENC_SO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_QueryResponse;
*zxwsf_ENC_WO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_QueryResponse;
*zxwsf_EASY_ENC_SO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_QueryResponse;
*zxwsf_EASY_ENC_WO_di_QueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_QueryResponse;
*zxwsf_di_QueryResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_GET_Status;
*zxwsf_di_QueryResponse_GET_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_GET_EndpointReference;
*zxwsf_di_QueryResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_NUM_Status;
*zxwsf_di_QueryResponse_NUM_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_NUM_EndpointReference;
*zxwsf_di_QueryResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_POP_Status;
*zxwsf_di_QueryResponse_POP_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_POP_EndpointReference;
*zxwsf_di_QueryResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_PUSH_Status;
*zxwsf_di_QueryResponse_PUSH_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_PUSH_EndpointReference;
*zxwsf_di_QueryResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_PUT_Status;
*zxwsf_di_QueryResponse_PUT_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_PUT_EndpointReference;
*zxwsf_di_QueryResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_ADD_Status;
*zxwsf_di_QueryResponse_ADD_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_ADD_EndpointReference;
*zxwsf_di_QueryResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_DEL_Status;
*zxwsf_di_QueryResponse_DEL_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_DEL_EndpointReference;
*zxwsf_di_QueryResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_QueryResponse_REV_Status;
*zxwsf_di_QueryResponse_REV_EndpointReference = *Net::WSF::Rawc::zxwsf_di_QueryResponse_REV_EndpointReference;
*zxwsf_DEC_di_RequestedService = *Net::WSF::Rawc::zxwsf_DEC_di_RequestedService;
*zxwsf_NEW_di_RequestedService = *Net::WSF::Rawc::zxwsf_NEW_di_RequestedService;
*zxwsf_DEEP_CLONE_di_RequestedService = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_RequestedService;
*zxwsf_DUP_STRS_di_RequestedService = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_RequestedService;
*zxwsf_FREE_di_RequestedService = *Net::WSF::Rawc::zxwsf_FREE_di_RequestedService;
*zxwsf_WALK_SO_di_RequestedService = *Net::WSF::Rawc::zxwsf_WALK_SO_di_RequestedService;
*zxwsf_WALK_WO_di_RequestedService = *Net::WSF::Rawc::zxwsf_WALK_WO_di_RequestedService;
*zxwsf_LEN_di_RequestedService = *Net::WSF::Rawc::zxwsf_LEN_di_RequestedService;
*zxwsf_ENC_SO_di_RequestedService = *Net::WSF::Rawc::zxwsf_ENC_SO_di_RequestedService;
*zxwsf_ENC_WO_di_RequestedService = *Net::WSF::Rawc::zxwsf_ENC_WO_di_RequestedService;
*zxwsf_EASY_ENC_SO_di_RequestedService = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_RequestedService;
*zxwsf_EASY_ENC_WO_di_RequestedService = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_RequestedService;
*zxwsf_di_RequestedService_GET_reqID = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_reqID;
*zxwsf_di_RequestedService_GET_resultsType = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_resultsType;
*zxwsf_di_RequestedService_GET_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_ServiceType;
*zxwsf_di_RequestedService_GET_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_ProviderID;
*zxwsf_di_RequestedService_GET_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_Options;
*zxwsf_di_RequestedService_GET_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_SecurityMechID;
*zxwsf_di_RequestedService_GET_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_Framework;
*zxwsf_di_RequestedService_GET_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_GET_Action;
*zxwsf_di_RequestedService_NUM_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_ServiceType;
*zxwsf_di_RequestedService_NUM_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_ProviderID;
*zxwsf_di_RequestedService_NUM_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_Options;
*zxwsf_di_RequestedService_NUM_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_SecurityMechID;
*zxwsf_di_RequestedService_NUM_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_Framework;
*zxwsf_di_RequestedService_NUM_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_NUM_Action;
*zxwsf_di_RequestedService_POP_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_ServiceType;
*zxwsf_di_RequestedService_POP_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_ProviderID;
*zxwsf_di_RequestedService_POP_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_Options;
*zxwsf_di_RequestedService_POP_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_SecurityMechID;
*zxwsf_di_RequestedService_POP_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_Framework;
*zxwsf_di_RequestedService_POP_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_POP_Action;
*zxwsf_di_RequestedService_PUSH_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_ServiceType;
*zxwsf_di_RequestedService_PUSH_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_ProviderID;
*zxwsf_di_RequestedService_PUSH_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_Options;
*zxwsf_di_RequestedService_PUSH_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_SecurityMechID;
*zxwsf_di_RequestedService_PUSH_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_Framework;
*zxwsf_di_RequestedService_PUSH_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUSH_Action;
*zxwsf_di_RequestedService_PUT_reqID = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_reqID;
*zxwsf_di_RequestedService_PUT_resultsType = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_resultsType;
*zxwsf_di_RequestedService_PUT_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_ServiceType;
*zxwsf_di_RequestedService_PUT_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_ProviderID;
*zxwsf_di_RequestedService_PUT_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_Options;
*zxwsf_di_RequestedService_PUT_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_SecurityMechID;
*zxwsf_di_RequestedService_PUT_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_Framework;
*zxwsf_di_RequestedService_PUT_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_PUT_Action;
*zxwsf_di_RequestedService_ADD_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_ServiceType;
*zxwsf_di_RequestedService_ADD_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_ProviderID;
*zxwsf_di_RequestedService_ADD_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_Options;
*zxwsf_di_RequestedService_ADD_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_SecurityMechID;
*zxwsf_di_RequestedService_ADD_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_Framework;
*zxwsf_di_RequestedService_ADD_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_ADD_Action;
*zxwsf_di_RequestedService_DEL_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_ServiceType;
*zxwsf_di_RequestedService_DEL_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_ProviderID;
*zxwsf_di_RequestedService_DEL_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_Options;
*zxwsf_di_RequestedService_DEL_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_SecurityMechID;
*zxwsf_di_RequestedService_DEL_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_Framework;
*zxwsf_di_RequestedService_DEL_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_DEL_Action;
*zxwsf_di_RequestedService_REV_ServiceType = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_ServiceType;
*zxwsf_di_RequestedService_REV_ProviderID = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_ProviderID;
*zxwsf_di_RequestedService_REV_Options = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_Options;
*zxwsf_di_RequestedService_REV_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_SecurityMechID;
*zxwsf_di_RequestedService_REV_Framework = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_Framework;
*zxwsf_di_RequestedService_REV_Action = *Net::WSF::Rawc::zxwsf_di_RequestedService_REV_Action;
*zxwsf_DEC_di_SecurityContext = *Net::WSF::Rawc::zxwsf_DEC_di_SecurityContext;
*zxwsf_NEW_di_SecurityContext = *Net::WSF::Rawc::zxwsf_NEW_di_SecurityContext;
*zxwsf_DEEP_CLONE_di_SecurityContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SecurityContext;
*zxwsf_DUP_STRS_di_SecurityContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SecurityContext;
*zxwsf_FREE_di_SecurityContext = *Net::WSF::Rawc::zxwsf_FREE_di_SecurityContext;
*zxwsf_WALK_SO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SecurityContext;
*zxwsf_WALK_WO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SecurityContext;
*zxwsf_LEN_di_SecurityContext = *Net::WSF::Rawc::zxwsf_LEN_di_SecurityContext;
*zxwsf_ENC_SO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SecurityContext;
*zxwsf_ENC_WO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SecurityContext;
*zxwsf_EASY_ENC_SO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SecurityContext;
*zxwsf_EASY_ENC_WO_di_SecurityContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SecurityContext;
*zxwsf_di_SecurityContext_GET_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_GET_SecurityMechID;
*zxwsf_di_SecurityContext_GET_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_GET_Token;
*zxwsf_di_SecurityContext_NUM_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_NUM_SecurityMechID;
*zxwsf_di_SecurityContext_NUM_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_NUM_Token;
*zxwsf_di_SecurityContext_POP_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_POP_SecurityMechID;
*zxwsf_di_SecurityContext_POP_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_POP_Token;
*zxwsf_di_SecurityContext_PUSH_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_PUSH_SecurityMechID;
*zxwsf_di_SecurityContext_PUSH_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_PUSH_Token;
*zxwsf_di_SecurityContext_PUT_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_PUT_SecurityMechID;
*zxwsf_di_SecurityContext_PUT_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_PUT_Token;
*zxwsf_di_SecurityContext_ADD_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_ADD_SecurityMechID;
*zxwsf_di_SecurityContext_ADD_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_ADD_Token;
*zxwsf_di_SecurityContext_DEL_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_DEL_SecurityMechID;
*zxwsf_di_SecurityContext_DEL_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_DEL_Token;
*zxwsf_di_SecurityContext_REV_SecurityMechID = *Net::WSF::Rawc::zxwsf_di_SecurityContext_REV_SecurityMechID;
*zxwsf_di_SecurityContext_REV_Token = *Net::WSF::Rawc::zxwsf_di_SecurityContext_REV_Token;
*zxwsf_DEC_di_ServiceContext = *Net::WSF::Rawc::zxwsf_DEC_di_ServiceContext;
*zxwsf_NEW_di_ServiceContext = *Net::WSF::Rawc::zxwsf_NEW_di_ServiceContext;
*zxwsf_DEEP_CLONE_di_ServiceContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_ServiceContext;
*zxwsf_DUP_STRS_di_ServiceContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_ServiceContext;
*zxwsf_FREE_di_ServiceContext = *Net::WSF::Rawc::zxwsf_FREE_di_ServiceContext;
*zxwsf_WALK_SO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_WALK_SO_di_ServiceContext;
*zxwsf_WALK_WO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_WALK_WO_di_ServiceContext;
*zxwsf_LEN_di_ServiceContext = *Net::WSF::Rawc::zxwsf_LEN_di_ServiceContext;
*zxwsf_ENC_SO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_ENC_SO_di_ServiceContext;
*zxwsf_ENC_WO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_ENC_WO_di_ServiceContext;
*zxwsf_EASY_ENC_SO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_ServiceContext;
*zxwsf_EASY_ENC_WO_di_ServiceContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_ServiceContext;
*zxwsf_di_ServiceContext_GET_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_GET_ServiceType;
*zxwsf_di_ServiceContext_GET_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_GET_Options;
*zxwsf_di_ServiceContext_GET_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_GET_EndpointContext;
*zxwsf_di_ServiceContext_NUM_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_NUM_ServiceType;
*zxwsf_di_ServiceContext_NUM_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_NUM_Options;
*zxwsf_di_ServiceContext_NUM_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_NUM_EndpointContext;
*zxwsf_di_ServiceContext_POP_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_POP_ServiceType;
*zxwsf_di_ServiceContext_POP_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_POP_Options;
*zxwsf_di_ServiceContext_POP_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_POP_EndpointContext;
*zxwsf_di_ServiceContext_PUSH_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUSH_ServiceType;
*zxwsf_di_ServiceContext_PUSH_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUSH_Options;
*zxwsf_di_ServiceContext_PUSH_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUSH_EndpointContext;
*zxwsf_di_ServiceContext_PUT_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUT_ServiceType;
*zxwsf_di_ServiceContext_PUT_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUT_Options;
*zxwsf_di_ServiceContext_PUT_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_PUT_EndpointContext;
*zxwsf_di_ServiceContext_ADD_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_ADD_ServiceType;
*zxwsf_di_ServiceContext_ADD_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_ADD_Options;
*zxwsf_di_ServiceContext_ADD_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_ADD_EndpointContext;
*zxwsf_di_ServiceContext_DEL_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_DEL_ServiceType;
*zxwsf_di_ServiceContext_DEL_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_DEL_Options;
*zxwsf_di_ServiceContext_DEL_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_DEL_EndpointContext;
*zxwsf_di_ServiceContext_REV_ServiceType = *Net::WSF::Rawc::zxwsf_di_ServiceContext_REV_ServiceType;
*zxwsf_di_ServiceContext_REV_Options = *Net::WSF::Rawc::zxwsf_di_ServiceContext_REV_Options;
*zxwsf_di_ServiceContext_REV_EndpointContext = *Net::WSF::Rawc::zxwsf_di_ServiceContext_REV_EndpointContext;
*zxwsf_DEC_di_SvcMD = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMD;
*zxwsf_NEW_di_SvcMD = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMD;
*zxwsf_DEEP_CLONE_di_SvcMD = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMD;
*zxwsf_DUP_STRS_di_SvcMD = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMD;
*zxwsf_FREE_di_SvcMD = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMD;
*zxwsf_WALK_SO_di_SvcMD = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMD;
*zxwsf_WALK_WO_di_SvcMD = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMD;
*zxwsf_LEN_di_SvcMD = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMD;
*zxwsf_ENC_SO_di_SvcMD = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMD;
*zxwsf_ENC_WO_di_SvcMD = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMD;
*zxwsf_EASY_ENC_SO_di_SvcMD = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMD;
*zxwsf_EASY_ENC_WO_di_SvcMD = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMD;
*zxwsf_di_SvcMD_GET_svcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMD_GET_svcMDID;
*zxwsf_di_SvcMD_GET_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_GET_Abstract;
*zxwsf_di_SvcMD_GET_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_GET_ProviderID;
*zxwsf_di_SvcMD_GET_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_GET_ServiceContext;
*zxwsf_di_SvcMD_NUM_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_NUM_Abstract;
*zxwsf_di_SvcMD_NUM_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_NUM_ProviderID;
*zxwsf_di_SvcMD_NUM_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_NUM_ServiceContext;
*zxwsf_di_SvcMD_POP_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_POP_Abstract;
*zxwsf_di_SvcMD_POP_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_POP_ProviderID;
*zxwsf_di_SvcMD_POP_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_POP_ServiceContext;
*zxwsf_di_SvcMD_PUSH_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUSH_Abstract;
*zxwsf_di_SvcMD_PUSH_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUSH_ProviderID;
*zxwsf_di_SvcMD_PUSH_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUSH_ServiceContext;
*zxwsf_di_SvcMD_PUT_svcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUT_svcMDID;
*zxwsf_di_SvcMD_PUT_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUT_Abstract;
*zxwsf_di_SvcMD_PUT_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUT_ProviderID;
*zxwsf_di_SvcMD_PUT_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_PUT_ServiceContext;
*zxwsf_di_SvcMD_ADD_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_ADD_Abstract;
*zxwsf_di_SvcMD_ADD_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_ADD_ProviderID;
*zxwsf_di_SvcMD_ADD_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_ADD_ServiceContext;
*zxwsf_di_SvcMD_DEL_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_DEL_Abstract;
*zxwsf_di_SvcMD_DEL_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_DEL_ProviderID;
*zxwsf_di_SvcMD_DEL_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_DEL_ServiceContext;
*zxwsf_di_SvcMD_REV_Abstract = *Net::WSF::Rawc::zxwsf_di_SvcMD_REV_Abstract;
*zxwsf_di_SvcMD_REV_ProviderID = *Net::WSF::Rawc::zxwsf_di_SvcMD_REV_ProviderID;
*zxwsf_di_SvcMD_REV_ServiceContext = *Net::WSF::Rawc::zxwsf_di_SvcMD_REV_ServiceContext;
*zxwsf_DEC_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationAdd;
*zxwsf_NEW_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationAdd;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationAdd;
*zxwsf_DUP_STRS_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationAdd;
*zxwsf_FREE_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationAdd;
*zxwsf_WALK_SO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationAdd;
*zxwsf_WALK_WO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationAdd;
*zxwsf_LEN_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationAdd;
*zxwsf_ENC_SO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationAdd;
*zxwsf_ENC_WO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationAdd;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationAdd;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationAdd;
*zxwsf_di_SvcMDAssociationAdd_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_GET_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_NUM_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_POP_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_PUSH_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_PUT_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_ADD_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_DEL_SvcMDID;
*zxwsf_di_SvcMDAssociationAdd_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationAddResponse;
*zxwsf_NEW_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationAddResponse;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationAddResponse;
*zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationAddResponse;
*zxwsf_FREE_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationAddResponse;
*zxwsf_WALK_SO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationAddResponse;
*zxwsf_WALK_WO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationAddResponse;
*zxwsf_LEN_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationAddResponse;
*zxwsf_ENC_SO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationAddResponse;
*zxwsf_ENC_WO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationAddResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationAddResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationAddResponse;
*zxwsf_di_SvcMDAssociationAddResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_GET_Status;
*zxwsf_di_SvcMDAssociationAddResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_NUM_Status;
*zxwsf_di_SvcMDAssociationAddResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_POP_Status;
*zxwsf_di_SvcMDAssociationAddResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_PUSH_Status;
*zxwsf_di_SvcMDAssociationAddResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_PUT_Status;
*zxwsf_di_SvcMDAssociationAddResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_ADD_Status;
*zxwsf_di_SvcMDAssociationAddResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_DEL_Status;
*zxwsf_di_SvcMDAssociationAddResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_REV_Status;
*zxwsf_DEC_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationDelete;
*zxwsf_NEW_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationDelete;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationDelete;
*zxwsf_DUP_STRS_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationDelete;
*zxwsf_FREE_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationDelete;
*zxwsf_WALK_SO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationDelete;
*zxwsf_WALK_WO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationDelete;
*zxwsf_LEN_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationDelete;
*zxwsf_ENC_SO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationDelete;
*zxwsf_ENC_WO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationDelete;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationDelete;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationDelete;
*zxwsf_di_SvcMDAssociationDelete_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_GET_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_NUM_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_POP_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_PUSH_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_PUT_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_ADD_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_DEL_SvcMDID;
*zxwsf_di_SvcMDAssociationDelete_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationDeleteResponse;
*zxwsf_NEW_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationDeleteResponse;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationDeleteResponse;
*zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationDeleteResponse;
*zxwsf_FREE_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationDeleteResponse;
*zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationDeleteResponse;
*zxwsf_WALK_WO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationDeleteResponse;
*zxwsf_LEN_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationDeleteResponse;
*zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationDeleteResponse;
*zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationDeleteResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationDeleteResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationDeleteResponse;
*zxwsf_di_SvcMDAssociationDeleteResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_GET_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_NUM_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_POP_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_PUSH_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_PUT_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_ADD_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_DEL_Status;
*zxwsf_di_SvcMDAssociationDeleteResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_REV_Status;
*zxwsf_DEC_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationQuery;
*zxwsf_NEW_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationQuery;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationQuery;
*zxwsf_DUP_STRS_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationQuery;
*zxwsf_FREE_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationQuery;
*zxwsf_WALK_SO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationQuery;
*zxwsf_WALK_WO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationQuery;
*zxwsf_LEN_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationQuery;
*zxwsf_ENC_SO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationQuery;
*zxwsf_ENC_WO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationQuery;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationQuery;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationQuery;
*zxwsf_di_SvcMDAssociationQuery_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_GET_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_NUM_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_POP_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_PUSH_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_PUT_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_ADD_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_DEL_SvcMDID;
*zxwsf_di_SvcMDAssociationQuery_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDAssociationQueryResponse;
*zxwsf_NEW_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDAssociationQueryResponse;
*zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDAssociationQueryResponse;
*zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDAssociationQueryResponse;
*zxwsf_FREE_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDAssociationQueryResponse;
*zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDAssociationQueryResponse;
*zxwsf_WALK_WO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDAssociationQueryResponse;
*zxwsf_LEN_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDAssociationQueryResponse;
*zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDAssociationQueryResponse;
*zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDAssociationQueryResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDAssociationQueryResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDAssociationQueryResponse;
*zxwsf_di_SvcMDAssociationQueryResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_GET_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_GET_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_NUM_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_NUM_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_POP_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_POP_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_PUSH_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_PUSH_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_PUT_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_PUT_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_ADD_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_ADD_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_DEL_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_DEL_SvcMDID;
*zxwsf_di_SvcMDAssociationQueryResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_REV_Status;
*zxwsf_di_SvcMDAssociationQueryResponse_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDDelete;
*zxwsf_NEW_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDDelete;
*zxwsf_DEEP_CLONE_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDDelete;
*zxwsf_DUP_STRS_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDDelete;
*zxwsf_FREE_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDDelete;
*zxwsf_WALK_SO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDDelete;
*zxwsf_WALK_WO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDDelete;
*zxwsf_LEN_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDDelete;
*zxwsf_ENC_SO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDDelete;
*zxwsf_ENC_WO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDDelete;
*zxwsf_EASY_ENC_SO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDDelete;
*zxwsf_EASY_ENC_WO_di_SvcMDDelete = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDDelete;
*zxwsf_di_SvcMDDelete_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_GET_SvcMDID;
*zxwsf_di_SvcMDDelete_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_NUM_SvcMDID;
*zxwsf_di_SvcMDDelete_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_POP_SvcMDID;
*zxwsf_di_SvcMDDelete_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_PUSH_SvcMDID;
*zxwsf_di_SvcMDDelete_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_PUT_SvcMDID;
*zxwsf_di_SvcMDDelete_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_ADD_SvcMDID;
*zxwsf_di_SvcMDDelete_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_DEL_SvcMDID;
*zxwsf_di_SvcMDDelete_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDDeleteResponse;
*zxwsf_NEW_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDDeleteResponse;
*zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDDeleteResponse;
*zxwsf_DUP_STRS_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDDeleteResponse;
*zxwsf_FREE_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDDeleteResponse;
*zxwsf_WALK_SO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDDeleteResponse;
*zxwsf_WALK_WO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDDeleteResponse;
*zxwsf_LEN_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDDeleteResponse;
*zxwsf_ENC_SO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDDeleteResponse;
*zxwsf_ENC_WO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDDeleteResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDDeleteResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDDeleteResponse;
*zxwsf_di_SvcMDDeleteResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_GET_Status;
*zxwsf_di_SvcMDDeleteResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_NUM_Status;
*zxwsf_di_SvcMDDeleteResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_POP_Status;
*zxwsf_di_SvcMDDeleteResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_PUSH_Status;
*zxwsf_di_SvcMDDeleteResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_PUT_Status;
*zxwsf_di_SvcMDDeleteResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_ADD_Status;
*zxwsf_di_SvcMDDeleteResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_DEL_Status;
*zxwsf_di_SvcMDDeleteResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_REV_Status;
*zxwsf_DEC_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDQuery;
*zxwsf_NEW_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDQuery;
*zxwsf_DEEP_CLONE_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDQuery;
*zxwsf_DUP_STRS_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDQuery;
*zxwsf_FREE_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDQuery;
*zxwsf_WALK_SO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDQuery;
*zxwsf_WALK_WO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDQuery;
*zxwsf_LEN_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDQuery;
*zxwsf_ENC_SO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDQuery;
*zxwsf_ENC_WO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDQuery;
*zxwsf_EASY_ENC_SO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDQuery;
*zxwsf_EASY_ENC_WO_di_SvcMDQuery = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDQuery;
*zxwsf_di_SvcMDQuery_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_GET_SvcMDID;
*zxwsf_di_SvcMDQuery_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_NUM_SvcMDID;
*zxwsf_di_SvcMDQuery_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_POP_SvcMDID;
*zxwsf_di_SvcMDQuery_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_PUSH_SvcMDID;
*zxwsf_di_SvcMDQuery_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_PUT_SvcMDID;
*zxwsf_di_SvcMDQuery_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_ADD_SvcMDID;
*zxwsf_di_SvcMDQuery_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_DEL_SvcMDID;
*zxwsf_di_SvcMDQuery_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_REV_SvcMDID;
*zxwsf_DEC_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDQueryResponse;
*zxwsf_NEW_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDQueryResponse;
*zxwsf_DEEP_CLONE_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDQueryResponse;
*zxwsf_DUP_STRS_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDQueryResponse;
*zxwsf_FREE_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDQueryResponse;
*zxwsf_WALK_SO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDQueryResponse;
*zxwsf_WALK_WO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDQueryResponse;
*zxwsf_LEN_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDQueryResponse;
*zxwsf_ENC_SO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDQueryResponse;
*zxwsf_ENC_WO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDQueryResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDQueryResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDQueryResponse;
*zxwsf_di_SvcMDQueryResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_GET_Status;
*zxwsf_di_SvcMDQueryResponse_GET_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_GET_SvcMD;
*zxwsf_di_SvcMDQueryResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_NUM_Status;
*zxwsf_di_SvcMDQueryResponse_NUM_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_NUM_SvcMD;
*zxwsf_di_SvcMDQueryResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_POP_Status;
*zxwsf_di_SvcMDQueryResponse_POP_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_POP_SvcMD;
*zxwsf_di_SvcMDQueryResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_PUSH_Status;
*zxwsf_di_SvcMDQueryResponse_PUSH_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_PUSH_SvcMD;
*zxwsf_di_SvcMDQueryResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_PUT_Status;
*zxwsf_di_SvcMDQueryResponse_PUT_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_PUT_SvcMD;
*zxwsf_di_SvcMDQueryResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_ADD_Status;
*zxwsf_di_SvcMDQueryResponse_ADD_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_ADD_SvcMD;
*zxwsf_di_SvcMDQueryResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_DEL_Status;
*zxwsf_di_SvcMDQueryResponse_DEL_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_DEL_SvcMD;
*zxwsf_di_SvcMDQueryResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_REV_Status;
*zxwsf_di_SvcMDQueryResponse_REV_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_REV_SvcMD;
*zxwsf_DEC_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDRegister;
*zxwsf_NEW_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDRegister;
*zxwsf_DEEP_CLONE_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDRegister;
*zxwsf_DUP_STRS_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDRegister;
*zxwsf_FREE_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDRegister;
*zxwsf_WALK_SO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDRegister;
*zxwsf_WALK_WO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDRegister;
*zxwsf_LEN_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDRegister;
*zxwsf_ENC_SO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDRegister;
*zxwsf_ENC_WO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDRegister;
*zxwsf_EASY_ENC_SO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDRegister;
*zxwsf_EASY_ENC_WO_di_SvcMDRegister = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDRegister;
*zxwsf_di_SvcMDRegister_GET_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_GET_SvcMD;
*zxwsf_di_SvcMDRegister_NUM_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_NUM_SvcMD;
*zxwsf_di_SvcMDRegister_POP_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_POP_SvcMD;
*zxwsf_di_SvcMDRegister_PUSH_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_PUSH_SvcMD;
*zxwsf_di_SvcMDRegister_PUT_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_PUT_SvcMD;
*zxwsf_di_SvcMDRegister_ADD_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_ADD_SvcMD;
*zxwsf_di_SvcMDRegister_DEL_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_DEL_SvcMD;
*zxwsf_di_SvcMDRegister_REV_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_REV_SvcMD;
*zxwsf_DEC_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDRegisterResponse;
*zxwsf_NEW_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDRegisterResponse;
*zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDRegisterResponse;
*zxwsf_DUP_STRS_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDRegisterResponse;
*zxwsf_FREE_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDRegisterResponse;
*zxwsf_WALK_SO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDRegisterResponse;
*zxwsf_WALK_WO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDRegisterResponse;
*zxwsf_LEN_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDRegisterResponse;
*zxwsf_ENC_SO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDRegisterResponse;
*zxwsf_ENC_WO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDRegisterResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDRegisterResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDRegisterResponse;
*zxwsf_di_SvcMDRegisterResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_GET_Status;
*zxwsf_di_SvcMDRegisterResponse_GET_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_GET_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_GET_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_GET_Keys;
*zxwsf_di_SvcMDRegisterResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_NUM_Status;
*zxwsf_di_SvcMDRegisterResponse_NUM_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_NUM_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_NUM_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_NUM_Keys;
*zxwsf_di_SvcMDRegisterResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_POP_Status;
*zxwsf_di_SvcMDRegisterResponse_POP_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_POP_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_POP_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_POP_Keys;
*zxwsf_di_SvcMDRegisterResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUSH_Status;
*zxwsf_di_SvcMDRegisterResponse_PUSH_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUSH_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_PUSH_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUSH_Keys;
*zxwsf_di_SvcMDRegisterResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUT_Status;
*zxwsf_di_SvcMDRegisterResponse_PUT_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUT_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_PUT_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_PUT_Keys;
*zxwsf_di_SvcMDRegisterResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_ADD_Status;
*zxwsf_di_SvcMDRegisterResponse_ADD_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_ADD_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_ADD_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_ADD_Keys;
*zxwsf_di_SvcMDRegisterResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_DEL_Status;
*zxwsf_di_SvcMDRegisterResponse_DEL_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_DEL_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_DEL_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_DEL_Keys;
*zxwsf_di_SvcMDRegisterResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_REV_Status;
*zxwsf_di_SvcMDRegisterResponse_REV_SvcMDID = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_REV_SvcMDID;
*zxwsf_di_SvcMDRegisterResponse_REV_Keys = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_REV_Keys;
*zxwsf_DEC_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDReplace;
*zxwsf_NEW_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDReplace;
*zxwsf_DEEP_CLONE_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDReplace;
*zxwsf_DUP_STRS_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDReplace;
*zxwsf_FREE_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDReplace;
*zxwsf_WALK_SO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDReplace;
*zxwsf_WALK_WO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDReplace;
*zxwsf_LEN_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDReplace;
*zxwsf_ENC_SO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDReplace;
*zxwsf_ENC_WO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDReplace;
*zxwsf_EASY_ENC_SO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDReplace;
*zxwsf_EASY_ENC_WO_di_SvcMDReplace = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDReplace;
*zxwsf_di_SvcMDReplace_GET_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_GET_SvcMD;
*zxwsf_di_SvcMDReplace_NUM_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_NUM_SvcMD;
*zxwsf_di_SvcMDReplace_POP_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_POP_SvcMD;
*zxwsf_di_SvcMDReplace_PUSH_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_PUSH_SvcMD;
*zxwsf_di_SvcMDReplace_PUT_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_PUT_SvcMD;
*zxwsf_di_SvcMDReplace_ADD_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_ADD_SvcMD;
*zxwsf_di_SvcMDReplace_DEL_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_DEL_SvcMD;
*zxwsf_di_SvcMDReplace_REV_SvcMD = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_REV_SvcMD;
*zxwsf_DEC_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_DEC_di_SvcMDReplaceResponse;
*zxwsf_NEW_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_NEW_di_SvcMDReplaceResponse;
*zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_di_SvcMDReplaceResponse;
*zxwsf_DUP_STRS_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_di_SvcMDReplaceResponse;
*zxwsf_FREE_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_FREE_di_SvcMDReplaceResponse;
*zxwsf_WALK_SO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_di_SvcMDReplaceResponse;
*zxwsf_WALK_WO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_di_SvcMDReplaceResponse;
*zxwsf_LEN_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_LEN_di_SvcMDReplaceResponse;
*zxwsf_ENC_SO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_di_SvcMDReplaceResponse;
*zxwsf_ENC_WO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_di_SvcMDReplaceResponse;
*zxwsf_EASY_ENC_SO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_di_SvcMDReplaceResponse;
*zxwsf_EASY_ENC_WO_di_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_di_SvcMDReplaceResponse;
*zxwsf_di_SvcMDReplaceResponse_GET_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_GET_Status;
*zxwsf_di_SvcMDReplaceResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_NUM_Status;
*zxwsf_di_SvcMDReplaceResponse_POP_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_POP_Status;
*zxwsf_di_SvcMDReplaceResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_PUSH_Status;
*zxwsf_di_SvcMDReplaceResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_PUT_Status;
*zxwsf_di_SvcMDReplaceResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_ADD_Status;
*zxwsf_di_SvcMDReplaceResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_DEL_Status;
*zxwsf_di_SvcMDReplaceResponse_REV_Status = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_REV_Status;
*zxwsf_DEC_dise_Body = *Net::WSF::Rawc::zxwsf_DEC_dise_Body;
*zxwsf_NEW_dise_Body = *Net::WSF::Rawc::zxwsf_NEW_dise_Body;
*zxwsf_DEEP_CLONE_dise_Body = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_dise_Body;
*zxwsf_DUP_STRS_dise_Body = *Net::WSF::Rawc::zxwsf_DUP_STRS_dise_Body;
*zxwsf_FREE_dise_Body = *Net::WSF::Rawc::zxwsf_FREE_dise_Body;
*zxwsf_WALK_SO_dise_Body = *Net::WSF::Rawc::zxwsf_WALK_SO_dise_Body;
*zxwsf_WALK_WO_dise_Body = *Net::WSF::Rawc::zxwsf_WALK_WO_dise_Body;
*zxwsf_LEN_dise_Body = *Net::WSF::Rawc::zxwsf_LEN_dise_Body;
*zxwsf_ENC_SO_dise_Body = *Net::WSF::Rawc::zxwsf_ENC_SO_dise_Body;
*zxwsf_ENC_WO_dise_Body = *Net::WSF::Rawc::zxwsf_ENC_WO_dise_Body;
*zxwsf_EASY_ENC_SO_dise_Body = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_dise_Body;
*zxwsf_EASY_ENC_WO_dise_Body = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_dise_Body;
*zxwsf_dise_Body_GET_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationAdd;
*zxwsf_dise_Body_GET_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_GET_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationDelete;
*zxwsf_dise_Body_GET_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_GET_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationQuery;
*zxwsf_dise_Body_GET_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_GET_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDRegister;
*zxwsf_dise_Body_GET_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDRegisterResponse;
*zxwsf_dise_Body_GET_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDDelete;
*zxwsf_dise_Body_GET_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDDeleteResponse;
*zxwsf_dise_Body_GET_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDQuery;
*zxwsf_dise_Body_GET_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDQueryResponse;
*zxwsf_dise_Body_GET_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDReplace;
*zxwsf_dise_Body_GET_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_GET_SvcMDReplaceResponse;
*zxwsf_dise_Body_GET_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_GET_Fault;
*zxwsf_dise_Body_NUM_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationAdd;
*zxwsf_dise_Body_NUM_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_NUM_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationDelete;
*zxwsf_dise_Body_NUM_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_NUM_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationQuery;
*zxwsf_dise_Body_NUM_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_NUM_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDRegister;
*zxwsf_dise_Body_NUM_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDRegisterResponse;
*zxwsf_dise_Body_NUM_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDDelete;
*zxwsf_dise_Body_NUM_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDDeleteResponse;
*zxwsf_dise_Body_NUM_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDQuery;
*zxwsf_dise_Body_NUM_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDQueryResponse;
*zxwsf_dise_Body_NUM_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDReplace;
*zxwsf_dise_Body_NUM_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_SvcMDReplaceResponse;
*zxwsf_dise_Body_NUM_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_NUM_Fault;
*zxwsf_dise_Body_POP_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationAdd;
*zxwsf_dise_Body_POP_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_POP_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationDelete;
*zxwsf_dise_Body_POP_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_POP_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationQuery;
*zxwsf_dise_Body_POP_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_POP_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDRegister;
*zxwsf_dise_Body_POP_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDRegisterResponse;
*zxwsf_dise_Body_POP_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDDelete;
*zxwsf_dise_Body_POP_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDDeleteResponse;
*zxwsf_dise_Body_POP_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDQuery;
*zxwsf_dise_Body_POP_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDQueryResponse;
*zxwsf_dise_Body_POP_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDReplace;
*zxwsf_dise_Body_POP_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_POP_SvcMDReplaceResponse;
*zxwsf_dise_Body_POP_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_POP_Fault;
*zxwsf_dise_Body_PUSH_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationAdd;
*zxwsf_dise_Body_PUSH_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_PUSH_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationDelete;
*zxwsf_dise_Body_PUSH_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_PUSH_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationQuery;
*zxwsf_dise_Body_PUSH_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_PUSH_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDRegister;
*zxwsf_dise_Body_PUSH_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDRegisterResponse;
*zxwsf_dise_Body_PUSH_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDDelete;
*zxwsf_dise_Body_PUSH_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDDeleteResponse;
*zxwsf_dise_Body_PUSH_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDQuery;
*zxwsf_dise_Body_PUSH_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDQueryResponse;
*zxwsf_dise_Body_PUSH_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDReplace;
*zxwsf_dise_Body_PUSH_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_SvcMDReplaceResponse;
*zxwsf_dise_Body_PUSH_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_PUSH_Fault;
*zxwsf_dise_Body_PUT_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationAdd;
*zxwsf_dise_Body_PUT_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_PUT_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationDelete;
*zxwsf_dise_Body_PUT_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_PUT_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationQuery;
*zxwsf_dise_Body_PUT_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_PUT_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDRegister;
*zxwsf_dise_Body_PUT_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDRegisterResponse;
*zxwsf_dise_Body_PUT_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDDelete;
*zxwsf_dise_Body_PUT_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDDeleteResponse;
*zxwsf_dise_Body_PUT_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDQuery;
*zxwsf_dise_Body_PUT_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDQueryResponse;
*zxwsf_dise_Body_PUT_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDReplace;
*zxwsf_dise_Body_PUT_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_SvcMDReplaceResponse;
*zxwsf_dise_Body_PUT_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_PUT_Fault;
*zxwsf_dise_Body_ADD_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationAdd;
*zxwsf_dise_Body_ADD_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_ADD_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationDelete;
*zxwsf_dise_Body_ADD_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_ADD_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationQuery;
*zxwsf_dise_Body_ADD_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_ADD_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDRegister;
*zxwsf_dise_Body_ADD_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDRegisterResponse;
*zxwsf_dise_Body_ADD_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDDelete;
*zxwsf_dise_Body_ADD_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDDeleteResponse;
*zxwsf_dise_Body_ADD_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDQuery;
*zxwsf_dise_Body_ADD_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDQueryResponse;
*zxwsf_dise_Body_ADD_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDReplace;
*zxwsf_dise_Body_ADD_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_SvcMDReplaceResponse;
*zxwsf_dise_Body_ADD_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_ADD_Fault;
*zxwsf_dise_Body_DEL_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationAdd;
*zxwsf_dise_Body_DEL_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_DEL_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationDelete;
*zxwsf_dise_Body_DEL_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_DEL_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationQuery;
*zxwsf_dise_Body_DEL_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_DEL_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDRegister;
*zxwsf_dise_Body_DEL_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDRegisterResponse;
*zxwsf_dise_Body_DEL_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDDelete;
*zxwsf_dise_Body_DEL_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDDeleteResponse;
*zxwsf_dise_Body_DEL_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDQuery;
*zxwsf_dise_Body_DEL_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDQueryResponse;
*zxwsf_dise_Body_DEL_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDReplace;
*zxwsf_dise_Body_DEL_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_SvcMDReplaceResponse;
*zxwsf_dise_Body_DEL_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_DEL_Fault;
*zxwsf_dise_Body_REV_SvcMDAssociationAdd = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationAdd;
*zxwsf_dise_Body_REV_SvcMDAssociationAddResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationAddResponse;
*zxwsf_dise_Body_REV_SvcMDAssociationDelete = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationDelete;
*zxwsf_dise_Body_REV_SvcMDAssociationDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationDeleteResponse;
*zxwsf_dise_Body_REV_SvcMDAssociationQuery = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationQuery;
*zxwsf_dise_Body_REV_SvcMDAssociationQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDAssociationQueryResponse;
*zxwsf_dise_Body_REV_SvcMDRegister = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDRegister;
*zxwsf_dise_Body_REV_SvcMDRegisterResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDRegisterResponse;
*zxwsf_dise_Body_REV_SvcMDDelete = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDDelete;
*zxwsf_dise_Body_REV_SvcMDDeleteResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDDeleteResponse;
*zxwsf_dise_Body_REV_SvcMDQuery = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDQuery;
*zxwsf_dise_Body_REV_SvcMDQueryResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDQueryResponse;
*zxwsf_dise_Body_REV_SvcMDReplace = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDReplace;
*zxwsf_dise_Body_REV_SvcMDReplaceResponse = *Net::WSF::Rawc::zxwsf_dise_Body_REV_SvcMDReplaceResponse;
*zxwsf_dise_Body_REV_Fault = *Net::WSF::Rawc::zxwsf_dise_Body_REV_Fault;
*zxwsf_DEC_dise_Envelope = *Net::WSF::Rawc::zxwsf_DEC_dise_Envelope;
*zxwsf_NEW_dise_Envelope = *Net::WSF::Rawc::zxwsf_NEW_dise_Envelope;
*zxwsf_DEEP_CLONE_dise_Envelope = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_dise_Envelope;
*zxwsf_DUP_STRS_dise_Envelope = *Net::WSF::Rawc::zxwsf_DUP_STRS_dise_Envelope;
*zxwsf_FREE_dise_Envelope = *Net::WSF::Rawc::zxwsf_FREE_dise_Envelope;
*zxwsf_WALK_SO_dise_Envelope = *Net::WSF::Rawc::zxwsf_WALK_SO_dise_Envelope;
*zxwsf_WALK_WO_dise_Envelope = *Net::WSF::Rawc::zxwsf_WALK_WO_dise_Envelope;
*zxwsf_LEN_dise_Envelope = *Net::WSF::Rawc::zxwsf_LEN_dise_Envelope;
*zxwsf_ENC_SO_dise_Envelope = *Net::WSF::Rawc::zxwsf_ENC_SO_dise_Envelope;
*zxwsf_ENC_WO_dise_Envelope = *Net::WSF::Rawc::zxwsf_ENC_WO_dise_Envelope;
*zxwsf_EASY_ENC_SO_dise_Envelope = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_dise_Envelope;
*zxwsf_EASY_ENC_WO_dise_Envelope = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_dise_Envelope;
*zxwsf_dise_Envelope_GET_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_GET_Header;
*zxwsf_dise_Envelope_GET_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_GET_Body;
*zxwsf_dise_Envelope_NUM_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_NUM_Header;
*zxwsf_dise_Envelope_NUM_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_NUM_Body;
*zxwsf_dise_Envelope_POP_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_POP_Header;
*zxwsf_dise_Envelope_POP_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_POP_Body;
*zxwsf_dise_Envelope_PUSH_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_PUSH_Header;
*zxwsf_dise_Envelope_PUSH_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_PUSH_Body;
*zxwsf_dise_Envelope_PUT_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_PUT_Header;
*zxwsf_dise_Envelope_PUT_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_PUT_Body;
*zxwsf_dise_Envelope_ADD_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_ADD_Header;
*zxwsf_dise_Envelope_ADD_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_ADD_Body;
*zxwsf_dise_Envelope_DEL_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_DEL_Header;
*zxwsf_dise_Envelope_DEL_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_DEL_Body;
*zxwsf_dise_Envelope_REV_Header = *Net::WSF::Rawc::zxwsf_dise_Envelope_REV_Header;
*zxwsf_dise_Envelope_REV_Body = *Net::WSF::Rawc::zxwsf_dise_Envelope_REV_Body;
*zxwsf_DEC_dise_Fault = *Net::WSF::Rawc::zxwsf_DEC_dise_Fault;
*zxwsf_NEW_dise_Fault = *Net::WSF::Rawc::zxwsf_NEW_dise_Fault;
*zxwsf_DEEP_CLONE_dise_Fault = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_dise_Fault;
*zxwsf_DUP_STRS_dise_Fault = *Net::WSF::Rawc::zxwsf_DUP_STRS_dise_Fault;
*zxwsf_FREE_dise_Fault = *Net::WSF::Rawc::zxwsf_FREE_dise_Fault;
*zxwsf_WALK_SO_dise_Fault = *Net::WSF::Rawc::zxwsf_WALK_SO_dise_Fault;
*zxwsf_WALK_WO_dise_Fault = *Net::WSF::Rawc::zxwsf_WALK_WO_dise_Fault;
*zxwsf_LEN_dise_Fault = *Net::WSF::Rawc::zxwsf_LEN_dise_Fault;
*zxwsf_ENC_SO_dise_Fault = *Net::WSF::Rawc::zxwsf_ENC_SO_dise_Fault;
*zxwsf_ENC_WO_dise_Fault = *Net::WSF::Rawc::zxwsf_ENC_WO_dise_Fault;
*zxwsf_EASY_ENC_SO_dise_Fault = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_dise_Fault;
*zxwsf_EASY_ENC_WO_dise_Fault = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_dise_Fault;
*zxwsf_dise_Fault_GET_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_GET_faultcode;
*zxwsf_dise_Fault_GET_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_GET_faultstring;
*zxwsf_dise_Fault_GET_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_GET_faultactor;
*zxwsf_dise_Fault_GET_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_GET_detail;
*zxwsf_dise_Fault_NUM_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_NUM_faultcode;
*zxwsf_dise_Fault_NUM_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_NUM_faultstring;
*zxwsf_dise_Fault_NUM_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_NUM_faultactor;
*zxwsf_dise_Fault_NUM_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_NUM_detail;
*zxwsf_dise_Fault_POP_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_POP_faultcode;
*zxwsf_dise_Fault_POP_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_POP_faultstring;
*zxwsf_dise_Fault_POP_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_POP_faultactor;
*zxwsf_dise_Fault_POP_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_POP_detail;
*zxwsf_dise_Fault_PUSH_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_PUSH_faultcode;
*zxwsf_dise_Fault_PUSH_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_PUSH_faultstring;
*zxwsf_dise_Fault_PUSH_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_PUSH_faultactor;
*zxwsf_dise_Fault_PUSH_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_PUSH_detail;
*zxwsf_dise_Fault_PUT_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_PUT_faultcode;
*zxwsf_dise_Fault_PUT_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_PUT_faultstring;
*zxwsf_dise_Fault_PUT_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_PUT_faultactor;
*zxwsf_dise_Fault_PUT_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_PUT_detail;
*zxwsf_dise_Fault_ADD_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_ADD_faultcode;
*zxwsf_dise_Fault_ADD_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_ADD_faultstring;
*zxwsf_dise_Fault_ADD_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_ADD_faultactor;
*zxwsf_dise_Fault_ADD_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_ADD_detail;
*zxwsf_dise_Fault_DEL_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_DEL_faultcode;
*zxwsf_dise_Fault_DEL_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_DEL_faultstring;
*zxwsf_dise_Fault_DEL_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_DEL_faultactor;
*zxwsf_dise_Fault_DEL_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_DEL_detail;
*zxwsf_dise_Fault_REV_faultcode = *Net::WSF::Rawc::zxwsf_dise_Fault_REV_faultcode;
*zxwsf_dise_Fault_REV_faultstring = *Net::WSF::Rawc::zxwsf_dise_Fault_REV_faultstring;
*zxwsf_dise_Fault_REV_faultactor = *Net::WSF::Rawc::zxwsf_dise_Fault_REV_faultactor;
*zxwsf_dise_Fault_REV_detail = *Net::WSF::Rawc::zxwsf_dise_Fault_REV_detail;
*zxwsf_DEC_dise_Header = *Net::WSF::Rawc::zxwsf_DEC_dise_Header;
*zxwsf_NEW_dise_Header = *Net::WSF::Rawc::zxwsf_NEW_dise_Header;
*zxwsf_DEEP_CLONE_dise_Header = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_dise_Header;
*zxwsf_DUP_STRS_dise_Header = *Net::WSF::Rawc::zxwsf_DUP_STRS_dise_Header;
*zxwsf_FREE_dise_Header = *Net::WSF::Rawc::zxwsf_FREE_dise_Header;
*zxwsf_WALK_SO_dise_Header = *Net::WSF::Rawc::zxwsf_WALK_SO_dise_Header;
*zxwsf_WALK_WO_dise_Header = *Net::WSF::Rawc::zxwsf_WALK_WO_dise_Header;
*zxwsf_LEN_dise_Header = *Net::WSF::Rawc::zxwsf_LEN_dise_Header;
*zxwsf_ENC_SO_dise_Header = *Net::WSF::Rawc::zxwsf_ENC_SO_dise_Header;
*zxwsf_ENC_WO_dise_Header = *Net::WSF::Rawc::zxwsf_ENC_WO_dise_Header;
*zxwsf_EASY_ENC_SO_dise_Header = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_dise_Header;
*zxwsf_EASY_ENC_WO_dise_Header = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_dise_Header;
*zxwsf_dise_Header_GET_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_GET_MessageID;
*zxwsf_dise_Header_GET_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_GET_RelatesTo;
*zxwsf_dise_Header_GET_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_GET_ReplyTo;
*zxwsf_dise_Header_GET_From = *Net::WSF::Rawc::zxwsf_dise_Header_GET_From;
*zxwsf_dise_Header_GET_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_GET_FaultTo;
*zxwsf_dise_Header_GET_To = *Net::WSF::Rawc::zxwsf_dise_Header_GET_To;
*zxwsf_dise_Header_GET_Action = *Net::WSF::Rawc::zxwsf_dise_Header_GET_Action;
*zxwsf_dise_Header_GET_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_GET_Framework;
*zxwsf_dise_Header_GET_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_GET_b_Framework;
*zxwsf_dise_Header_GET_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_GET_Sender;
*zxwsf_dise_Header_GET_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_GET_CredentialsContext;
*zxwsf_dise_Header_GET_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_GET_EndpointUpdate;
*zxwsf_dise_Header_GET_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_GET_Timeout;
*zxwsf_dise_Header_GET_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_GET_ProcessingContext;
*zxwsf_dise_Header_GET_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_GET_ApplicationEPR;
*zxwsf_dise_Header_GET_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_GET_RedirectRequest;
*zxwsf_dise_Header_NUM_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_MessageID;
*zxwsf_dise_Header_NUM_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_RelatesTo;
*zxwsf_dise_Header_NUM_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_ReplyTo;
*zxwsf_dise_Header_NUM_From = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_From;
*zxwsf_dise_Header_NUM_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_FaultTo;
*zxwsf_dise_Header_NUM_To = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_To;
*zxwsf_dise_Header_NUM_Action = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_Action;
*zxwsf_dise_Header_NUM_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_Framework;
*zxwsf_dise_Header_NUM_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_b_Framework;
*zxwsf_dise_Header_NUM_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_Sender;
*zxwsf_dise_Header_NUM_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_CredentialsContext;
*zxwsf_dise_Header_NUM_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_EndpointUpdate;
*zxwsf_dise_Header_NUM_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_Timeout;
*zxwsf_dise_Header_NUM_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_ProcessingContext;
*zxwsf_dise_Header_NUM_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_ApplicationEPR;
*zxwsf_dise_Header_NUM_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_NUM_RedirectRequest;
*zxwsf_dise_Header_POP_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_POP_MessageID;
*zxwsf_dise_Header_POP_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_POP_RelatesTo;
*zxwsf_dise_Header_POP_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_POP_ReplyTo;
*zxwsf_dise_Header_POP_From = *Net::WSF::Rawc::zxwsf_dise_Header_POP_From;
*zxwsf_dise_Header_POP_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_POP_FaultTo;
*zxwsf_dise_Header_POP_To = *Net::WSF::Rawc::zxwsf_dise_Header_POP_To;
*zxwsf_dise_Header_POP_Action = *Net::WSF::Rawc::zxwsf_dise_Header_POP_Action;
*zxwsf_dise_Header_POP_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_POP_Framework;
*zxwsf_dise_Header_POP_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_POP_b_Framework;
*zxwsf_dise_Header_POP_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_POP_Sender;
*zxwsf_dise_Header_POP_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_POP_CredentialsContext;
*zxwsf_dise_Header_POP_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_POP_EndpointUpdate;
*zxwsf_dise_Header_POP_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_POP_Timeout;
*zxwsf_dise_Header_POP_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_POP_ProcessingContext;
*zxwsf_dise_Header_POP_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_POP_ApplicationEPR;
*zxwsf_dise_Header_POP_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_POP_RedirectRequest;
*zxwsf_dise_Header_PUSH_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_MessageID;
*zxwsf_dise_Header_PUSH_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_RelatesTo;
*zxwsf_dise_Header_PUSH_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_ReplyTo;
*zxwsf_dise_Header_PUSH_From = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_From;
*zxwsf_dise_Header_PUSH_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_FaultTo;
*zxwsf_dise_Header_PUSH_To = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_To;
*zxwsf_dise_Header_PUSH_Action = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_Action;
*zxwsf_dise_Header_PUSH_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_Framework;
*zxwsf_dise_Header_PUSH_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_b_Framework;
*zxwsf_dise_Header_PUSH_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_Sender;
*zxwsf_dise_Header_PUSH_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_CredentialsContext;
*zxwsf_dise_Header_PUSH_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_EndpointUpdate;
*zxwsf_dise_Header_PUSH_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_Timeout;
*zxwsf_dise_Header_PUSH_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_ProcessingContext;
*zxwsf_dise_Header_PUSH_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_ApplicationEPR;
*zxwsf_dise_Header_PUSH_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_PUSH_RedirectRequest;
*zxwsf_dise_Header_PUT_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_MessageID;
*zxwsf_dise_Header_PUT_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_RelatesTo;
*zxwsf_dise_Header_PUT_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_ReplyTo;
*zxwsf_dise_Header_PUT_From = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_From;
*zxwsf_dise_Header_PUT_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_FaultTo;
*zxwsf_dise_Header_PUT_To = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_To;
*zxwsf_dise_Header_PUT_Action = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_Action;
*zxwsf_dise_Header_PUT_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_Framework;
*zxwsf_dise_Header_PUT_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_b_Framework;
*zxwsf_dise_Header_PUT_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_Sender;
*zxwsf_dise_Header_PUT_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_CredentialsContext;
*zxwsf_dise_Header_PUT_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_EndpointUpdate;
*zxwsf_dise_Header_PUT_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_Timeout;
*zxwsf_dise_Header_PUT_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_ProcessingContext;
*zxwsf_dise_Header_PUT_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_ApplicationEPR;
*zxwsf_dise_Header_PUT_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_PUT_RedirectRequest;
*zxwsf_dise_Header_ADD_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_MessageID;
*zxwsf_dise_Header_ADD_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_RelatesTo;
*zxwsf_dise_Header_ADD_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_ReplyTo;
*zxwsf_dise_Header_ADD_From = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_From;
*zxwsf_dise_Header_ADD_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_FaultTo;
*zxwsf_dise_Header_ADD_To = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_To;
*zxwsf_dise_Header_ADD_Action = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_Action;
*zxwsf_dise_Header_ADD_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_Framework;
*zxwsf_dise_Header_ADD_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_b_Framework;
*zxwsf_dise_Header_ADD_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_Sender;
*zxwsf_dise_Header_ADD_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_CredentialsContext;
*zxwsf_dise_Header_ADD_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_EndpointUpdate;
*zxwsf_dise_Header_ADD_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_Timeout;
*zxwsf_dise_Header_ADD_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_ProcessingContext;
*zxwsf_dise_Header_ADD_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_ApplicationEPR;
*zxwsf_dise_Header_ADD_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_ADD_RedirectRequest;
*zxwsf_dise_Header_DEL_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_MessageID;
*zxwsf_dise_Header_DEL_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_RelatesTo;
*zxwsf_dise_Header_DEL_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_ReplyTo;
*zxwsf_dise_Header_DEL_From = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_From;
*zxwsf_dise_Header_DEL_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_FaultTo;
*zxwsf_dise_Header_DEL_To = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_To;
*zxwsf_dise_Header_DEL_Action = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_Action;
*zxwsf_dise_Header_DEL_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_Framework;
*zxwsf_dise_Header_DEL_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_b_Framework;
*zxwsf_dise_Header_DEL_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_Sender;
*zxwsf_dise_Header_DEL_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_CredentialsContext;
*zxwsf_dise_Header_DEL_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_EndpointUpdate;
*zxwsf_dise_Header_DEL_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_Timeout;
*zxwsf_dise_Header_DEL_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_ProcessingContext;
*zxwsf_dise_Header_DEL_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_ApplicationEPR;
*zxwsf_dise_Header_DEL_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_DEL_RedirectRequest;
*zxwsf_dise_Header_REV_MessageID = *Net::WSF::Rawc::zxwsf_dise_Header_REV_MessageID;
*zxwsf_dise_Header_REV_RelatesTo = *Net::WSF::Rawc::zxwsf_dise_Header_REV_RelatesTo;
*zxwsf_dise_Header_REV_ReplyTo = *Net::WSF::Rawc::zxwsf_dise_Header_REV_ReplyTo;
*zxwsf_dise_Header_REV_From = *Net::WSF::Rawc::zxwsf_dise_Header_REV_From;
*zxwsf_dise_Header_REV_FaultTo = *Net::WSF::Rawc::zxwsf_dise_Header_REV_FaultTo;
*zxwsf_dise_Header_REV_To = *Net::WSF::Rawc::zxwsf_dise_Header_REV_To;
*zxwsf_dise_Header_REV_Action = *Net::WSF::Rawc::zxwsf_dise_Header_REV_Action;
*zxwsf_dise_Header_REV_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_REV_Framework;
*zxwsf_dise_Header_REV_b_Framework = *Net::WSF::Rawc::zxwsf_dise_Header_REV_b_Framework;
*zxwsf_dise_Header_REV_Sender = *Net::WSF::Rawc::zxwsf_dise_Header_REV_Sender;
*zxwsf_dise_Header_REV_CredentialsContext = *Net::WSF::Rawc::zxwsf_dise_Header_REV_CredentialsContext;
*zxwsf_dise_Header_REV_EndpointUpdate = *Net::WSF::Rawc::zxwsf_dise_Header_REV_EndpointUpdate;
*zxwsf_dise_Header_REV_Timeout = *Net::WSF::Rawc::zxwsf_dise_Header_REV_Timeout;
*zxwsf_dise_Header_REV_ProcessingContext = *Net::WSF::Rawc::zxwsf_dise_Header_REV_ProcessingContext;
*zxwsf_dise_Header_REV_ApplicationEPR = *Net::WSF::Rawc::zxwsf_dise_Header_REV_ApplicationEPR;
*zxwsf_dise_Header_REV_RedirectRequest = *Net::WSF::Rawc::zxwsf_dise_Header_REV_RedirectRequest;
*zxwsf_DEC_dise_detail = *Net::WSF::Rawc::zxwsf_DEC_dise_detail;
*zxwsf_NEW_dise_detail = *Net::WSF::Rawc::zxwsf_NEW_dise_detail;
*zxwsf_DEEP_CLONE_dise_detail = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_dise_detail;
*zxwsf_DUP_STRS_dise_detail = *Net::WSF::Rawc::zxwsf_DUP_STRS_dise_detail;
*zxwsf_FREE_dise_detail = *Net::WSF::Rawc::zxwsf_FREE_dise_detail;
*zxwsf_WALK_SO_dise_detail = *Net::WSF::Rawc::zxwsf_WALK_SO_dise_detail;
*zxwsf_WALK_WO_dise_detail = *Net::WSF::Rawc::zxwsf_WALK_WO_dise_detail;
*zxwsf_LEN_dise_detail = *Net::WSF::Rawc::zxwsf_LEN_dise_detail;
*zxwsf_ENC_SO_dise_detail = *Net::WSF::Rawc::zxwsf_ENC_SO_dise_detail;
*zxwsf_ENC_WO_dise_detail = *Net::WSF::Rawc::zxwsf_ENC_WO_dise_detail;
*zxwsf_EASY_ENC_SO_dise_detail = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_dise_detail;
*zxwsf_EASY_ENC_WO_dise_detail = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_dise_detail;
*zxwsf_DEC_e_Body = *Net::WSF::Rawc::zxwsf_DEC_e_Body;
*zxwsf_NEW_e_Body = *Net::WSF::Rawc::zxwsf_NEW_e_Body;
*zxwsf_DEEP_CLONE_e_Body = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_e_Body;
*zxwsf_DUP_STRS_e_Body = *Net::WSF::Rawc::zxwsf_DUP_STRS_e_Body;
*zxwsf_FREE_e_Body = *Net::WSF::Rawc::zxwsf_FREE_e_Body;
*zxwsf_WALK_SO_e_Body = *Net::WSF::Rawc::zxwsf_WALK_SO_e_Body;
*zxwsf_WALK_WO_e_Body = *Net::WSF::Rawc::zxwsf_WALK_WO_e_Body;
*zxwsf_LEN_e_Body = *Net::WSF::Rawc::zxwsf_LEN_e_Body;
*zxwsf_ENC_SO_e_Body = *Net::WSF::Rawc::zxwsf_ENC_SO_e_Body;
*zxwsf_ENC_WO_e_Body = *Net::WSF::Rawc::zxwsf_ENC_WO_e_Body;
*zxwsf_EASY_ENC_SO_e_Body = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_e_Body;
*zxwsf_EASY_ENC_WO_e_Body = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_e_Body;
*zxwsf_e_Body_GET_Query = *Net::WSF::Rawc::zxwsf_e_Body_GET_Query;
*zxwsf_e_Body_GET_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_GET_QueryResponse;
*zxwsf_e_Body_GET_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_GET_di12_Query;
*zxwsf_e_Body_GET_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_GET_di12_QueryResponse;
*zxwsf_e_Body_GET_Modify = *Net::WSF::Rawc::zxwsf_e_Body_GET_Modify;
*zxwsf_e_Body_GET_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_GET_ModifyResponse;
*zxwsf_e_Body_GET_Fault = *Net::WSF::Rawc::zxwsf_e_Body_GET_Fault;
*zxwsf_e_Body_NUM_Query = *Net::WSF::Rawc::zxwsf_e_Body_NUM_Query;
*zxwsf_e_Body_NUM_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_NUM_QueryResponse;
*zxwsf_e_Body_NUM_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_NUM_di12_Query;
*zxwsf_e_Body_NUM_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_NUM_di12_QueryResponse;
*zxwsf_e_Body_NUM_Modify = *Net::WSF::Rawc::zxwsf_e_Body_NUM_Modify;
*zxwsf_e_Body_NUM_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_NUM_ModifyResponse;
*zxwsf_e_Body_NUM_Fault = *Net::WSF::Rawc::zxwsf_e_Body_NUM_Fault;
*zxwsf_e_Body_POP_Query = *Net::WSF::Rawc::zxwsf_e_Body_POP_Query;
*zxwsf_e_Body_POP_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_POP_QueryResponse;
*zxwsf_e_Body_POP_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_POP_di12_Query;
*zxwsf_e_Body_POP_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_POP_di12_QueryResponse;
*zxwsf_e_Body_POP_Modify = *Net::WSF::Rawc::zxwsf_e_Body_POP_Modify;
*zxwsf_e_Body_POP_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_POP_ModifyResponse;
*zxwsf_e_Body_POP_Fault = *Net::WSF::Rawc::zxwsf_e_Body_POP_Fault;
*zxwsf_e_Body_PUSH_Query = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_Query;
*zxwsf_e_Body_PUSH_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_QueryResponse;
*zxwsf_e_Body_PUSH_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_di12_Query;
*zxwsf_e_Body_PUSH_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_di12_QueryResponse;
*zxwsf_e_Body_PUSH_Modify = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_Modify;
*zxwsf_e_Body_PUSH_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_ModifyResponse;
*zxwsf_e_Body_PUSH_Fault = *Net::WSF::Rawc::zxwsf_e_Body_PUSH_Fault;
*zxwsf_e_Body_PUT_Query = *Net::WSF::Rawc::zxwsf_e_Body_PUT_Query;
*zxwsf_e_Body_PUT_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUT_QueryResponse;
*zxwsf_e_Body_PUT_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_PUT_di12_Query;
*zxwsf_e_Body_PUT_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUT_di12_QueryResponse;
*zxwsf_e_Body_PUT_Modify = *Net::WSF::Rawc::zxwsf_e_Body_PUT_Modify;
*zxwsf_e_Body_PUT_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_PUT_ModifyResponse;
*zxwsf_e_Body_PUT_Fault = *Net::WSF::Rawc::zxwsf_e_Body_PUT_Fault;
*zxwsf_e_Body_ADD_Query = *Net::WSF::Rawc::zxwsf_e_Body_ADD_Query;
*zxwsf_e_Body_ADD_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_ADD_QueryResponse;
*zxwsf_e_Body_ADD_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_ADD_di12_Query;
*zxwsf_e_Body_ADD_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_ADD_di12_QueryResponse;
*zxwsf_e_Body_ADD_Modify = *Net::WSF::Rawc::zxwsf_e_Body_ADD_Modify;
*zxwsf_e_Body_ADD_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_ADD_ModifyResponse;
*zxwsf_e_Body_ADD_Fault = *Net::WSF::Rawc::zxwsf_e_Body_ADD_Fault;
*zxwsf_e_Body_DEL_Query = *Net::WSF::Rawc::zxwsf_e_Body_DEL_Query;
*zxwsf_e_Body_DEL_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_DEL_QueryResponse;
*zxwsf_e_Body_DEL_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_DEL_di12_Query;
*zxwsf_e_Body_DEL_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_DEL_di12_QueryResponse;
*zxwsf_e_Body_DEL_Modify = *Net::WSF::Rawc::zxwsf_e_Body_DEL_Modify;
*zxwsf_e_Body_DEL_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_DEL_ModifyResponse;
*zxwsf_e_Body_DEL_Fault = *Net::WSF::Rawc::zxwsf_e_Body_DEL_Fault;
*zxwsf_e_Body_REV_Query = *Net::WSF::Rawc::zxwsf_e_Body_REV_Query;
*zxwsf_e_Body_REV_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_REV_QueryResponse;
*zxwsf_e_Body_REV_di12_Query = *Net::WSF::Rawc::zxwsf_e_Body_REV_di12_Query;
*zxwsf_e_Body_REV_di12_QueryResponse = *Net::WSF::Rawc::zxwsf_e_Body_REV_di12_QueryResponse;
*zxwsf_e_Body_REV_Modify = *Net::WSF::Rawc::zxwsf_e_Body_REV_Modify;
*zxwsf_e_Body_REV_ModifyResponse = *Net::WSF::Rawc::zxwsf_e_Body_REV_ModifyResponse;
*zxwsf_e_Body_REV_Fault = *Net::WSF::Rawc::zxwsf_e_Body_REV_Fault;
*zxwsf_DEC_e_Envelope = *Net::WSF::Rawc::zxwsf_DEC_e_Envelope;
*zxwsf_NEW_e_Envelope = *Net::WSF::Rawc::zxwsf_NEW_e_Envelope;
*zxwsf_DEEP_CLONE_e_Envelope = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_e_Envelope;
*zxwsf_DUP_STRS_e_Envelope = *Net::WSF::Rawc::zxwsf_DUP_STRS_e_Envelope;
*zxwsf_FREE_e_Envelope = *Net::WSF::Rawc::zxwsf_FREE_e_Envelope;
*zxwsf_WALK_SO_e_Envelope = *Net::WSF::Rawc::zxwsf_WALK_SO_e_Envelope;
*zxwsf_WALK_WO_e_Envelope = *Net::WSF::Rawc::zxwsf_WALK_WO_e_Envelope;
*zxwsf_LEN_e_Envelope = *Net::WSF::Rawc::zxwsf_LEN_e_Envelope;
*zxwsf_ENC_SO_e_Envelope = *Net::WSF::Rawc::zxwsf_ENC_SO_e_Envelope;
*zxwsf_ENC_WO_e_Envelope = *Net::WSF::Rawc::zxwsf_ENC_WO_e_Envelope;
*zxwsf_EASY_ENC_SO_e_Envelope = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_e_Envelope;
*zxwsf_EASY_ENC_WO_e_Envelope = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_e_Envelope;
*zxwsf_e_Envelope_GET_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_GET_Header;
*zxwsf_e_Envelope_GET_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_GET_Body;
*zxwsf_e_Envelope_NUM_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_NUM_Header;
*zxwsf_e_Envelope_NUM_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_NUM_Body;
*zxwsf_e_Envelope_POP_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_POP_Header;
*zxwsf_e_Envelope_POP_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_POP_Body;
*zxwsf_e_Envelope_PUSH_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_PUSH_Header;
*zxwsf_e_Envelope_PUSH_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_PUSH_Body;
*zxwsf_e_Envelope_PUT_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_PUT_Header;
*zxwsf_e_Envelope_PUT_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_PUT_Body;
*zxwsf_e_Envelope_ADD_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_ADD_Header;
*zxwsf_e_Envelope_ADD_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_ADD_Body;
*zxwsf_e_Envelope_DEL_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_DEL_Header;
*zxwsf_e_Envelope_DEL_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_DEL_Body;
*zxwsf_e_Envelope_REV_Header = *Net::WSF::Rawc::zxwsf_e_Envelope_REV_Header;
*zxwsf_e_Envelope_REV_Body = *Net::WSF::Rawc::zxwsf_e_Envelope_REV_Body;
*zxwsf_DEC_e_Fault = *Net::WSF::Rawc::zxwsf_DEC_e_Fault;
*zxwsf_NEW_e_Fault = *Net::WSF::Rawc::zxwsf_NEW_e_Fault;
*zxwsf_DEEP_CLONE_e_Fault = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_e_Fault;
*zxwsf_DUP_STRS_e_Fault = *Net::WSF::Rawc::zxwsf_DUP_STRS_e_Fault;
*zxwsf_FREE_e_Fault = *Net::WSF::Rawc::zxwsf_FREE_e_Fault;
*zxwsf_WALK_SO_e_Fault = *Net::WSF::Rawc::zxwsf_WALK_SO_e_Fault;
*zxwsf_WALK_WO_e_Fault = *Net::WSF::Rawc::zxwsf_WALK_WO_e_Fault;
*zxwsf_LEN_e_Fault = *Net::WSF::Rawc::zxwsf_LEN_e_Fault;
*zxwsf_ENC_SO_e_Fault = *Net::WSF::Rawc::zxwsf_ENC_SO_e_Fault;
*zxwsf_ENC_WO_e_Fault = *Net::WSF::Rawc::zxwsf_ENC_WO_e_Fault;
*zxwsf_EASY_ENC_SO_e_Fault = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_e_Fault;
*zxwsf_EASY_ENC_WO_e_Fault = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_e_Fault;
*zxwsf_e_Fault_GET_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_GET_faultcode;
*zxwsf_e_Fault_GET_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_GET_faultstring;
*zxwsf_e_Fault_GET_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_GET_faultactor;
*zxwsf_e_Fault_GET_detail = *Net::WSF::Rawc::zxwsf_e_Fault_GET_detail;
*zxwsf_e_Fault_NUM_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_NUM_faultcode;
*zxwsf_e_Fault_NUM_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_NUM_faultstring;
*zxwsf_e_Fault_NUM_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_NUM_faultactor;
*zxwsf_e_Fault_NUM_detail = *Net::WSF::Rawc::zxwsf_e_Fault_NUM_detail;
*zxwsf_e_Fault_POP_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_POP_faultcode;
*zxwsf_e_Fault_POP_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_POP_faultstring;
*zxwsf_e_Fault_POP_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_POP_faultactor;
*zxwsf_e_Fault_POP_detail = *Net::WSF::Rawc::zxwsf_e_Fault_POP_detail;
*zxwsf_e_Fault_PUSH_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_PUSH_faultcode;
*zxwsf_e_Fault_PUSH_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_PUSH_faultstring;
*zxwsf_e_Fault_PUSH_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_PUSH_faultactor;
*zxwsf_e_Fault_PUSH_detail = *Net::WSF::Rawc::zxwsf_e_Fault_PUSH_detail;
*zxwsf_e_Fault_PUT_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_PUT_faultcode;
*zxwsf_e_Fault_PUT_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_PUT_faultstring;
*zxwsf_e_Fault_PUT_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_PUT_faultactor;
*zxwsf_e_Fault_PUT_detail = *Net::WSF::Rawc::zxwsf_e_Fault_PUT_detail;
*zxwsf_e_Fault_ADD_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_ADD_faultcode;
*zxwsf_e_Fault_ADD_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_ADD_faultstring;
*zxwsf_e_Fault_ADD_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_ADD_faultactor;
*zxwsf_e_Fault_ADD_detail = *Net::WSF::Rawc::zxwsf_e_Fault_ADD_detail;
*zxwsf_e_Fault_DEL_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_DEL_faultcode;
*zxwsf_e_Fault_DEL_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_DEL_faultstring;
*zxwsf_e_Fault_DEL_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_DEL_faultactor;
*zxwsf_e_Fault_DEL_detail = *Net::WSF::Rawc::zxwsf_e_Fault_DEL_detail;
*zxwsf_e_Fault_REV_faultcode = *Net::WSF::Rawc::zxwsf_e_Fault_REV_faultcode;
*zxwsf_e_Fault_REV_faultstring = *Net::WSF::Rawc::zxwsf_e_Fault_REV_faultstring;
*zxwsf_e_Fault_REV_faultactor = *Net::WSF::Rawc::zxwsf_e_Fault_REV_faultactor;
*zxwsf_e_Fault_REV_detail = *Net::WSF::Rawc::zxwsf_e_Fault_REV_detail;
*zxwsf_DEC_e_Header = *Net::WSF::Rawc::zxwsf_DEC_e_Header;
*zxwsf_NEW_e_Header = *Net::WSF::Rawc::zxwsf_NEW_e_Header;
*zxwsf_DEEP_CLONE_e_Header = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_e_Header;
*zxwsf_DUP_STRS_e_Header = *Net::WSF::Rawc::zxwsf_DUP_STRS_e_Header;
*zxwsf_FREE_e_Header = *Net::WSF::Rawc::zxwsf_FREE_e_Header;
*zxwsf_WALK_SO_e_Header = *Net::WSF::Rawc::zxwsf_WALK_SO_e_Header;
*zxwsf_WALK_WO_e_Header = *Net::WSF::Rawc::zxwsf_WALK_WO_e_Header;
*zxwsf_LEN_e_Header = *Net::WSF::Rawc::zxwsf_LEN_e_Header;
*zxwsf_ENC_SO_e_Header = *Net::WSF::Rawc::zxwsf_ENC_SO_e_Header;
*zxwsf_ENC_WO_e_Header = *Net::WSF::Rawc::zxwsf_ENC_WO_e_Header;
*zxwsf_EASY_ENC_SO_e_Header = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_e_Header;
*zxwsf_EASY_ENC_WO_e_Header = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_e_Header;
*zxwsf_e_Header_GET_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_GET_MessageID;
*zxwsf_e_Header_GET_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_GET_RelatesTo;
*zxwsf_e_Header_GET_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_GET_ReplyTo;
*zxwsf_e_Header_GET_From = *Net::WSF::Rawc::zxwsf_e_Header_GET_From;
*zxwsf_e_Header_GET_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_GET_FaultTo;
*zxwsf_e_Header_GET_To = *Net::WSF::Rawc::zxwsf_e_Header_GET_To;
*zxwsf_e_Header_GET_Action = *Net::WSF::Rawc::zxwsf_e_Header_GET_Action;
*zxwsf_e_Header_GET_Framework = *Net::WSF::Rawc::zxwsf_e_Header_GET_Framework;
*zxwsf_e_Header_GET_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_GET_b_Framework;
*zxwsf_e_Header_GET_Sender = *Net::WSF::Rawc::zxwsf_e_Header_GET_Sender;
*zxwsf_e_Header_GET_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_GET_TargetIdentity;
*zxwsf_e_Header_GET_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_GET_CredentialsContext;
*zxwsf_e_Header_GET_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_GET_EndpointUpdate;
*zxwsf_e_Header_GET_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_GET_Timeout;
*zxwsf_e_Header_GET_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_GET_ProcessingContext;
*zxwsf_e_Header_GET_Consent = *Net::WSF::Rawc::zxwsf_e_Header_GET_Consent;
*zxwsf_e_Header_GET_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_GET_UsageDirective;
*zxwsf_e_Header_GET_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_GET_ApplicationEPR;
*zxwsf_e_Header_GET_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_GET_UserInteraction;
*zxwsf_e_Header_GET_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_GET_RedirectRequest;
*zxwsf_e_Header_GET_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_GET_Correlation;
*zxwsf_e_Header_GET_Provider = *Net::WSF::Rawc::zxwsf_e_Header_GET_Provider;
*zxwsf_e_Header_GET_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_GET_b12_ProcessingContext;
*zxwsf_e_Header_GET_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_GET_b12_Consent;
*zxwsf_e_Header_GET_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_GET_b12_UsageDirective;
*zxwsf_e_Header_NUM_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_NUM_MessageID;
*zxwsf_e_Header_NUM_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_NUM_RelatesTo;
*zxwsf_e_Header_NUM_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_NUM_ReplyTo;
*zxwsf_e_Header_NUM_From = *Net::WSF::Rawc::zxwsf_e_Header_NUM_From;
*zxwsf_e_Header_NUM_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_NUM_FaultTo;
*zxwsf_e_Header_NUM_To = *Net::WSF::Rawc::zxwsf_e_Header_NUM_To;
*zxwsf_e_Header_NUM_Action = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Action;
*zxwsf_e_Header_NUM_Framework = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Framework;
*zxwsf_e_Header_NUM_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_NUM_b_Framework;
*zxwsf_e_Header_NUM_Sender = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Sender;
*zxwsf_e_Header_NUM_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_NUM_TargetIdentity;
*zxwsf_e_Header_NUM_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_NUM_CredentialsContext;
*zxwsf_e_Header_NUM_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_NUM_EndpointUpdate;
*zxwsf_e_Header_NUM_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Timeout;
*zxwsf_e_Header_NUM_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_NUM_ProcessingContext;
*zxwsf_e_Header_NUM_Consent = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Consent;
*zxwsf_e_Header_NUM_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_NUM_UsageDirective;
*zxwsf_e_Header_NUM_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_NUM_ApplicationEPR;
*zxwsf_e_Header_NUM_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_NUM_UserInteraction;
*zxwsf_e_Header_NUM_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_NUM_RedirectRequest;
*zxwsf_e_Header_NUM_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Correlation;
*zxwsf_e_Header_NUM_Provider = *Net::WSF::Rawc::zxwsf_e_Header_NUM_Provider;
*zxwsf_e_Header_NUM_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_NUM_b12_ProcessingContext;
*zxwsf_e_Header_NUM_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_NUM_b12_Consent;
*zxwsf_e_Header_NUM_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_NUM_b12_UsageDirective;
*zxwsf_e_Header_POP_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_POP_MessageID;
*zxwsf_e_Header_POP_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_POP_RelatesTo;
*zxwsf_e_Header_POP_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_POP_ReplyTo;
*zxwsf_e_Header_POP_From = *Net::WSF::Rawc::zxwsf_e_Header_POP_From;
*zxwsf_e_Header_POP_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_POP_FaultTo;
*zxwsf_e_Header_POP_To = *Net::WSF::Rawc::zxwsf_e_Header_POP_To;
*zxwsf_e_Header_POP_Action = *Net::WSF::Rawc::zxwsf_e_Header_POP_Action;
*zxwsf_e_Header_POP_Framework = *Net::WSF::Rawc::zxwsf_e_Header_POP_Framework;
*zxwsf_e_Header_POP_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_POP_b_Framework;
*zxwsf_e_Header_POP_Sender = *Net::WSF::Rawc::zxwsf_e_Header_POP_Sender;
*zxwsf_e_Header_POP_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_POP_TargetIdentity;
*zxwsf_e_Header_POP_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_POP_CredentialsContext;
*zxwsf_e_Header_POP_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_POP_EndpointUpdate;
*zxwsf_e_Header_POP_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_POP_Timeout;
*zxwsf_e_Header_POP_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_POP_ProcessingContext;
*zxwsf_e_Header_POP_Consent = *Net::WSF::Rawc::zxwsf_e_Header_POP_Consent;
*zxwsf_e_Header_POP_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_POP_UsageDirective;
*zxwsf_e_Header_POP_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_POP_ApplicationEPR;
*zxwsf_e_Header_POP_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_POP_UserInteraction;
*zxwsf_e_Header_POP_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_POP_RedirectRequest;
*zxwsf_e_Header_POP_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_POP_Correlation;
*zxwsf_e_Header_POP_Provider = *Net::WSF::Rawc::zxwsf_e_Header_POP_Provider;
*zxwsf_e_Header_POP_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_POP_b12_ProcessingContext;
*zxwsf_e_Header_POP_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_POP_b12_Consent;
*zxwsf_e_Header_POP_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_POP_b12_UsageDirective;
*zxwsf_e_Header_PUSH_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_MessageID;
*zxwsf_e_Header_PUSH_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_RelatesTo;
*zxwsf_e_Header_PUSH_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_ReplyTo;
*zxwsf_e_Header_PUSH_From = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_From;
*zxwsf_e_Header_PUSH_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_FaultTo;
*zxwsf_e_Header_PUSH_To = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_To;
*zxwsf_e_Header_PUSH_Action = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Action;
*zxwsf_e_Header_PUSH_Framework = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Framework;
*zxwsf_e_Header_PUSH_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_b_Framework;
*zxwsf_e_Header_PUSH_Sender = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Sender;
*zxwsf_e_Header_PUSH_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_TargetIdentity;
*zxwsf_e_Header_PUSH_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_CredentialsContext;
*zxwsf_e_Header_PUSH_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_EndpointUpdate;
*zxwsf_e_Header_PUSH_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Timeout;
*zxwsf_e_Header_PUSH_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_ProcessingContext;
*zxwsf_e_Header_PUSH_Consent = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Consent;
*zxwsf_e_Header_PUSH_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_UsageDirective;
*zxwsf_e_Header_PUSH_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_ApplicationEPR;
*zxwsf_e_Header_PUSH_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_UserInteraction;
*zxwsf_e_Header_PUSH_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_RedirectRequest;
*zxwsf_e_Header_PUSH_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Correlation;
*zxwsf_e_Header_PUSH_Provider = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_Provider;
*zxwsf_e_Header_PUSH_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_b12_ProcessingContext;
*zxwsf_e_Header_PUSH_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_b12_Consent;
*zxwsf_e_Header_PUSH_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_PUSH_b12_UsageDirective;
*zxwsf_e_Header_PUT_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_PUT_MessageID;
*zxwsf_e_Header_PUT_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_PUT_RelatesTo;
*zxwsf_e_Header_PUT_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_PUT_ReplyTo;
*zxwsf_e_Header_PUT_From = *Net::WSF::Rawc::zxwsf_e_Header_PUT_From;
*zxwsf_e_Header_PUT_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_PUT_FaultTo;
*zxwsf_e_Header_PUT_To = *Net::WSF::Rawc::zxwsf_e_Header_PUT_To;
*zxwsf_e_Header_PUT_Action = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Action;
*zxwsf_e_Header_PUT_Framework = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Framework;
*zxwsf_e_Header_PUT_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_PUT_b_Framework;
*zxwsf_e_Header_PUT_Sender = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Sender;
*zxwsf_e_Header_PUT_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_PUT_TargetIdentity;
*zxwsf_e_Header_PUT_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_PUT_CredentialsContext;
*zxwsf_e_Header_PUT_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_PUT_EndpointUpdate;
*zxwsf_e_Header_PUT_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Timeout;
*zxwsf_e_Header_PUT_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_PUT_ProcessingContext;
*zxwsf_e_Header_PUT_Consent = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Consent;
*zxwsf_e_Header_PUT_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_PUT_UsageDirective;
*zxwsf_e_Header_PUT_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_PUT_ApplicationEPR;
*zxwsf_e_Header_PUT_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_PUT_UserInteraction;
*zxwsf_e_Header_PUT_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_PUT_RedirectRequest;
*zxwsf_e_Header_PUT_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Correlation;
*zxwsf_e_Header_PUT_Provider = *Net::WSF::Rawc::zxwsf_e_Header_PUT_Provider;
*zxwsf_e_Header_PUT_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_PUT_b12_ProcessingContext;
*zxwsf_e_Header_PUT_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_PUT_b12_Consent;
*zxwsf_e_Header_PUT_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_PUT_b12_UsageDirective;
*zxwsf_e_Header_ADD_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_ADD_MessageID;
*zxwsf_e_Header_ADD_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_ADD_RelatesTo;
*zxwsf_e_Header_ADD_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_ADD_ReplyTo;
*zxwsf_e_Header_ADD_From = *Net::WSF::Rawc::zxwsf_e_Header_ADD_From;
*zxwsf_e_Header_ADD_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_ADD_FaultTo;
*zxwsf_e_Header_ADD_To = *Net::WSF::Rawc::zxwsf_e_Header_ADD_To;
*zxwsf_e_Header_ADD_Action = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Action;
*zxwsf_e_Header_ADD_Framework = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Framework;
*zxwsf_e_Header_ADD_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_ADD_b_Framework;
*zxwsf_e_Header_ADD_Sender = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Sender;
*zxwsf_e_Header_ADD_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_ADD_TargetIdentity;
*zxwsf_e_Header_ADD_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_ADD_CredentialsContext;
*zxwsf_e_Header_ADD_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_ADD_EndpointUpdate;
*zxwsf_e_Header_ADD_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Timeout;
*zxwsf_e_Header_ADD_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_ADD_ProcessingContext;
*zxwsf_e_Header_ADD_Consent = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Consent;
*zxwsf_e_Header_ADD_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_ADD_UsageDirective;
*zxwsf_e_Header_ADD_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_ADD_ApplicationEPR;
*zxwsf_e_Header_ADD_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_ADD_UserInteraction;
*zxwsf_e_Header_ADD_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_ADD_RedirectRequest;
*zxwsf_e_Header_ADD_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Correlation;
*zxwsf_e_Header_ADD_Provider = *Net::WSF::Rawc::zxwsf_e_Header_ADD_Provider;
*zxwsf_e_Header_ADD_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_ADD_b12_ProcessingContext;
*zxwsf_e_Header_ADD_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_ADD_b12_Consent;
*zxwsf_e_Header_ADD_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_ADD_b12_UsageDirective;
*zxwsf_e_Header_DEL_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_DEL_MessageID;
*zxwsf_e_Header_DEL_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_DEL_RelatesTo;
*zxwsf_e_Header_DEL_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_DEL_ReplyTo;
*zxwsf_e_Header_DEL_From = *Net::WSF::Rawc::zxwsf_e_Header_DEL_From;
*zxwsf_e_Header_DEL_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_DEL_FaultTo;
*zxwsf_e_Header_DEL_To = *Net::WSF::Rawc::zxwsf_e_Header_DEL_To;
*zxwsf_e_Header_DEL_Action = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Action;
*zxwsf_e_Header_DEL_Framework = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Framework;
*zxwsf_e_Header_DEL_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_DEL_b_Framework;
*zxwsf_e_Header_DEL_Sender = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Sender;
*zxwsf_e_Header_DEL_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_DEL_TargetIdentity;
*zxwsf_e_Header_DEL_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_DEL_CredentialsContext;
*zxwsf_e_Header_DEL_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_DEL_EndpointUpdate;
*zxwsf_e_Header_DEL_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Timeout;
*zxwsf_e_Header_DEL_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_DEL_ProcessingContext;
*zxwsf_e_Header_DEL_Consent = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Consent;
*zxwsf_e_Header_DEL_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_DEL_UsageDirective;
*zxwsf_e_Header_DEL_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_DEL_ApplicationEPR;
*zxwsf_e_Header_DEL_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_DEL_UserInteraction;
*zxwsf_e_Header_DEL_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_DEL_RedirectRequest;
*zxwsf_e_Header_DEL_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Correlation;
*zxwsf_e_Header_DEL_Provider = *Net::WSF::Rawc::zxwsf_e_Header_DEL_Provider;
*zxwsf_e_Header_DEL_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_DEL_b12_ProcessingContext;
*zxwsf_e_Header_DEL_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_DEL_b12_Consent;
*zxwsf_e_Header_DEL_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_DEL_b12_UsageDirective;
*zxwsf_e_Header_REV_MessageID = *Net::WSF::Rawc::zxwsf_e_Header_REV_MessageID;
*zxwsf_e_Header_REV_RelatesTo = *Net::WSF::Rawc::zxwsf_e_Header_REV_RelatesTo;
*zxwsf_e_Header_REV_ReplyTo = *Net::WSF::Rawc::zxwsf_e_Header_REV_ReplyTo;
*zxwsf_e_Header_REV_From = *Net::WSF::Rawc::zxwsf_e_Header_REV_From;
*zxwsf_e_Header_REV_FaultTo = *Net::WSF::Rawc::zxwsf_e_Header_REV_FaultTo;
*zxwsf_e_Header_REV_To = *Net::WSF::Rawc::zxwsf_e_Header_REV_To;
*zxwsf_e_Header_REV_Action = *Net::WSF::Rawc::zxwsf_e_Header_REV_Action;
*zxwsf_e_Header_REV_Framework = *Net::WSF::Rawc::zxwsf_e_Header_REV_Framework;
*zxwsf_e_Header_REV_b_Framework = *Net::WSF::Rawc::zxwsf_e_Header_REV_b_Framework;
*zxwsf_e_Header_REV_Sender = *Net::WSF::Rawc::zxwsf_e_Header_REV_Sender;
*zxwsf_e_Header_REV_TargetIdentity = *Net::WSF::Rawc::zxwsf_e_Header_REV_TargetIdentity;
*zxwsf_e_Header_REV_CredentialsContext = *Net::WSF::Rawc::zxwsf_e_Header_REV_CredentialsContext;
*zxwsf_e_Header_REV_EndpointUpdate = *Net::WSF::Rawc::zxwsf_e_Header_REV_EndpointUpdate;
*zxwsf_e_Header_REV_Timeout = *Net::WSF::Rawc::zxwsf_e_Header_REV_Timeout;
*zxwsf_e_Header_REV_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_REV_ProcessingContext;
*zxwsf_e_Header_REV_Consent = *Net::WSF::Rawc::zxwsf_e_Header_REV_Consent;
*zxwsf_e_Header_REV_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_REV_UsageDirective;
*zxwsf_e_Header_REV_ApplicationEPR = *Net::WSF::Rawc::zxwsf_e_Header_REV_ApplicationEPR;
*zxwsf_e_Header_REV_UserInteraction = *Net::WSF::Rawc::zxwsf_e_Header_REV_UserInteraction;
*zxwsf_e_Header_REV_RedirectRequest = *Net::WSF::Rawc::zxwsf_e_Header_REV_RedirectRequest;
*zxwsf_e_Header_REV_Correlation = *Net::WSF::Rawc::zxwsf_e_Header_REV_Correlation;
*zxwsf_e_Header_REV_Provider = *Net::WSF::Rawc::zxwsf_e_Header_REV_Provider;
*zxwsf_e_Header_REV_b12_ProcessingContext = *Net::WSF::Rawc::zxwsf_e_Header_REV_b12_ProcessingContext;
*zxwsf_e_Header_REV_b12_Consent = *Net::WSF::Rawc::zxwsf_e_Header_REV_b12_Consent;
*zxwsf_e_Header_REV_b12_UsageDirective = *Net::WSF::Rawc::zxwsf_e_Header_REV_b12_UsageDirective;
*zxwsf_DEC_e_detail = *Net::WSF::Rawc::zxwsf_DEC_e_detail;
*zxwsf_NEW_e_detail = *Net::WSF::Rawc::zxwsf_NEW_e_detail;
*zxwsf_DEEP_CLONE_e_detail = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_e_detail;
*zxwsf_DUP_STRS_e_detail = *Net::WSF::Rawc::zxwsf_DUP_STRS_e_detail;
*zxwsf_FREE_e_detail = *Net::WSF::Rawc::zxwsf_FREE_e_detail;
*zxwsf_WALK_SO_e_detail = *Net::WSF::Rawc::zxwsf_WALK_SO_e_detail;
*zxwsf_WALK_WO_e_detail = *Net::WSF::Rawc::zxwsf_WALK_WO_e_detail;
*zxwsf_LEN_e_detail = *Net::WSF::Rawc::zxwsf_LEN_e_detail;
*zxwsf_ENC_SO_e_detail = *Net::WSF::Rawc::zxwsf_ENC_SO_e_detail;
*zxwsf_ENC_WO_e_detail = *Net::WSF::Rawc::zxwsf_ENC_WO_e_detail;
*zxwsf_EASY_ENC_SO_e_detail = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_e_detail;
*zxwsf_EASY_ENC_WO_e_detail = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_e_detail;
*zxwsf_DEC_is12_Confirm = *Net::WSF::Rawc::zxwsf_DEC_is12_Confirm;
*zxwsf_NEW_is12_Confirm = *Net::WSF::Rawc::zxwsf_NEW_is12_Confirm;
*zxwsf_DEEP_CLONE_is12_Confirm = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Confirm;
*zxwsf_DUP_STRS_is12_Confirm = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Confirm;
*zxwsf_FREE_is12_Confirm = *Net::WSF::Rawc::zxwsf_FREE_is12_Confirm;
*zxwsf_WALK_SO_is12_Confirm = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Confirm;
*zxwsf_WALK_WO_is12_Confirm = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Confirm;
*zxwsf_LEN_is12_Confirm = *Net::WSF::Rawc::zxwsf_LEN_is12_Confirm;
*zxwsf_ENC_SO_is12_Confirm = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Confirm;
*zxwsf_ENC_WO_is12_Confirm = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Confirm;
*zxwsf_EASY_ENC_SO_is12_Confirm = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Confirm;
*zxwsf_EASY_ENC_WO_is12_Confirm = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Confirm;
*zxwsf_is12_Confirm_GET_name = *Net::WSF::Rawc::zxwsf_is12_Confirm_GET_name;
*zxwsf_is12_Confirm_GET_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_GET_Help;
*zxwsf_is12_Confirm_GET_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_GET_Hint;
*zxwsf_is12_Confirm_GET_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_GET_Label;
*zxwsf_is12_Confirm_GET_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_GET_Value;
*zxwsf_is12_Confirm_NUM_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_NUM_Help;
*zxwsf_is12_Confirm_NUM_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_NUM_Hint;
*zxwsf_is12_Confirm_NUM_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_NUM_Label;
*zxwsf_is12_Confirm_NUM_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_NUM_Value;
*zxwsf_is12_Confirm_POP_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_POP_Help;
*zxwsf_is12_Confirm_POP_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_POP_Hint;
*zxwsf_is12_Confirm_POP_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_POP_Label;
*zxwsf_is12_Confirm_POP_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_POP_Value;
*zxwsf_is12_Confirm_PUSH_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUSH_Help;
*zxwsf_is12_Confirm_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUSH_Hint;
*zxwsf_is12_Confirm_PUSH_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUSH_Label;
*zxwsf_is12_Confirm_PUSH_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUSH_Value;
*zxwsf_is12_Confirm_PUT_name = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUT_name;
*zxwsf_is12_Confirm_PUT_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUT_Help;
*zxwsf_is12_Confirm_PUT_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUT_Hint;
*zxwsf_is12_Confirm_PUT_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUT_Label;
*zxwsf_is12_Confirm_PUT_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_PUT_Value;
*zxwsf_is12_Confirm_ADD_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_ADD_Help;
*zxwsf_is12_Confirm_ADD_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_ADD_Hint;
*zxwsf_is12_Confirm_ADD_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_ADD_Label;
*zxwsf_is12_Confirm_ADD_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_ADD_Value;
*zxwsf_is12_Confirm_DEL_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_DEL_Help;
*zxwsf_is12_Confirm_DEL_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_DEL_Hint;
*zxwsf_is12_Confirm_DEL_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_DEL_Label;
*zxwsf_is12_Confirm_DEL_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_DEL_Value;
*zxwsf_is12_Confirm_REV_Help = *Net::WSF::Rawc::zxwsf_is12_Confirm_REV_Help;
*zxwsf_is12_Confirm_REV_Hint = *Net::WSF::Rawc::zxwsf_is12_Confirm_REV_Hint;
*zxwsf_is12_Confirm_REV_Label = *Net::WSF::Rawc::zxwsf_is12_Confirm_REV_Label;
*zxwsf_is12_Confirm_REV_Value = *Net::WSF::Rawc::zxwsf_is12_Confirm_REV_Value;
*zxwsf_DEC_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DEC_is12_EncryptedResourceID;
*zxwsf_NEW_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_NEW_is12_EncryptedResourceID;
*zxwsf_DEEP_CLONE_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_EncryptedResourceID;
*zxwsf_DUP_STRS_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_EncryptedResourceID;
*zxwsf_FREE_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_FREE_is12_EncryptedResourceID;
*zxwsf_WALK_SO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_EncryptedResourceID;
*zxwsf_WALK_WO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_EncryptedResourceID;
*zxwsf_LEN_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_LEN_is12_EncryptedResourceID;
*zxwsf_ENC_SO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_EncryptedResourceID;
*zxwsf_ENC_WO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_EncryptedResourceID;
*zxwsf_EASY_ENC_SO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_EncryptedResourceID;
*zxwsf_EASY_ENC_WO_is12_EncryptedResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_EncryptedResourceID;
*zxwsf_is12_EncryptedResourceID_GET_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_GET_EncryptedData;
*zxwsf_is12_EncryptedResourceID_GET_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_GET_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_NUM_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_NUM_EncryptedData;
*zxwsf_is12_EncryptedResourceID_NUM_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_NUM_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_POP_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_POP_EncryptedData;
*zxwsf_is12_EncryptedResourceID_POP_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_POP_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_PUSH_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_PUSH_EncryptedData;
*zxwsf_is12_EncryptedResourceID_PUSH_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_PUSH_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_PUT_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_PUT_EncryptedData;
*zxwsf_is12_EncryptedResourceID_PUT_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_PUT_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_ADD_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_ADD_EncryptedData;
*zxwsf_is12_EncryptedResourceID_ADD_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_ADD_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_DEL_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_DEL_EncryptedData;
*zxwsf_is12_EncryptedResourceID_DEL_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_DEL_EncryptedKey;
*zxwsf_is12_EncryptedResourceID_REV_EncryptedData = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_REV_EncryptedData;
*zxwsf_is12_EncryptedResourceID_REV_EncryptedKey = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_REV_EncryptedKey;
*zxwsf_DEC_is12_Extension = *Net::WSF::Rawc::zxwsf_DEC_is12_Extension;
*zxwsf_NEW_is12_Extension = *Net::WSF::Rawc::zxwsf_NEW_is12_Extension;
*zxwsf_DEEP_CLONE_is12_Extension = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Extension;
*zxwsf_DUP_STRS_is12_Extension = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Extension;
*zxwsf_FREE_is12_Extension = *Net::WSF::Rawc::zxwsf_FREE_is12_Extension;
*zxwsf_WALK_SO_is12_Extension = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Extension;
*zxwsf_WALK_WO_is12_Extension = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Extension;
*zxwsf_LEN_is12_Extension = *Net::WSF::Rawc::zxwsf_LEN_is12_Extension;
*zxwsf_ENC_SO_is12_Extension = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Extension;
*zxwsf_ENC_WO_is12_Extension = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Extension;
*zxwsf_EASY_ENC_SO_is12_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Extension;
*zxwsf_EASY_ENC_WO_is12_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Extension;
*zxwsf_DEC_is12_Help = *Net::WSF::Rawc::zxwsf_DEC_is12_Help;
*zxwsf_NEW_is12_Help = *Net::WSF::Rawc::zxwsf_NEW_is12_Help;
*zxwsf_DEEP_CLONE_is12_Help = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Help;
*zxwsf_DUP_STRS_is12_Help = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Help;
*zxwsf_FREE_is12_Help = *Net::WSF::Rawc::zxwsf_FREE_is12_Help;
*zxwsf_WALK_SO_is12_Help = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Help;
*zxwsf_WALK_WO_is12_Help = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Help;
*zxwsf_LEN_is12_Help = *Net::WSF::Rawc::zxwsf_LEN_is12_Help;
*zxwsf_ENC_SO_is12_Help = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Help;
*zxwsf_ENC_WO_is12_Help = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Help;
*zxwsf_EASY_ENC_SO_is12_Help = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Help;
*zxwsf_EASY_ENC_WO_is12_Help = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Help;
*zxwsf_is12_Help_GET_label = *Net::WSF::Rawc::zxwsf_is12_Help_GET_label;
*zxwsf_is12_Help_GET_link = *Net::WSF::Rawc::zxwsf_is12_Help_GET_link;
*zxwsf_is12_Help_GET_moreLink = *Net::WSF::Rawc::zxwsf_is12_Help_GET_moreLink;
*zxwsf_is12_Help_PUT_label = *Net::WSF::Rawc::zxwsf_is12_Help_PUT_label;
*zxwsf_is12_Help_PUT_link = *Net::WSF::Rawc::zxwsf_is12_Help_PUT_link;
*zxwsf_is12_Help_PUT_moreLink = *Net::WSF::Rawc::zxwsf_is12_Help_PUT_moreLink;
*zxwsf_DEC_is12_Inquiry = *Net::WSF::Rawc::zxwsf_DEC_is12_Inquiry;
*zxwsf_NEW_is12_Inquiry = *Net::WSF::Rawc::zxwsf_NEW_is12_Inquiry;
*zxwsf_DEEP_CLONE_is12_Inquiry = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Inquiry;
*zxwsf_DUP_STRS_is12_Inquiry = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Inquiry;
*zxwsf_FREE_is12_Inquiry = *Net::WSF::Rawc::zxwsf_FREE_is12_Inquiry;
*zxwsf_WALK_SO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Inquiry;
*zxwsf_WALK_WO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Inquiry;
*zxwsf_LEN_is12_Inquiry = *Net::WSF::Rawc::zxwsf_LEN_is12_Inquiry;
*zxwsf_ENC_SO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Inquiry;
*zxwsf_ENC_WO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Inquiry;
*zxwsf_EASY_ENC_SO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Inquiry;
*zxwsf_EASY_ENC_WO_is12_Inquiry = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Inquiry;
*zxwsf_is12_Inquiry_GET_id = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_id;
*zxwsf_is12_Inquiry_GET_title = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_title;
*zxwsf_is12_Inquiry_GET_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_Help;
*zxwsf_is12_Inquiry_GET_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_Select;
*zxwsf_is12_Inquiry_GET_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_Confirm;
*zxwsf_is12_Inquiry_GET_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_GET_Text;
*zxwsf_is12_Inquiry_NUM_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_NUM_Help;
*zxwsf_is12_Inquiry_NUM_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_NUM_Select;
*zxwsf_is12_Inquiry_NUM_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_NUM_Confirm;
*zxwsf_is12_Inquiry_NUM_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_NUM_Text;
*zxwsf_is12_Inquiry_POP_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_POP_Help;
*zxwsf_is12_Inquiry_POP_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_POP_Select;
*zxwsf_is12_Inquiry_POP_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_POP_Confirm;
*zxwsf_is12_Inquiry_POP_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_POP_Text;
*zxwsf_is12_Inquiry_PUSH_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUSH_Help;
*zxwsf_is12_Inquiry_PUSH_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUSH_Select;
*zxwsf_is12_Inquiry_PUSH_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUSH_Confirm;
*zxwsf_is12_Inquiry_PUSH_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUSH_Text;
*zxwsf_is12_Inquiry_PUT_id = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_id;
*zxwsf_is12_Inquiry_PUT_title = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_title;
*zxwsf_is12_Inquiry_PUT_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_Help;
*zxwsf_is12_Inquiry_PUT_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_Select;
*zxwsf_is12_Inquiry_PUT_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_Confirm;
*zxwsf_is12_Inquiry_PUT_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_PUT_Text;
*zxwsf_is12_Inquiry_ADD_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_ADD_Help;
*zxwsf_is12_Inquiry_ADD_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_ADD_Select;
*zxwsf_is12_Inquiry_ADD_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_ADD_Confirm;
*zxwsf_is12_Inquiry_ADD_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_ADD_Text;
*zxwsf_is12_Inquiry_DEL_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_DEL_Help;
*zxwsf_is12_Inquiry_DEL_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_DEL_Select;
*zxwsf_is12_Inquiry_DEL_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_DEL_Confirm;
*zxwsf_is12_Inquiry_DEL_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_DEL_Text;
*zxwsf_is12_Inquiry_REV_Help = *Net::WSF::Rawc::zxwsf_is12_Inquiry_REV_Help;
*zxwsf_is12_Inquiry_REV_Select = *Net::WSF::Rawc::zxwsf_is12_Inquiry_REV_Select;
*zxwsf_is12_Inquiry_REV_Confirm = *Net::WSF::Rawc::zxwsf_is12_Inquiry_REV_Confirm;
*zxwsf_is12_Inquiry_REV_Text = *Net::WSF::Rawc::zxwsf_is12_Inquiry_REV_Text;
*zxwsf_DEC_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_DEC_is12_InteractionRequest;
*zxwsf_NEW_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_NEW_is12_InteractionRequest;
*zxwsf_DEEP_CLONE_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_InteractionRequest;
*zxwsf_DUP_STRS_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_InteractionRequest;
*zxwsf_FREE_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_FREE_is12_InteractionRequest;
*zxwsf_WALK_SO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_InteractionRequest;
*zxwsf_WALK_WO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_InteractionRequest;
*zxwsf_LEN_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_LEN_is12_InteractionRequest;
*zxwsf_ENC_SO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_InteractionRequest;
*zxwsf_ENC_WO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_InteractionRequest;
*zxwsf_EASY_ENC_SO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_InteractionRequest;
*zxwsf_EASY_ENC_WO_is12_InteractionRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_InteractionRequest;
*zxwsf_is12_InteractionRequest_GET_id = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_id;
*zxwsf_is12_InteractionRequest_GET_language = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_language;
*zxwsf_is12_InteractionRequest_GET_maxInteractTime = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_maxInteractTime;
*zxwsf_is12_InteractionRequest_GET_signed_is_c_keyword = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_signed_is_c_keyword;
*zxwsf_is12_InteractionRequest_GET_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_Inquiry;
*zxwsf_is12_InteractionRequest_GET_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_GET_KeyInfo;
*zxwsf_is12_InteractionRequest_NUM_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_NUM_Inquiry;
*zxwsf_is12_InteractionRequest_NUM_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_NUM_KeyInfo;
*zxwsf_is12_InteractionRequest_POP_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_POP_Inquiry;
*zxwsf_is12_InteractionRequest_POP_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_POP_KeyInfo;
*zxwsf_is12_InteractionRequest_PUSH_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUSH_Inquiry;
*zxwsf_is12_InteractionRequest_PUSH_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUSH_KeyInfo;
*zxwsf_is12_InteractionRequest_PUT_id = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_id;
*zxwsf_is12_InteractionRequest_PUT_language = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_language;
*zxwsf_is12_InteractionRequest_PUT_maxInteractTime = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_maxInteractTime;
*zxwsf_is12_InteractionRequest_PUT_signed_is_c_keyword = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_signed_is_c_keyword;
*zxwsf_is12_InteractionRequest_PUT_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_Inquiry;
*zxwsf_is12_InteractionRequest_PUT_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_PUT_KeyInfo;
*zxwsf_is12_InteractionRequest_ADD_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_ADD_Inquiry;
*zxwsf_is12_InteractionRequest_ADD_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_ADD_KeyInfo;
*zxwsf_is12_InteractionRequest_DEL_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_DEL_Inquiry;
*zxwsf_is12_InteractionRequest_DEL_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_DEL_KeyInfo;
*zxwsf_is12_InteractionRequest_REV_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_REV_Inquiry;
*zxwsf_is12_InteractionRequest_REV_KeyInfo = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_REV_KeyInfo;
*zxwsf_DEC_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_DEC_is12_InteractionResponse;
*zxwsf_NEW_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_NEW_is12_InteractionResponse;
*zxwsf_DEEP_CLONE_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_InteractionResponse;
*zxwsf_DUP_STRS_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_InteractionResponse;
*zxwsf_FREE_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_FREE_is12_InteractionResponse;
*zxwsf_WALK_SO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_InteractionResponse;
*zxwsf_WALK_WO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_InteractionResponse;
*zxwsf_LEN_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_LEN_is12_InteractionResponse;
*zxwsf_ENC_SO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_InteractionResponse;
*zxwsf_ENC_WO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_InteractionResponse;
*zxwsf_EASY_ENC_SO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_InteractionResponse;
*zxwsf_EASY_ENC_WO_is12_InteractionResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_InteractionResponse;
*zxwsf_is12_InteractionResponse_GET_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_GET_Status;
*zxwsf_is12_InteractionResponse_GET_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_GET_InteractionStatement;
*zxwsf_is12_InteractionResponse_GET_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_GET_Parameter;
*zxwsf_is12_InteractionResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_NUM_Status;
*zxwsf_is12_InteractionResponse_NUM_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_NUM_InteractionStatement;
*zxwsf_is12_InteractionResponse_NUM_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_NUM_Parameter;
*zxwsf_is12_InteractionResponse_POP_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_POP_Status;
*zxwsf_is12_InteractionResponse_POP_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_POP_InteractionStatement;
*zxwsf_is12_InteractionResponse_POP_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_POP_Parameter;
*zxwsf_is12_InteractionResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUSH_Status;
*zxwsf_is12_InteractionResponse_PUSH_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUSH_InteractionStatement;
*zxwsf_is12_InteractionResponse_PUSH_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUSH_Parameter;
*zxwsf_is12_InteractionResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUT_Status;
*zxwsf_is12_InteractionResponse_PUT_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUT_InteractionStatement;
*zxwsf_is12_InteractionResponse_PUT_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_PUT_Parameter;
*zxwsf_is12_InteractionResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_ADD_Status;
*zxwsf_is12_InteractionResponse_ADD_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_ADD_InteractionStatement;
*zxwsf_is12_InteractionResponse_ADD_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_ADD_Parameter;
*zxwsf_is12_InteractionResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_DEL_Status;
*zxwsf_is12_InteractionResponse_DEL_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_DEL_InteractionStatement;
*zxwsf_is12_InteractionResponse_DEL_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_DEL_Parameter;
*zxwsf_is12_InteractionResponse_REV_Status = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_REV_Status;
*zxwsf_is12_InteractionResponse_REV_InteractionStatement = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_REV_InteractionStatement;
*zxwsf_is12_InteractionResponse_REV_Parameter = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_REV_Parameter;
*zxwsf_DEC_is12_InteractionService = *Net::WSF::Rawc::zxwsf_DEC_is12_InteractionService;
*zxwsf_NEW_is12_InteractionService = *Net::WSF::Rawc::zxwsf_NEW_is12_InteractionService;
*zxwsf_DEEP_CLONE_is12_InteractionService = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_InteractionService;
*zxwsf_DUP_STRS_is12_InteractionService = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_InteractionService;
*zxwsf_FREE_is12_InteractionService = *Net::WSF::Rawc::zxwsf_FREE_is12_InteractionService;
*zxwsf_WALK_SO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_InteractionService;
*zxwsf_WALK_WO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_InteractionService;
*zxwsf_LEN_is12_InteractionService = *Net::WSF::Rawc::zxwsf_LEN_is12_InteractionService;
*zxwsf_ENC_SO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_InteractionService;
*zxwsf_ENC_WO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_InteractionService;
*zxwsf_EASY_ENC_SO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_InteractionService;
*zxwsf_EASY_ENC_WO_is12_InteractionService = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_InteractionService;
*zxwsf_is12_InteractionService_GET_entryID = *Net::WSF::Rawc::zxwsf_is12_InteractionService_GET_entryID;
*zxwsf_is12_InteractionService_GET_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_GET_ServiceInstance;
*zxwsf_is12_InteractionService_GET_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_GET_Options;
*zxwsf_is12_InteractionService_GET_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_GET_Abstract;
*zxwsf_is12_InteractionService_NUM_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_NUM_ServiceInstance;
*zxwsf_is12_InteractionService_NUM_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_NUM_Options;
*zxwsf_is12_InteractionService_NUM_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_NUM_Abstract;
*zxwsf_is12_InteractionService_POP_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_POP_ServiceInstance;
*zxwsf_is12_InteractionService_POP_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_POP_Options;
*zxwsf_is12_InteractionService_POP_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_POP_Abstract;
*zxwsf_is12_InteractionService_PUSH_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUSH_ServiceInstance;
*zxwsf_is12_InteractionService_PUSH_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUSH_Options;
*zxwsf_is12_InteractionService_PUSH_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUSH_Abstract;
*zxwsf_is12_InteractionService_PUT_entryID = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUT_entryID;
*zxwsf_is12_InteractionService_PUT_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUT_ServiceInstance;
*zxwsf_is12_InteractionService_PUT_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUT_Options;
*zxwsf_is12_InteractionService_PUT_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_PUT_Abstract;
*zxwsf_is12_InteractionService_ADD_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_ADD_ServiceInstance;
*zxwsf_is12_InteractionService_ADD_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_ADD_Options;
*zxwsf_is12_InteractionService_ADD_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_ADD_Abstract;
*zxwsf_is12_InteractionService_DEL_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_DEL_ServiceInstance;
*zxwsf_is12_InteractionService_DEL_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_DEL_Options;
*zxwsf_is12_InteractionService_DEL_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_DEL_Abstract;
*zxwsf_is12_InteractionService_REV_ServiceInstance = *Net::WSF::Rawc::zxwsf_is12_InteractionService_REV_ServiceInstance;
*zxwsf_is12_InteractionService_REV_Options = *Net::WSF::Rawc::zxwsf_is12_InteractionService_REV_Options;
*zxwsf_is12_InteractionService_REV_Abstract = *Net::WSF::Rawc::zxwsf_is12_InteractionService_REV_Abstract;
*zxwsf_DEC_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_DEC_is12_InteractionStatement;
*zxwsf_NEW_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_NEW_is12_InteractionStatement;
*zxwsf_DEEP_CLONE_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_InteractionStatement;
*zxwsf_DUP_STRS_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_InteractionStatement;
*zxwsf_FREE_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_FREE_is12_InteractionStatement;
*zxwsf_WALK_SO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_InteractionStatement;
*zxwsf_WALK_WO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_InteractionStatement;
*zxwsf_LEN_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_LEN_is12_InteractionStatement;
*zxwsf_ENC_SO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_InteractionStatement;
*zxwsf_ENC_WO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_InteractionStatement;
*zxwsf_EASY_ENC_SO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_InteractionStatement;
*zxwsf_EASY_ENC_WO_is12_InteractionStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_InteractionStatement;
*zxwsf_is12_InteractionStatement_GET_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_GET_Inquiry;
*zxwsf_is12_InteractionStatement_GET_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_GET_Signature;
*zxwsf_is12_InteractionStatement_NUM_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_NUM_Inquiry;
*zxwsf_is12_InteractionStatement_NUM_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_NUM_Signature;
*zxwsf_is12_InteractionStatement_POP_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_POP_Inquiry;
*zxwsf_is12_InteractionStatement_POP_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_POP_Signature;
*zxwsf_is12_InteractionStatement_PUSH_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_PUSH_Inquiry;
*zxwsf_is12_InteractionStatement_PUSH_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_PUSH_Signature;
*zxwsf_is12_InteractionStatement_PUT_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_PUT_Inquiry;
*zxwsf_is12_InteractionStatement_PUT_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_PUT_Signature;
*zxwsf_is12_InteractionStatement_ADD_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_ADD_Inquiry;
*zxwsf_is12_InteractionStatement_ADD_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_ADD_Signature;
*zxwsf_is12_InteractionStatement_DEL_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_DEL_Inquiry;
*zxwsf_is12_InteractionStatement_DEL_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_DEL_Signature;
*zxwsf_is12_InteractionStatement_REV_Inquiry = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_REV_Inquiry;
*zxwsf_is12_InteractionStatement_REV_Signature = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_REV_Signature;
*zxwsf_DEC_is12_Item = *Net::WSF::Rawc::zxwsf_DEC_is12_Item;
*zxwsf_NEW_is12_Item = *Net::WSF::Rawc::zxwsf_NEW_is12_Item;
*zxwsf_DEEP_CLONE_is12_Item = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Item;
*zxwsf_DUP_STRS_is12_Item = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Item;
*zxwsf_FREE_is12_Item = *Net::WSF::Rawc::zxwsf_FREE_is12_Item;
*zxwsf_WALK_SO_is12_Item = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Item;
*zxwsf_WALK_WO_is12_Item = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Item;
*zxwsf_LEN_is12_Item = *Net::WSF::Rawc::zxwsf_LEN_is12_Item;
*zxwsf_ENC_SO_is12_Item = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Item;
*zxwsf_ENC_WO_is12_Item = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Item;
*zxwsf_EASY_ENC_SO_is12_Item = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Item;
*zxwsf_EASY_ENC_WO_is12_Item = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Item;
*zxwsf_is12_Item_GET_label = *Net::WSF::Rawc::zxwsf_is12_Item_GET_label;
*zxwsf_is12_Item_GET_value = *Net::WSF::Rawc::zxwsf_is12_Item_GET_value;
*zxwsf_is12_Item_GET_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_GET_Hint;
*zxwsf_is12_Item_NUM_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_NUM_Hint;
*zxwsf_is12_Item_POP_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_POP_Hint;
*zxwsf_is12_Item_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_PUSH_Hint;
*zxwsf_is12_Item_PUT_label = *Net::WSF::Rawc::zxwsf_is12_Item_PUT_label;
*zxwsf_is12_Item_PUT_value = *Net::WSF::Rawc::zxwsf_is12_Item_PUT_value;
*zxwsf_is12_Item_PUT_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_PUT_Hint;
*zxwsf_is12_Item_ADD_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_ADD_Hint;
*zxwsf_is12_Item_DEL_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_DEL_Hint;
*zxwsf_is12_Item_REV_Hint = *Net::WSF::Rawc::zxwsf_is12_Item_REV_Hint;
*zxwsf_DEC_is12_Parameter = *Net::WSF::Rawc::zxwsf_DEC_is12_Parameter;
*zxwsf_NEW_is12_Parameter = *Net::WSF::Rawc::zxwsf_NEW_is12_Parameter;
*zxwsf_DEEP_CLONE_is12_Parameter = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Parameter;
*zxwsf_DUP_STRS_is12_Parameter = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Parameter;
*zxwsf_FREE_is12_Parameter = *Net::WSF::Rawc::zxwsf_FREE_is12_Parameter;
*zxwsf_WALK_SO_is12_Parameter = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Parameter;
*zxwsf_WALK_WO_is12_Parameter = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Parameter;
*zxwsf_LEN_is12_Parameter = *Net::WSF::Rawc::zxwsf_LEN_is12_Parameter;
*zxwsf_ENC_SO_is12_Parameter = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Parameter;
*zxwsf_ENC_WO_is12_Parameter = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Parameter;
*zxwsf_EASY_ENC_SO_is12_Parameter = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Parameter;
*zxwsf_EASY_ENC_WO_is12_Parameter = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Parameter;
*zxwsf_is12_Parameter_GET_name = *Net::WSF::Rawc::zxwsf_is12_Parameter_GET_name;
*zxwsf_is12_Parameter_GET_value = *Net::WSF::Rawc::zxwsf_is12_Parameter_GET_value;
*zxwsf_is12_Parameter_PUT_name = *Net::WSF::Rawc::zxwsf_is12_Parameter_PUT_name;
*zxwsf_is12_Parameter_PUT_value = *Net::WSF::Rawc::zxwsf_is12_Parameter_PUT_value;
*zxwsf_DEC_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_DEC_is12_RedirectRequest;
*zxwsf_NEW_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_NEW_is12_RedirectRequest;
*zxwsf_DEEP_CLONE_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_RedirectRequest;
*zxwsf_DUP_STRS_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_RedirectRequest;
*zxwsf_FREE_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_FREE_is12_RedirectRequest;
*zxwsf_WALK_SO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_RedirectRequest;
*zxwsf_WALK_WO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_RedirectRequest;
*zxwsf_LEN_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_LEN_is12_RedirectRequest;
*zxwsf_ENC_SO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_RedirectRequest;
*zxwsf_ENC_WO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_RedirectRequest;
*zxwsf_EASY_ENC_SO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_RedirectRequest;
*zxwsf_EASY_ENC_WO_is12_RedirectRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_RedirectRequest;
*zxwsf_is12_RedirectRequest_GET_redirectURL = *Net::WSF::Rawc::zxwsf_is12_RedirectRequest_GET_redirectURL;
*zxwsf_is12_RedirectRequest_PUT_redirectURL = *Net::WSF::Rawc::zxwsf_is12_RedirectRequest_PUT_redirectURL;
*zxwsf_DEC_is12_ResourceID = *Net::WSF::Rawc::zxwsf_DEC_is12_ResourceID;
*zxwsf_NEW_is12_ResourceID = *Net::WSF::Rawc::zxwsf_NEW_is12_ResourceID;
*zxwsf_DEEP_CLONE_is12_ResourceID = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_ResourceID;
*zxwsf_DUP_STRS_is12_ResourceID = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_ResourceID;
*zxwsf_FREE_is12_ResourceID = *Net::WSF::Rawc::zxwsf_FREE_is12_ResourceID;
*zxwsf_WALK_SO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_ResourceID;
*zxwsf_WALK_WO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_ResourceID;
*zxwsf_LEN_is12_ResourceID = *Net::WSF::Rawc::zxwsf_LEN_is12_ResourceID;
*zxwsf_ENC_SO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_ResourceID;
*zxwsf_ENC_WO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_ResourceID;
*zxwsf_EASY_ENC_SO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_ResourceID;
*zxwsf_EASY_ENC_WO_is12_ResourceID = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_ResourceID;
*zxwsf_is12_ResourceID_GET_id = *Net::WSF::Rawc::zxwsf_is12_ResourceID_GET_id;
*zxwsf_is12_ResourceID_PUT_id = *Net::WSF::Rawc::zxwsf_is12_ResourceID_PUT_id;
*zxwsf_DEC_is12_Select = *Net::WSF::Rawc::zxwsf_DEC_is12_Select;
*zxwsf_NEW_is12_Select = *Net::WSF::Rawc::zxwsf_NEW_is12_Select;
*zxwsf_DEEP_CLONE_is12_Select = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Select;
*zxwsf_DUP_STRS_is12_Select = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Select;
*zxwsf_FREE_is12_Select = *Net::WSF::Rawc::zxwsf_FREE_is12_Select;
*zxwsf_WALK_SO_is12_Select = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Select;
*zxwsf_WALK_WO_is12_Select = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Select;
*zxwsf_LEN_is12_Select = *Net::WSF::Rawc::zxwsf_LEN_is12_Select;
*zxwsf_ENC_SO_is12_Select = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Select;
*zxwsf_ENC_WO_is12_Select = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Select;
*zxwsf_EASY_ENC_SO_is12_Select = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Select;
*zxwsf_EASY_ENC_WO_is12_Select = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Select;
*zxwsf_is12_Select_GET_name = *Net::WSF::Rawc::zxwsf_is12_Select_GET_name;
*zxwsf_is12_Select_GET_multiple = *Net::WSF::Rawc::zxwsf_is12_Select_GET_multiple;
*zxwsf_is12_Select_GET_Help = *Net::WSF::Rawc::zxwsf_is12_Select_GET_Help;
*zxwsf_is12_Select_GET_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_GET_Hint;
*zxwsf_is12_Select_GET_Label = *Net::WSF::Rawc::zxwsf_is12_Select_GET_Label;
*zxwsf_is12_Select_GET_Value = *Net::WSF::Rawc::zxwsf_is12_Select_GET_Value;
*zxwsf_is12_Select_GET_Item = *Net::WSF::Rawc::zxwsf_is12_Select_GET_Item;
*zxwsf_is12_Select_NUM_Help = *Net::WSF::Rawc::zxwsf_is12_Select_NUM_Help;
*zxwsf_is12_Select_NUM_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_NUM_Hint;
*zxwsf_is12_Select_NUM_Label = *Net::WSF::Rawc::zxwsf_is12_Select_NUM_Label;
*zxwsf_is12_Select_NUM_Value = *Net::WSF::Rawc::zxwsf_is12_Select_NUM_Value;
*zxwsf_is12_Select_NUM_Item = *Net::WSF::Rawc::zxwsf_is12_Select_NUM_Item;
*zxwsf_is12_Select_POP_Help = *Net::WSF::Rawc::zxwsf_is12_Select_POP_Help;
*zxwsf_is12_Select_POP_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_POP_Hint;
*zxwsf_is12_Select_POP_Label = *Net::WSF::Rawc::zxwsf_is12_Select_POP_Label;
*zxwsf_is12_Select_POP_Value = *Net::WSF::Rawc::zxwsf_is12_Select_POP_Value;
*zxwsf_is12_Select_POP_Item = *Net::WSF::Rawc::zxwsf_is12_Select_POP_Item;
*zxwsf_is12_Select_PUSH_Help = *Net::WSF::Rawc::zxwsf_is12_Select_PUSH_Help;
*zxwsf_is12_Select_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_PUSH_Hint;
*zxwsf_is12_Select_PUSH_Label = *Net::WSF::Rawc::zxwsf_is12_Select_PUSH_Label;
*zxwsf_is12_Select_PUSH_Value = *Net::WSF::Rawc::zxwsf_is12_Select_PUSH_Value;
*zxwsf_is12_Select_PUSH_Item = *Net::WSF::Rawc::zxwsf_is12_Select_PUSH_Item;
*zxwsf_is12_Select_PUT_name = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_name;
*zxwsf_is12_Select_PUT_multiple = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_multiple;
*zxwsf_is12_Select_PUT_Help = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_Help;
*zxwsf_is12_Select_PUT_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_Hint;
*zxwsf_is12_Select_PUT_Label = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_Label;
*zxwsf_is12_Select_PUT_Value = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_Value;
*zxwsf_is12_Select_PUT_Item = *Net::WSF::Rawc::zxwsf_is12_Select_PUT_Item;
*zxwsf_is12_Select_ADD_Help = *Net::WSF::Rawc::zxwsf_is12_Select_ADD_Help;
*zxwsf_is12_Select_ADD_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_ADD_Hint;
*zxwsf_is12_Select_ADD_Label = *Net::WSF::Rawc::zxwsf_is12_Select_ADD_Label;
*zxwsf_is12_Select_ADD_Value = *Net::WSF::Rawc::zxwsf_is12_Select_ADD_Value;
*zxwsf_is12_Select_ADD_Item = *Net::WSF::Rawc::zxwsf_is12_Select_ADD_Item;
*zxwsf_is12_Select_DEL_Help = *Net::WSF::Rawc::zxwsf_is12_Select_DEL_Help;
*zxwsf_is12_Select_DEL_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_DEL_Hint;
*zxwsf_is12_Select_DEL_Label = *Net::WSF::Rawc::zxwsf_is12_Select_DEL_Label;
*zxwsf_is12_Select_DEL_Value = *Net::WSF::Rawc::zxwsf_is12_Select_DEL_Value;
*zxwsf_is12_Select_DEL_Item = *Net::WSF::Rawc::zxwsf_is12_Select_DEL_Item;
*zxwsf_is12_Select_REV_Help = *Net::WSF::Rawc::zxwsf_is12_Select_REV_Help;
*zxwsf_is12_Select_REV_Hint = *Net::WSF::Rawc::zxwsf_is12_Select_REV_Hint;
*zxwsf_is12_Select_REV_Label = *Net::WSF::Rawc::zxwsf_is12_Select_REV_Label;
*zxwsf_is12_Select_REV_Value = *Net::WSF::Rawc::zxwsf_is12_Select_REV_Value;
*zxwsf_is12_Select_REV_Item = *Net::WSF::Rawc::zxwsf_is12_Select_REV_Item;
*zxwsf_DEC_is12_Status = *Net::WSF::Rawc::zxwsf_DEC_is12_Status;
*zxwsf_NEW_is12_Status = *Net::WSF::Rawc::zxwsf_NEW_is12_Status;
*zxwsf_DEEP_CLONE_is12_Status = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Status;
*zxwsf_DUP_STRS_is12_Status = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Status;
*zxwsf_FREE_is12_Status = *Net::WSF::Rawc::zxwsf_FREE_is12_Status;
*zxwsf_WALK_SO_is12_Status = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Status;
*zxwsf_WALK_WO_is12_Status = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Status;
*zxwsf_LEN_is12_Status = *Net::WSF::Rawc::zxwsf_LEN_is12_Status;
*zxwsf_ENC_SO_is12_Status = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Status;
*zxwsf_ENC_WO_is12_Status = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Status;
*zxwsf_EASY_ENC_SO_is12_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Status;
*zxwsf_EASY_ENC_WO_is12_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Status;
*zxwsf_is12_Status_GET_code = *Net::WSF::Rawc::zxwsf_is12_Status_GET_code;
*zxwsf_is12_Status_GET_ref = *Net::WSF::Rawc::zxwsf_is12_Status_GET_ref;
*zxwsf_is12_Status_GET_comment = *Net::WSF::Rawc::zxwsf_is12_Status_GET_comment;
*zxwsf_is12_Status_GET_Status = *Net::WSF::Rawc::zxwsf_is12_Status_GET_Status;
*zxwsf_is12_Status_NUM_Status = *Net::WSF::Rawc::zxwsf_is12_Status_NUM_Status;
*zxwsf_is12_Status_POP_Status = *Net::WSF::Rawc::zxwsf_is12_Status_POP_Status;
*zxwsf_is12_Status_PUSH_Status = *Net::WSF::Rawc::zxwsf_is12_Status_PUSH_Status;
*zxwsf_is12_Status_PUT_code = *Net::WSF::Rawc::zxwsf_is12_Status_PUT_code;
*zxwsf_is12_Status_PUT_ref = *Net::WSF::Rawc::zxwsf_is12_Status_PUT_ref;
*zxwsf_is12_Status_PUT_comment = *Net::WSF::Rawc::zxwsf_is12_Status_PUT_comment;
*zxwsf_is12_Status_PUT_Status = *Net::WSF::Rawc::zxwsf_is12_Status_PUT_Status;
*zxwsf_is12_Status_ADD_Status = *Net::WSF::Rawc::zxwsf_is12_Status_ADD_Status;
*zxwsf_is12_Status_DEL_Status = *Net::WSF::Rawc::zxwsf_is12_Status_DEL_Status;
*zxwsf_is12_Status_REV_Status = *Net::WSF::Rawc::zxwsf_is12_Status_REV_Status;
*zxwsf_DEC_is12_Text = *Net::WSF::Rawc::zxwsf_DEC_is12_Text;
*zxwsf_NEW_is12_Text = *Net::WSF::Rawc::zxwsf_NEW_is12_Text;
*zxwsf_DEEP_CLONE_is12_Text = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_Text;
*zxwsf_DUP_STRS_is12_Text = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_Text;
*zxwsf_FREE_is12_Text = *Net::WSF::Rawc::zxwsf_FREE_is12_Text;
*zxwsf_WALK_SO_is12_Text = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_Text;
*zxwsf_WALK_WO_is12_Text = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_Text;
*zxwsf_LEN_is12_Text = *Net::WSF::Rawc::zxwsf_LEN_is12_Text;
*zxwsf_ENC_SO_is12_Text = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_Text;
*zxwsf_ENC_WO_is12_Text = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_Text;
*zxwsf_EASY_ENC_SO_is12_Text = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_Text;
*zxwsf_EASY_ENC_WO_is12_Text = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_Text;
*zxwsf_is12_Text_GET_name = *Net::WSF::Rawc::zxwsf_is12_Text_GET_name;
*zxwsf_is12_Text_GET_minChars = *Net::WSF::Rawc::zxwsf_is12_Text_GET_minChars;
*zxwsf_is12_Text_GET_maxChars = *Net::WSF::Rawc::zxwsf_is12_Text_GET_maxChars;
*zxwsf_is12_Text_GET_format = *Net::WSF::Rawc::zxwsf_is12_Text_GET_format;
*zxwsf_is12_Text_GET_Help = *Net::WSF::Rawc::zxwsf_is12_Text_GET_Help;
*zxwsf_is12_Text_GET_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_GET_Hint;
*zxwsf_is12_Text_GET_Label = *Net::WSF::Rawc::zxwsf_is12_Text_GET_Label;
*zxwsf_is12_Text_GET_Value = *Net::WSF::Rawc::zxwsf_is12_Text_GET_Value;
*zxwsf_is12_Text_NUM_Help = *Net::WSF::Rawc::zxwsf_is12_Text_NUM_Help;
*zxwsf_is12_Text_NUM_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_NUM_Hint;
*zxwsf_is12_Text_NUM_Label = *Net::WSF::Rawc::zxwsf_is12_Text_NUM_Label;
*zxwsf_is12_Text_NUM_Value = *Net::WSF::Rawc::zxwsf_is12_Text_NUM_Value;
*zxwsf_is12_Text_POP_Help = *Net::WSF::Rawc::zxwsf_is12_Text_POP_Help;
*zxwsf_is12_Text_POP_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_POP_Hint;
*zxwsf_is12_Text_POP_Label = *Net::WSF::Rawc::zxwsf_is12_Text_POP_Label;
*zxwsf_is12_Text_POP_Value = *Net::WSF::Rawc::zxwsf_is12_Text_POP_Value;
*zxwsf_is12_Text_PUSH_Help = *Net::WSF::Rawc::zxwsf_is12_Text_PUSH_Help;
*zxwsf_is12_Text_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_PUSH_Hint;
*zxwsf_is12_Text_PUSH_Label = *Net::WSF::Rawc::zxwsf_is12_Text_PUSH_Label;
*zxwsf_is12_Text_PUSH_Value = *Net::WSF::Rawc::zxwsf_is12_Text_PUSH_Value;
*zxwsf_is12_Text_PUT_name = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_name;
*zxwsf_is12_Text_PUT_minChars = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_minChars;
*zxwsf_is12_Text_PUT_maxChars = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_maxChars;
*zxwsf_is12_Text_PUT_format = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_format;
*zxwsf_is12_Text_PUT_Help = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_Help;
*zxwsf_is12_Text_PUT_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_Hint;
*zxwsf_is12_Text_PUT_Label = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_Label;
*zxwsf_is12_Text_PUT_Value = *Net::WSF::Rawc::zxwsf_is12_Text_PUT_Value;
*zxwsf_is12_Text_ADD_Help = *Net::WSF::Rawc::zxwsf_is12_Text_ADD_Help;
*zxwsf_is12_Text_ADD_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_ADD_Hint;
*zxwsf_is12_Text_ADD_Label = *Net::WSF::Rawc::zxwsf_is12_Text_ADD_Label;
*zxwsf_is12_Text_ADD_Value = *Net::WSF::Rawc::zxwsf_is12_Text_ADD_Value;
*zxwsf_is12_Text_DEL_Help = *Net::WSF::Rawc::zxwsf_is12_Text_DEL_Help;
*zxwsf_is12_Text_DEL_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_DEL_Hint;
*zxwsf_is12_Text_DEL_Label = *Net::WSF::Rawc::zxwsf_is12_Text_DEL_Label;
*zxwsf_is12_Text_DEL_Value = *Net::WSF::Rawc::zxwsf_is12_Text_DEL_Value;
*zxwsf_is12_Text_REV_Help = *Net::WSF::Rawc::zxwsf_is12_Text_REV_Help;
*zxwsf_is12_Text_REV_Hint = *Net::WSF::Rawc::zxwsf_is12_Text_REV_Hint;
*zxwsf_is12_Text_REV_Label = *Net::WSF::Rawc::zxwsf_is12_Text_REV_Label;
*zxwsf_is12_Text_REV_Value = *Net::WSF::Rawc::zxwsf_is12_Text_REV_Value;
*zxwsf_DEC_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_DEC_is12_UserInteraction;
*zxwsf_NEW_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_NEW_is12_UserInteraction;
*zxwsf_DEEP_CLONE_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is12_UserInteraction;
*zxwsf_DUP_STRS_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_DUP_STRS_is12_UserInteraction;
*zxwsf_FREE_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_FREE_is12_UserInteraction;
*zxwsf_WALK_SO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_WALK_SO_is12_UserInteraction;
*zxwsf_WALK_WO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_WALK_WO_is12_UserInteraction;
*zxwsf_LEN_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_LEN_is12_UserInteraction;
*zxwsf_ENC_SO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_ENC_SO_is12_UserInteraction;
*zxwsf_ENC_WO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_ENC_WO_is12_UserInteraction;
*zxwsf_EASY_ENC_SO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is12_UserInteraction;
*zxwsf_EASY_ENC_WO_is12_UserInteraction = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is12_UserInteraction;
*zxwsf_is12_UserInteraction_GET_id = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_id;
*zxwsf_is12_UserInteraction_GET_interact = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_interact;
*zxwsf_is12_UserInteraction_GET_language = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_language;
*zxwsf_is12_UserInteraction_GET_redirect = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_redirect;
*zxwsf_is12_UserInteraction_GET_maxInteractTime = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_maxInteractTime;
*zxwsf_is12_UserInteraction_GET_actor = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_actor;
*zxwsf_is12_UserInteraction_GET_mustUnderstand = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_mustUnderstand;
*zxwsf_is12_UserInteraction_GET_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_GET_InteractionService;
*zxwsf_is12_UserInteraction_NUM_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_NUM_InteractionService;
*zxwsf_is12_UserInteraction_POP_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_POP_InteractionService;
*zxwsf_is12_UserInteraction_PUSH_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUSH_InteractionService;
*zxwsf_is12_UserInteraction_PUT_id = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_id;
*zxwsf_is12_UserInteraction_PUT_interact = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_interact;
*zxwsf_is12_UserInteraction_PUT_language = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_language;
*zxwsf_is12_UserInteraction_PUT_redirect = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_redirect;
*zxwsf_is12_UserInteraction_PUT_maxInteractTime = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_maxInteractTime;
*zxwsf_is12_UserInteraction_PUT_actor = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_actor;
*zxwsf_is12_UserInteraction_PUT_mustUnderstand = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_mustUnderstand;
*zxwsf_is12_UserInteraction_PUT_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_PUT_InteractionService;
*zxwsf_is12_UserInteraction_ADD_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_ADD_InteractionService;
*zxwsf_is12_UserInteraction_DEL_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_DEL_InteractionService;
*zxwsf_is12_UserInteraction_REV_InteractionService = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_REV_InteractionService;
*zxwsf_DEC_is_Confirm = *Net::WSF::Rawc::zxwsf_DEC_is_Confirm;
*zxwsf_NEW_is_Confirm = *Net::WSF::Rawc::zxwsf_NEW_is_Confirm;
*zxwsf_DEEP_CLONE_is_Confirm = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Confirm;
*zxwsf_DUP_STRS_is_Confirm = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Confirm;
*zxwsf_FREE_is_Confirm = *Net::WSF::Rawc::zxwsf_FREE_is_Confirm;
*zxwsf_WALK_SO_is_Confirm = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Confirm;
*zxwsf_WALK_WO_is_Confirm = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Confirm;
*zxwsf_LEN_is_Confirm = *Net::WSF::Rawc::zxwsf_LEN_is_Confirm;
*zxwsf_ENC_SO_is_Confirm = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Confirm;
*zxwsf_ENC_WO_is_Confirm = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Confirm;
*zxwsf_EASY_ENC_SO_is_Confirm = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Confirm;
*zxwsf_EASY_ENC_WO_is_Confirm = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Confirm;
*zxwsf_is_Confirm_GET_name = *Net::WSF::Rawc::zxwsf_is_Confirm_GET_name;
*zxwsf_is_Confirm_GET_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_GET_Help;
*zxwsf_is_Confirm_GET_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_GET_Hint;
*zxwsf_is_Confirm_GET_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_GET_Label;
*zxwsf_is_Confirm_GET_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_GET_Value;
*zxwsf_is_Confirm_NUM_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_NUM_Help;
*zxwsf_is_Confirm_NUM_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_NUM_Hint;
*zxwsf_is_Confirm_NUM_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_NUM_Label;
*zxwsf_is_Confirm_NUM_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_NUM_Value;
*zxwsf_is_Confirm_POP_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_POP_Help;
*zxwsf_is_Confirm_POP_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_POP_Hint;
*zxwsf_is_Confirm_POP_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_POP_Label;
*zxwsf_is_Confirm_POP_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_POP_Value;
*zxwsf_is_Confirm_PUSH_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_PUSH_Help;
*zxwsf_is_Confirm_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_PUSH_Hint;
*zxwsf_is_Confirm_PUSH_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_PUSH_Label;
*zxwsf_is_Confirm_PUSH_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_PUSH_Value;
*zxwsf_is_Confirm_PUT_name = *Net::WSF::Rawc::zxwsf_is_Confirm_PUT_name;
*zxwsf_is_Confirm_PUT_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_PUT_Help;
*zxwsf_is_Confirm_PUT_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_PUT_Hint;
*zxwsf_is_Confirm_PUT_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_PUT_Label;
*zxwsf_is_Confirm_PUT_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_PUT_Value;
*zxwsf_is_Confirm_ADD_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_ADD_Help;
*zxwsf_is_Confirm_ADD_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_ADD_Hint;
*zxwsf_is_Confirm_ADD_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_ADD_Label;
*zxwsf_is_Confirm_ADD_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_ADD_Value;
*zxwsf_is_Confirm_DEL_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_DEL_Help;
*zxwsf_is_Confirm_DEL_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_DEL_Hint;
*zxwsf_is_Confirm_DEL_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_DEL_Label;
*zxwsf_is_Confirm_DEL_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_DEL_Value;
*zxwsf_is_Confirm_REV_Help = *Net::WSF::Rawc::zxwsf_is_Confirm_REV_Help;
*zxwsf_is_Confirm_REV_Hint = *Net::WSF::Rawc::zxwsf_is_Confirm_REV_Hint;
*zxwsf_is_Confirm_REV_Label = *Net::WSF::Rawc::zxwsf_is_Confirm_REV_Label;
*zxwsf_is_Confirm_REV_Value = *Net::WSF::Rawc::zxwsf_is_Confirm_REV_Value;
*zxwsf_DEC_is_Help = *Net::WSF::Rawc::zxwsf_DEC_is_Help;
*zxwsf_NEW_is_Help = *Net::WSF::Rawc::zxwsf_NEW_is_Help;
*zxwsf_DEEP_CLONE_is_Help = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Help;
*zxwsf_DUP_STRS_is_Help = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Help;
*zxwsf_FREE_is_Help = *Net::WSF::Rawc::zxwsf_FREE_is_Help;
*zxwsf_WALK_SO_is_Help = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Help;
*zxwsf_WALK_WO_is_Help = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Help;
*zxwsf_LEN_is_Help = *Net::WSF::Rawc::zxwsf_LEN_is_Help;
*zxwsf_ENC_SO_is_Help = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Help;
*zxwsf_ENC_WO_is_Help = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Help;
*zxwsf_EASY_ENC_SO_is_Help = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Help;
*zxwsf_EASY_ENC_WO_is_Help = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Help;
*zxwsf_is_Help_GET_label = *Net::WSF::Rawc::zxwsf_is_Help_GET_label;
*zxwsf_is_Help_GET_link = *Net::WSF::Rawc::zxwsf_is_Help_GET_link;
*zxwsf_is_Help_GET_moreLink = *Net::WSF::Rawc::zxwsf_is_Help_GET_moreLink;
*zxwsf_is_Help_PUT_label = *Net::WSF::Rawc::zxwsf_is_Help_PUT_label;
*zxwsf_is_Help_PUT_link = *Net::WSF::Rawc::zxwsf_is_Help_PUT_link;
*zxwsf_is_Help_PUT_moreLink = *Net::WSF::Rawc::zxwsf_is_Help_PUT_moreLink;
*zxwsf_DEC_is_Inquiry = *Net::WSF::Rawc::zxwsf_DEC_is_Inquiry;
*zxwsf_NEW_is_Inquiry = *Net::WSF::Rawc::zxwsf_NEW_is_Inquiry;
*zxwsf_DEEP_CLONE_is_Inquiry = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Inquiry;
*zxwsf_DUP_STRS_is_Inquiry = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Inquiry;
*zxwsf_FREE_is_Inquiry = *Net::WSF::Rawc::zxwsf_FREE_is_Inquiry;
*zxwsf_WALK_SO_is_Inquiry = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Inquiry;
*zxwsf_WALK_WO_is_Inquiry = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Inquiry;
*zxwsf_LEN_is_Inquiry = *Net::WSF::Rawc::zxwsf_LEN_is_Inquiry;
*zxwsf_ENC_SO_is_Inquiry = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Inquiry;
*zxwsf_ENC_WO_is_Inquiry = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Inquiry;
*zxwsf_EASY_ENC_SO_is_Inquiry = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Inquiry;
*zxwsf_EASY_ENC_WO_is_Inquiry = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Inquiry;
*zxwsf_is_Inquiry_GET_id = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_id;
*zxwsf_is_Inquiry_GET_title = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_title;
*zxwsf_is_Inquiry_GET_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_Help;
*zxwsf_is_Inquiry_GET_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_Select;
*zxwsf_is_Inquiry_GET_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_Confirm;
*zxwsf_is_Inquiry_GET_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_GET_Text;
*zxwsf_is_Inquiry_NUM_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_NUM_Help;
*zxwsf_is_Inquiry_NUM_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_NUM_Select;
*zxwsf_is_Inquiry_NUM_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_NUM_Confirm;
*zxwsf_is_Inquiry_NUM_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_NUM_Text;
*zxwsf_is_Inquiry_POP_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_POP_Help;
*zxwsf_is_Inquiry_POP_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_POP_Select;
*zxwsf_is_Inquiry_POP_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_POP_Confirm;
*zxwsf_is_Inquiry_POP_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_POP_Text;
*zxwsf_is_Inquiry_PUSH_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUSH_Help;
*zxwsf_is_Inquiry_PUSH_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUSH_Select;
*zxwsf_is_Inquiry_PUSH_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUSH_Confirm;
*zxwsf_is_Inquiry_PUSH_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUSH_Text;
*zxwsf_is_Inquiry_PUT_id = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_id;
*zxwsf_is_Inquiry_PUT_title = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_title;
*zxwsf_is_Inquiry_PUT_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_Help;
*zxwsf_is_Inquiry_PUT_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_Select;
*zxwsf_is_Inquiry_PUT_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_Confirm;
*zxwsf_is_Inquiry_PUT_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_PUT_Text;
*zxwsf_is_Inquiry_ADD_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_ADD_Help;
*zxwsf_is_Inquiry_ADD_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_ADD_Select;
*zxwsf_is_Inquiry_ADD_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_ADD_Confirm;
*zxwsf_is_Inquiry_ADD_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_ADD_Text;
*zxwsf_is_Inquiry_DEL_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_DEL_Help;
*zxwsf_is_Inquiry_DEL_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_DEL_Select;
*zxwsf_is_Inquiry_DEL_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_DEL_Confirm;
*zxwsf_is_Inquiry_DEL_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_DEL_Text;
*zxwsf_is_Inquiry_REV_Help = *Net::WSF::Rawc::zxwsf_is_Inquiry_REV_Help;
*zxwsf_is_Inquiry_REV_Select = *Net::WSF::Rawc::zxwsf_is_Inquiry_REV_Select;
*zxwsf_is_Inquiry_REV_Confirm = *Net::WSF::Rawc::zxwsf_is_Inquiry_REV_Confirm;
*zxwsf_is_Inquiry_REV_Text = *Net::WSF::Rawc::zxwsf_is_Inquiry_REV_Text;
*zxwsf_DEC_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_DEC_is_InteractionRequest;
*zxwsf_NEW_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_NEW_is_InteractionRequest;
*zxwsf_DEEP_CLONE_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_InteractionRequest;
*zxwsf_DUP_STRS_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_InteractionRequest;
*zxwsf_FREE_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_FREE_is_InteractionRequest;
*zxwsf_WALK_SO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_WALK_SO_is_InteractionRequest;
*zxwsf_WALK_WO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_WALK_WO_is_InteractionRequest;
*zxwsf_LEN_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_LEN_is_InteractionRequest;
*zxwsf_ENC_SO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_ENC_SO_is_InteractionRequest;
*zxwsf_ENC_WO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_ENC_WO_is_InteractionRequest;
*zxwsf_EASY_ENC_SO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_InteractionRequest;
*zxwsf_EASY_ENC_WO_is_InteractionRequest = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_InteractionRequest;
*zxwsf_is_InteractionRequest_GET_id = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_id;
*zxwsf_is_InteractionRequest_GET_language = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_language;
*zxwsf_is_InteractionRequest_GET_maxInteractTime = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_maxInteractTime;
*zxwsf_is_InteractionRequest_GET_signed_is_c_keyword = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_signed_is_c_keyword;
*zxwsf_is_InteractionRequest_GET_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_Inquiry;
*zxwsf_is_InteractionRequest_GET_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_GET_KeyInfo;
*zxwsf_is_InteractionRequest_NUM_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_NUM_Inquiry;
*zxwsf_is_InteractionRequest_NUM_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_NUM_KeyInfo;
*zxwsf_is_InteractionRequest_POP_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_POP_Inquiry;
*zxwsf_is_InteractionRequest_POP_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_POP_KeyInfo;
*zxwsf_is_InteractionRequest_PUSH_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUSH_Inquiry;
*zxwsf_is_InteractionRequest_PUSH_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUSH_KeyInfo;
*zxwsf_is_InteractionRequest_PUT_id = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_id;
*zxwsf_is_InteractionRequest_PUT_language = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_language;
*zxwsf_is_InteractionRequest_PUT_maxInteractTime = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_maxInteractTime;
*zxwsf_is_InteractionRequest_PUT_signed_is_c_keyword = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_signed_is_c_keyword;
*zxwsf_is_InteractionRequest_PUT_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_Inquiry;
*zxwsf_is_InteractionRequest_PUT_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_PUT_KeyInfo;
*zxwsf_is_InteractionRequest_ADD_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_ADD_Inquiry;
*zxwsf_is_InteractionRequest_ADD_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_ADD_KeyInfo;
*zxwsf_is_InteractionRequest_DEL_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_DEL_Inquiry;
*zxwsf_is_InteractionRequest_DEL_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_DEL_KeyInfo;
*zxwsf_is_InteractionRequest_REV_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_REV_Inquiry;
*zxwsf_is_InteractionRequest_REV_KeyInfo = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_REV_KeyInfo;
*zxwsf_DEC_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_DEC_is_InteractionResponse;
*zxwsf_NEW_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_NEW_is_InteractionResponse;
*zxwsf_DEEP_CLONE_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_InteractionResponse;
*zxwsf_DUP_STRS_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_InteractionResponse;
*zxwsf_FREE_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_FREE_is_InteractionResponse;
*zxwsf_WALK_SO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_WALK_SO_is_InteractionResponse;
*zxwsf_WALK_WO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_WALK_WO_is_InteractionResponse;
*zxwsf_LEN_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_LEN_is_InteractionResponse;
*zxwsf_ENC_SO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_ENC_SO_is_InteractionResponse;
*zxwsf_ENC_WO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_ENC_WO_is_InteractionResponse;
*zxwsf_EASY_ENC_SO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_InteractionResponse;
*zxwsf_EASY_ENC_WO_is_InteractionResponse = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_InteractionResponse;
*zxwsf_is_InteractionResponse_GET_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_GET_Status;
*zxwsf_is_InteractionResponse_GET_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_GET_InteractionStatement;
*zxwsf_is_InteractionResponse_GET_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_GET_Parameter;
*zxwsf_is_InteractionResponse_NUM_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_NUM_Status;
*zxwsf_is_InteractionResponse_NUM_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_NUM_InteractionStatement;
*zxwsf_is_InteractionResponse_NUM_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_NUM_Parameter;
*zxwsf_is_InteractionResponse_POP_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_POP_Status;
*zxwsf_is_InteractionResponse_POP_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_POP_InteractionStatement;
*zxwsf_is_InteractionResponse_POP_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_POP_Parameter;
*zxwsf_is_InteractionResponse_PUSH_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUSH_Status;
*zxwsf_is_InteractionResponse_PUSH_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUSH_InteractionStatement;
*zxwsf_is_InteractionResponse_PUSH_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUSH_Parameter;
*zxwsf_is_InteractionResponse_PUT_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUT_Status;
*zxwsf_is_InteractionResponse_PUT_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUT_InteractionStatement;
*zxwsf_is_InteractionResponse_PUT_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_PUT_Parameter;
*zxwsf_is_InteractionResponse_ADD_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_ADD_Status;
*zxwsf_is_InteractionResponse_ADD_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_ADD_InteractionStatement;
*zxwsf_is_InteractionResponse_ADD_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_ADD_Parameter;
*zxwsf_is_InteractionResponse_DEL_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_DEL_Status;
*zxwsf_is_InteractionResponse_DEL_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_DEL_InteractionStatement;
*zxwsf_is_InteractionResponse_DEL_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_DEL_Parameter;
*zxwsf_is_InteractionResponse_REV_Status = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_REV_Status;
*zxwsf_is_InteractionResponse_REV_InteractionStatement = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_REV_InteractionStatement;
*zxwsf_is_InteractionResponse_REV_Parameter = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_REV_Parameter;
*zxwsf_DEC_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_DEC_is_InteractionStatement;
*zxwsf_NEW_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_NEW_is_InteractionStatement;
*zxwsf_DEEP_CLONE_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_InteractionStatement;
*zxwsf_DUP_STRS_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_InteractionStatement;
*zxwsf_FREE_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_FREE_is_InteractionStatement;
*zxwsf_WALK_SO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_WALK_SO_is_InteractionStatement;
*zxwsf_WALK_WO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_WALK_WO_is_InteractionStatement;
*zxwsf_LEN_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_LEN_is_InteractionStatement;
*zxwsf_ENC_SO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_ENC_SO_is_InteractionStatement;
*zxwsf_ENC_WO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_ENC_WO_is_InteractionStatement;
*zxwsf_EASY_ENC_SO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_InteractionStatement;
*zxwsf_EASY_ENC_WO_is_InteractionStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_InteractionStatement;
*zxwsf_is_InteractionStatement_GET_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_GET_Inquiry;
*zxwsf_is_InteractionStatement_GET_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_GET_Signature;
*zxwsf_is_InteractionStatement_NUM_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_NUM_Inquiry;
*zxwsf_is_InteractionStatement_NUM_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_NUM_Signature;
*zxwsf_is_InteractionStatement_POP_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_POP_Inquiry;
*zxwsf_is_InteractionStatement_POP_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_POP_Signature;
*zxwsf_is_InteractionStatement_PUSH_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_PUSH_Inquiry;
*zxwsf_is_InteractionStatement_PUSH_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_PUSH_Signature;
*zxwsf_is_InteractionStatement_PUT_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_PUT_Inquiry;
*zxwsf_is_InteractionStatement_PUT_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_PUT_Signature;
*zxwsf_is_InteractionStatement_ADD_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_ADD_Inquiry;
*zxwsf_is_InteractionStatement_ADD_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_ADD_Signature;
*zxwsf_is_InteractionStatement_DEL_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_DEL_Inquiry;
*zxwsf_is_InteractionStatement_DEL_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_DEL_Signature;
*zxwsf_is_InteractionStatement_REV_Inquiry = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_REV_Inquiry;
*zxwsf_is_InteractionStatement_REV_Signature = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_REV_Signature;
*zxwsf_DEC_is_Item = *Net::WSF::Rawc::zxwsf_DEC_is_Item;
*zxwsf_NEW_is_Item = *Net::WSF::Rawc::zxwsf_NEW_is_Item;
*zxwsf_DEEP_CLONE_is_Item = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Item;
*zxwsf_DUP_STRS_is_Item = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Item;
*zxwsf_FREE_is_Item = *Net::WSF::Rawc::zxwsf_FREE_is_Item;
*zxwsf_WALK_SO_is_Item = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Item;
*zxwsf_WALK_WO_is_Item = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Item;
*zxwsf_LEN_is_Item = *Net::WSF::Rawc::zxwsf_LEN_is_Item;
*zxwsf_ENC_SO_is_Item = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Item;
*zxwsf_ENC_WO_is_Item = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Item;
*zxwsf_EASY_ENC_SO_is_Item = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Item;
*zxwsf_EASY_ENC_WO_is_Item = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Item;
*zxwsf_is_Item_GET_label = *Net::WSF::Rawc::zxwsf_is_Item_GET_label;
*zxwsf_is_Item_GET_value = *Net::WSF::Rawc::zxwsf_is_Item_GET_value;
*zxwsf_is_Item_GET_Hint = *Net::WSF::Rawc::zxwsf_is_Item_GET_Hint;
*zxwsf_is_Item_NUM_Hint = *Net::WSF::Rawc::zxwsf_is_Item_NUM_Hint;
*zxwsf_is_Item_POP_Hint = *Net::WSF::Rawc::zxwsf_is_Item_POP_Hint;
*zxwsf_is_Item_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is_Item_PUSH_Hint;
*zxwsf_is_Item_PUT_label = *Net::WSF::Rawc::zxwsf_is_Item_PUT_label;
*zxwsf_is_Item_PUT_value = *Net::WSF::Rawc::zxwsf_is_Item_PUT_value;
*zxwsf_is_Item_PUT_Hint = *Net::WSF::Rawc::zxwsf_is_Item_PUT_Hint;
*zxwsf_is_Item_ADD_Hint = *Net::WSF::Rawc::zxwsf_is_Item_ADD_Hint;
*zxwsf_is_Item_DEL_Hint = *Net::WSF::Rawc::zxwsf_is_Item_DEL_Hint;
*zxwsf_is_Item_REV_Hint = *Net::WSF::Rawc::zxwsf_is_Item_REV_Hint;
*zxwsf_DEC_is_Parameter = *Net::WSF::Rawc::zxwsf_DEC_is_Parameter;
*zxwsf_NEW_is_Parameter = *Net::WSF::Rawc::zxwsf_NEW_is_Parameter;
*zxwsf_DEEP_CLONE_is_Parameter = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Parameter;
*zxwsf_DUP_STRS_is_Parameter = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Parameter;
*zxwsf_FREE_is_Parameter = *Net::WSF::Rawc::zxwsf_FREE_is_Parameter;
*zxwsf_WALK_SO_is_Parameter = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Parameter;
*zxwsf_WALK_WO_is_Parameter = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Parameter;
*zxwsf_LEN_is_Parameter = *Net::WSF::Rawc::zxwsf_LEN_is_Parameter;
*zxwsf_ENC_SO_is_Parameter = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Parameter;
*zxwsf_ENC_WO_is_Parameter = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Parameter;
*zxwsf_EASY_ENC_SO_is_Parameter = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Parameter;
*zxwsf_EASY_ENC_WO_is_Parameter = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Parameter;
*zxwsf_is_Parameter_GET_name = *Net::WSF::Rawc::zxwsf_is_Parameter_GET_name;
*zxwsf_is_Parameter_GET_value = *Net::WSF::Rawc::zxwsf_is_Parameter_GET_value;
*zxwsf_is_Parameter_PUT_name = *Net::WSF::Rawc::zxwsf_is_Parameter_PUT_name;
*zxwsf_is_Parameter_PUT_value = *Net::WSF::Rawc::zxwsf_is_Parameter_PUT_value;
*zxwsf_DEC_is_Select = *Net::WSF::Rawc::zxwsf_DEC_is_Select;
*zxwsf_NEW_is_Select = *Net::WSF::Rawc::zxwsf_NEW_is_Select;
*zxwsf_DEEP_CLONE_is_Select = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Select;
*zxwsf_DUP_STRS_is_Select = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Select;
*zxwsf_FREE_is_Select = *Net::WSF::Rawc::zxwsf_FREE_is_Select;
*zxwsf_WALK_SO_is_Select = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Select;
*zxwsf_WALK_WO_is_Select = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Select;
*zxwsf_LEN_is_Select = *Net::WSF::Rawc::zxwsf_LEN_is_Select;
*zxwsf_ENC_SO_is_Select = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Select;
*zxwsf_ENC_WO_is_Select = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Select;
*zxwsf_EASY_ENC_SO_is_Select = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Select;
*zxwsf_EASY_ENC_WO_is_Select = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Select;
*zxwsf_is_Select_GET_name = *Net::WSF::Rawc::zxwsf_is_Select_GET_name;
*zxwsf_is_Select_GET_multiple = *Net::WSF::Rawc::zxwsf_is_Select_GET_multiple;
*zxwsf_is_Select_GET_Help = *Net::WSF::Rawc::zxwsf_is_Select_GET_Help;
*zxwsf_is_Select_GET_Hint = *Net::WSF::Rawc::zxwsf_is_Select_GET_Hint;
*zxwsf_is_Select_GET_Label = *Net::WSF::Rawc::zxwsf_is_Select_GET_Label;
*zxwsf_is_Select_GET_Value = *Net::WSF::Rawc::zxwsf_is_Select_GET_Value;
*zxwsf_is_Select_GET_Item = *Net::WSF::Rawc::zxwsf_is_Select_GET_Item;
*zxwsf_is_Select_NUM_Help = *Net::WSF::Rawc::zxwsf_is_Select_NUM_Help;
*zxwsf_is_Select_NUM_Hint = *Net::WSF::Rawc::zxwsf_is_Select_NUM_Hint;
*zxwsf_is_Select_NUM_Label = *Net::WSF::Rawc::zxwsf_is_Select_NUM_Label;
*zxwsf_is_Select_NUM_Value = *Net::WSF::Rawc::zxwsf_is_Select_NUM_Value;
*zxwsf_is_Select_NUM_Item = *Net::WSF::Rawc::zxwsf_is_Select_NUM_Item;
*zxwsf_is_Select_POP_Help = *Net::WSF::Rawc::zxwsf_is_Select_POP_Help;
*zxwsf_is_Select_POP_Hint = *Net::WSF::Rawc::zxwsf_is_Select_POP_Hint;
*zxwsf_is_Select_POP_Label = *Net::WSF::Rawc::zxwsf_is_Select_POP_Label;
*zxwsf_is_Select_POP_Value = *Net::WSF::Rawc::zxwsf_is_Select_POP_Value;
*zxwsf_is_Select_POP_Item = *Net::WSF::Rawc::zxwsf_is_Select_POP_Item;
*zxwsf_is_Select_PUSH_Help = *Net::WSF::Rawc::zxwsf_is_Select_PUSH_Help;
*zxwsf_is_Select_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is_Select_PUSH_Hint;
*zxwsf_is_Select_PUSH_Label = *Net::WSF::Rawc::zxwsf_is_Select_PUSH_Label;
*zxwsf_is_Select_PUSH_Value = *Net::WSF::Rawc::zxwsf_is_Select_PUSH_Value;
*zxwsf_is_Select_PUSH_Item = *Net::WSF::Rawc::zxwsf_is_Select_PUSH_Item;
*zxwsf_is_Select_PUT_name = *Net::WSF::Rawc::zxwsf_is_Select_PUT_name;
*zxwsf_is_Select_PUT_multiple = *Net::WSF::Rawc::zxwsf_is_Select_PUT_multiple;
*zxwsf_is_Select_PUT_Help = *Net::WSF::Rawc::zxwsf_is_Select_PUT_Help;
*zxwsf_is_Select_PUT_Hint = *Net::WSF::Rawc::zxwsf_is_Select_PUT_Hint;
*zxwsf_is_Select_PUT_Label = *Net::WSF::Rawc::zxwsf_is_Select_PUT_Label;
*zxwsf_is_Select_PUT_Value = *Net::WSF::Rawc::zxwsf_is_Select_PUT_Value;
*zxwsf_is_Select_PUT_Item = *Net::WSF::Rawc::zxwsf_is_Select_PUT_Item;
*zxwsf_is_Select_ADD_Help = *Net::WSF::Rawc::zxwsf_is_Select_ADD_Help;
*zxwsf_is_Select_ADD_Hint = *Net::WSF::Rawc::zxwsf_is_Select_ADD_Hint;
*zxwsf_is_Select_ADD_Label = *Net::WSF::Rawc::zxwsf_is_Select_ADD_Label;
*zxwsf_is_Select_ADD_Value = *Net::WSF::Rawc::zxwsf_is_Select_ADD_Value;
*zxwsf_is_Select_ADD_Item = *Net::WSF::Rawc::zxwsf_is_Select_ADD_Item;
*zxwsf_is_Select_DEL_Help = *Net::WSF::Rawc::zxwsf_is_Select_DEL_Help;
*zxwsf_is_Select_DEL_Hint = *Net::WSF::Rawc::zxwsf_is_Select_DEL_Hint;
*zxwsf_is_Select_DEL_Label = *Net::WSF::Rawc::zxwsf_is_Select_DEL_Label;
*zxwsf_is_Select_DEL_Value = *Net::WSF::Rawc::zxwsf_is_Select_DEL_Value;
*zxwsf_is_Select_DEL_Item = *Net::WSF::Rawc::zxwsf_is_Select_DEL_Item;
*zxwsf_is_Select_REV_Help = *Net::WSF::Rawc::zxwsf_is_Select_REV_Help;
*zxwsf_is_Select_REV_Hint = *Net::WSF::Rawc::zxwsf_is_Select_REV_Hint;
*zxwsf_is_Select_REV_Label = *Net::WSF::Rawc::zxwsf_is_Select_REV_Label;
*zxwsf_is_Select_REV_Value = *Net::WSF::Rawc::zxwsf_is_Select_REV_Value;
*zxwsf_is_Select_REV_Item = *Net::WSF::Rawc::zxwsf_is_Select_REV_Item;
*zxwsf_DEC_is_Text = *Net::WSF::Rawc::zxwsf_DEC_is_Text;
*zxwsf_NEW_is_Text = *Net::WSF::Rawc::zxwsf_NEW_is_Text;
*zxwsf_DEEP_CLONE_is_Text = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_is_Text;
*zxwsf_DUP_STRS_is_Text = *Net::WSF::Rawc::zxwsf_DUP_STRS_is_Text;
*zxwsf_FREE_is_Text = *Net::WSF::Rawc::zxwsf_FREE_is_Text;
*zxwsf_WALK_SO_is_Text = *Net::WSF::Rawc::zxwsf_WALK_SO_is_Text;
*zxwsf_WALK_WO_is_Text = *Net::WSF::Rawc::zxwsf_WALK_WO_is_Text;
*zxwsf_LEN_is_Text = *Net::WSF::Rawc::zxwsf_LEN_is_Text;
*zxwsf_ENC_SO_is_Text = *Net::WSF::Rawc::zxwsf_ENC_SO_is_Text;
*zxwsf_ENC_WO_is_Text = *Net::WSF::Rawc::zxwsf_ENC_WO_is_Text;
*zxwsf_EASY_ENC_SO_is_Text = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_is_Text;
*zxwsf_EASY_ENC_WO_is_Text = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_is_Text;
*zxwsf_is_Text_GET_name = *Net::WSF::Rawc::zxwsf_is_Text_GET_name;
*zxwsf_is_Text_GET_minChars = *Net::WSF::Rawc::zxwsf_is_Text_GET_minChars;
*zxwsf_is_Text_GET_maxChars = *Net::WSF::Rawc::zxwsf_is_Text_GET_maxChars;
*zxwsf_is_Text_GET_format = *Net::WSF::Rawc::zxwsf_is_Text_GET_format;
*zxwsf_is_Text_GET_Help = *Net::WSF::Rawc::zxwsf_is_Text_GET_Help;
*zxwsf_is_Text_GET_Hint = *Net::WSF::Rawc::zxwsf_is_Text_GET_Hint;
*zxwsf_is_Text_GET_Label = *Net::WSF::Rawc::zxwsf_is_Text_GET_Label;
*zxwsf_is_Text_GET_Value = *Net::WSF::Rawc::zxwsf_is_Text_GET_Value;
*zxwsf_is_Text_NUM_Help = *Net::WSF::Rawc::zxwsf_is_Text_NUM_Help;
*zxwsf_is_Text_NUM_Hint = *Net::WSF::Rawc::zxwsf_is_Text_NUM_Hint;
*zxwsf_is_Text_NUM_Label = *Net::WSF::Rawc::zxwsf_is_Text_NUM_Label;
*zxwsf_is_Text_NUM_Value = *Net::WSF::Rawc::zxwsf_is_Text_NUM_Value;
*zxwsf_is_Text_POP_Help = *Net::WSF::Rawc::zxwsf_is_Text_POP_Help;
*zxwsf_is_Text_POP_Hint = *Net::WSF::Rawc::zxwsf_is_Text_POP_Hint;
*zxwsf_is_Text_POP_Label = *Net::WSF::Rawc::zxwsf_is_Text_POP_Label;
*zxwsf_is_Text_POP_Value = *Net::WSF::Rawc::zxwsf_is_Text_POP_Value;
*zxwsf_is_Text_PUSH_Help = *Net::WSF::Rawc::zxwsf_is_Text_PUSH_Help;
*zxwsf_is_Text_PUSH_Hint = *Net::WSF::Rawc::zxwsf_is_Text_PUSH_Hint;
*zxwsf_is_Text_PUSH_Label = *Net::WSF::Rawc::zxwsf_is_Text_PUSH_Label;
*zxwsf_is_Text_PUSH_Value = *Net::WSF::Rawc::zxwsf_is_Text_PUSH_Value;
*zxwsf_is_Text_PUT_name = *Net::WSF::Rawc::zxwsf_is_Text_PUT_name;
*zxwsf_is_Text_PUT_minChars = *Net::WSF::Rawc::zxwsf_is_Text_PUT_minChars;
*zxwsf_is_Text_PUT_maxChars = *Net::WSF::Rawc::zxwsf_is_Text_PUT_maxChars;
*zxwsf_is_Text_PUT_format = *Net::WSF::Rawc::zxwsf_is_Text_PUT_format;
*zxwsf_is_Text_PUT_Help = *Net::WSF::Rawc::zxwsf_is_Text_PUT_Help;
*zxwsf_is_Text_PUT_Hint = *Net::WSF::Rawc::zxwsf_is_Text_PUT_Hint;
*zxwsf_is_Text_PUT_Label = *Net::WSF::Rawc::zxwsf_is_Text_PUT_Label;
*zxwsf_is_Text_PUT_Value = *Net::WSF::Rawc::zxwsf_is_Text_PUT_Value;
*zxwsf_is_Text_ADD_Help = *Net::WSF::Rawc::zxwsf_is_Text_ADD_Help;
*zxwsf_is_Text_ADD_Hint = *Net::WSF::Rawc::zxwsf_is_Text_ADD_Hint;
*zxwsf_is_Text_ADD_Label = *Net::WSF::Rawc::zxwsf_is_Text_ADD_Label;
*zxwsf_is_Text_ADD_Value = *Net::WSF::Rawc::zxwsf_is_Text_ADD_Value;
*zxwsf_is_Text_DEL_Help = *Net::WSF::Rawc::zxwsf_is_Text_DEL_Help;
*zxwsf_is_Text_DEL_Hint = *Net::WSF::Rawc::zxwsf_is_Text_DEL_Hint;
*zxwsf_is_Text_DEL_Label = *Net::WSF::Rawc::zxwsf_is_Text_DEL_Label;
*zxwsf_is_Text_DEL_Value = *Net::WSF::Rawc::zxwsf_is_Text_DEL_Value;
*zxwsf_is_Text_REV_Help = *Net::WSF::Rawc::zxwsf_is_Text_REV_Help;
*zxwsf_is_Text_REV_Hint = *Net::WSF::Rawc::zxwsf_is_Text_REV_Hint;
*zxwsf_is_Text_REV_Label = *Net::WSF::Rawc::zxwsf_is_Text_REV_Label;
*zxwsf_is_Text_REV_Value = *Net::WSF::Rawc::zxwsf_is_Text_REV_Value;
*zxwsf_DEC_lu_Extension = *Net::WSF::Rawc::zxwsf_DEC_lu_Extension;
*zxwsf_NEW_lu_Extension = *Net::WSF::Rawc::zxwsf_NEW_lu_Extension;
*zxwsf_DEEP_CLONE_lu_Extension = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_lu_Extension;
*zxwsf_DUP_STRS_lu_Extension = *Net::WSF::Rawc::zxwsf_DUP_STRS_lu_Extension;
*zxwsf_FREE_lu_Extension = *Net::WSF::Rawc::zxwsf_FREE_lu_Extension;
*zxwsf_WALK_SO_lu_Extension = *Net::WSF::Rawc::zxwsf_WALK_SO_lu_Extension;
*zxwsf_WALK_WO_lu_Extension = *Net::WSF::Rawc::zxwsf_WALK_WO_lu_Extension;
*zxwsf_LEN_lu_Extension = *Net::WSF::Rawc::zxwsf_LEN_lu_Extension;
*zxwsf_ENC_SO_lu_Extension = *Net::WSF::Rawc::zxwsf_ENC_SO_lu_Extension;
*zxwsf_ENC_WO_lu_Extension = *Net::WSF::Rawc::zxwsf_ENC_WO_lu_Extension;
*zxwsf_EASY_ENC_SO_lu_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_lu_Extension;
*zxwsf_EASY_ENC_WO_lu_Extension = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_lu_Extension;
*zxwsf_DEC_lu_Status = *Net::WSF::Rawc::zxwsf_DEC_lu_Status;
*zxwsf_NEW_lu_Status = *Net::WSF::Rawc::zxwsf_NEW_lu_Status;
*zxwsf_DEEP_CLONE_lu_Status = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_lu_Status;
*zxwsf_DUP_STRS_lu_Status = *Net::WSF::Rawc::zxwsf_DUP_STRS_lu_Status;
*zxwsf_FREE_lu_Status = *Net::WSF::Rawc::zxwsf_FREE_lu_Status;
*zxwsf_WALK_SO_lu_Status = *Net::WSF::Rawc::zxwsf_WALK_SO_lu_Status;
*zxwsf_WALK_WO_lu_Status = *Net::WSF::Rawc::zxwsf_WALK_WO_lu_Status;
*zxwsf_LEN_lu_Status = *Net::WSF::Rawc::zxwsf_LEN_lu_Status;
*zxwsf_ENC_SO_lu_Status = *Net::WSF::Rawc::zxwsf_ENC_SO_lu_Status;
*zxwsf_ENC_WO_lu_Status = *Net::WSF::Rawc::zxwsf_ENC_WO_lu_Status;
*zxwsf_EASY_ENC_SO_lu_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_lu_Status;
*zxwsf_EASY_ENC_WO_lu_Status = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_lu_Status;
*zxwsf_lu_Status_GET_code = *Net::WSF::Rawc::zxwsf_lu_Status_GET_code;
*zxwsf_lu_Status_GET_ref = *Net::WSF::Rawc::zxwsf_lu_Status_GET_ref;
*zxwsf_lu_Status_GET_comment = *Net::WSF::Rawc::zxwsf_lu_Status_GET_comment;
*zxwsf_lu_Status_GET_Status = *Net::WSF::Rawc::zxwsf_lu_Status_GET_Status;
*zxwsf_lu_Status_NUM_Status = *Net::WSF::Rawc::zxwsf_lu_Status_NUM_Status;
*zxwsf_lu_Status_POP_Status = *Net::WSF::Rawc::zxwsf_lu_Status_POP_Status;
*zxwsf_lu_Status_PUSH_Status = *Net::WSF::Rawc::zxwsf_lu_Status_PUSH_Status;
*zxwsf_lu_Status_PUT_code = *Net::WSF::Rawc::zxwsf_lu_Status_PUT_code;
*zxwsf_lu_Status_PUT_ref = *Net::WSF::Rawc::zxwsf_lu_Status_PUT_ref;
*zxwsf_lu_Status_PUT_comment = *Net::WSF::Rawc::zxwsf_lu_Status_PUT_comment;
*zxwsf_lu_Status_PUT_Status = *Net::WSF::Rawc::zxwsf_lu_Status_PUT_Status;
*zxwsf_lu_Status_ADD_Status = *Net::WSF::Rawc::zxwsf_lu_Status_ADD_Status;
*zxwsf_lu_Status_DEL_Status = *Net::WSF::Rawc::zxwsf_lu_Status_DEL_Status;
*zxwsf_lu_Status_REV_Status = *Net::WSF::Rawc::zxwsf_lu_Status_REV_Status;
*zxwsf_DEC_lu_TestResult = *Net::WSF::Rawc::zxwsf_DEC_lu_TestResult;
*zxwsf_NEW_lu_TestResult = *Net::WSF::Rawc::zxwsf_NEW_lu_TestResult;
*zxwsf_DEEP_CLONE_lu_TestResult = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_lu_TestResult;
*zxwsf_DUP_STRS_lu_TestResult = *Net::WSF::Rawc::zxwsf_DUP_STRS_lu_TestResult;
*zxwsf_FREE_lu_TestResult = *Net::WSF::Rawc::zxwsf_FREE_lu_TestResult;
*zxwsf_WALK_SO_lu_TestResult = *Net::WSF::Rawc::zxwsf_WALK_SO_lu_TestResult;
*zxwsf_WALK_WO_lu_TestResult = *Net::WSF::Rawc::zxwsf_WALK_WO_lu_TestResult;
*zxwsf_LEN_lu_TestResult = *Net::WSF::Rawc::zxwsf_LEN_lu_TestResult;
*zxwsf_ENC_SO_lu_TestResult = *Net::WSF::Rawc::zxwsf_ENC_SO_lu_TestResult;
*zxwsf_ENC_WO_lu_TestResult = *Net::WSF::Rawc::zxwsf_ENC_WO_lu_TestResult;
*zxwsf_EASY_ENC_SO_lu_TestResult = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_lu_TestResult;
*zxwsf_EASY_ENC_WO_lu_TestResult = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_lu_TestResult;
*zxwsf_lu_TestResult_GET_itemIDRef = *Net::WSF::Rawc::zxwsf_lu_TestResult_GET_itemIDRef;
*zxwsf_lu_TestResult_PUT_itemIDRef = *Net::WSF::Rawc::zxwsf_lu_TestResult_PUT_itemIDRef;
*zxwsf_DEC_sbf_Framework = *Net::WSF::Rawc::zxwsf_DEC_sbf_Framework;
*zxwsf_NEW_sbf_Framework = *Net::WSF::Rawc::zxwsf_NEW_sbf_Framework;
*zxwsf_DEEP_CLONE_sbf_Framework = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sbf_Framework;
*zxwsf_DUP_STRS_sbf_Framework = *Net::WSF::Rawc::zxwsf_DUP_STRS_sbf_Framework;
*zxwsf_FREE_sbf_Framework = *Net::WSF::Rawc::zxwsf_FREE_sbf_Framework;
*zxwsf_WALK_SO_sbf_Framework = *Net::WSF::Rawc::zxwsf_WALK_SO_sbf_Framework;
*zxwsf_WALK_WO_sbf_Framework = *Net::WSF::Rawc::zxwsf_WALK_WO_sbf_Framework;
*zxwsf_LEN_sbf_Framework = *Net::WSF::Rawc::zxwsf_LEN_sbf_Framework;
*zxwsf_ENC_SO_sbf_Framework = *Net::WSF::Rawc::zxwsf_ENC_SO_sbf_Framework;
*zxwsf_ENC_WO_sbf_Framework = *Net::WSF::Rawc::zxwsf_ENC_WO_sbf_Framework;
*zxwsf_EASY_ENC_SO_sbf_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sbf_Framework;
*zxwsf_EASY_ENC_WO_sbf_Framework = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sbf_Framework;
*zxwsf_sbf_Framework_GET_version = *Net::WSF::Rawc::zxwsf_sbf_Framework_GET_version;
*zxwsf_sbf_Framework_PUT_version = *Net::WSF::Rawc::zxwsf_sbf_Framework_PUT_version;
*zxwsf_DEC_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_DEC_sec12_ProxyInfoConfirmationData;
*zxwsf_NEW_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_NEW_sec12_ProxyInfoConfirmationData;
*zxwsf_DEEP_CLONE_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec12_ProxyInfoConfirmationData;
*zxwsf_DUP_STRS_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec12_ProxyInfoConfirmationData;
*zxwsf_FREE_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_FREE_sec12_ProxyInfoConfirmationData;
*zxwsf_WALK_SO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_WALK_SO_sec12_ProxyInfoConfirmationData;
*zxwsf_WALK_WO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_WALK_WO_sec12_ProxyInfoConfirmationData;
*zxwsf_LEN_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_LEN_sec12_ProxyInfoConfirmationData;
*zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_ENC_SO_sec12_ProxyInfoConfirmationData;
*zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_ENC_WO_sec12_ProxyInfoConfirmationData;
*zxwsf_EASY_ENC_SO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec12_ProxyInfoConfirmationData;
*zxwsf_EASY_ENC_WO_sec12_ProxyInfoConfirmationData = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec12_ProxyInfoConfirmationData;
*zxwsf_sec12_ProxyInfoConfirmationData_GET_id = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_GET_id;
*zxwsf_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_GET_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_GET_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_GET_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_GET_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_GET_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_GET_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_GET_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_NUM_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_NUM_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_NUM_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_NUM_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_NUM_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_NUM_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_NUM_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_POP_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_POP_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_POP_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_POP_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_POP_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_POP_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_POP_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUSH_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUSH_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUSH_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_PUT_id = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUT_id;
*zxwsf_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUT_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_PUT_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUT_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_PUT_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUT_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_PUT_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_PUT_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_ADD_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_ADD_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_ADD_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_ADD_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_ADD_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_ADD_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_ADD_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_DEL_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_DEL_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_DEL_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_DEL_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_DEL_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_DEL_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_DEL_Signature;
*zxwsf_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_REV_AssertionIDReference;
*zxwsf_sec12_ProxyInfoConfirmationData_REV_Issuer = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_REV_Issuer;
*zxwsf_sec12_ProxyInfoConfirmationData_REV_IssueInstant = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_REV_IssueInstant;
*zxwsf_sec12_ProxyInfoConfirmationData_REV_Signature = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_REV_Signature;
*zxwsf_DEC_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_DEC_sec12_ResourceAccessStatement;
*zxwsf_NEW_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_NEW_sec12_ResourceAccessStatement;
*zxwsf_DEEP_CLONE_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec12_ResourceAccessStatement;
*zxwsf_DUP_STRS_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec12_ResourceAccessStatement;
*zxwsf_FREE_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_FREE_sec12_ResourceAccessStatement;
*zxwsf_WALK_SO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_WALK_SO_sec12_ResourceAccessStatement;
*zxwsf_WALK_WO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_WALK_WO_sec12_ResourceAccessStatement;
*zxwsf_LEN_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_LEN_sec12_ResourceAccessStatement;
*zxwsf_ENC_SO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_ENC_SO_sec12_ResourceAccessStatement;
*zxwsf_ENC_WO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_ENC_WO_sec12_ResourceAccessStatement;
*zxwsf_EASY_ENC_SO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec12_ResourceAccessStatement;
*zxwsf_EASY_ENC_WO_sec12_ResourceAccessStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec12_ResourceAccessStatement;
*zxwsf_sec12_ResourceAccessStatement_GET_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_GET_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_GET_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_GET_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_NUM_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_NUM_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_NUM_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_NUM_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_POP_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_POP_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_POP_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_POP_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_PUSH_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_PUSH_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_PUSH_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_PUSH_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_PUT_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_PUT_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_PUT_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_PUT_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_ADD_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_ADD_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_ADD_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_ADD_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_DEL_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_DEL_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_DEL_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_DEL_SessionContext;
*zxwsf_sec12_ResourceAccessStatement_REV_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_REV_ProxySubject;
*zxwsf_sec12_ResourceAccessStatement_REV_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_REV_SessionContext;
*zxwsf_DEC_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_DEC_sec12_SessionContext;
*zxwsf_NEW_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_NEW_sec12_SessionContext;
*zxwsf_DEEP_CLONE_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec12_SessionContext;
*zxwsf_DUP_STRS_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec12_SessionContext;
*zxwsf_FREE_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_FREE_sec12_SessionContext;
*zxwsf_WALK_SO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_WALK_SO_sec12_SessionContext;
*zxwsf_WALK_WO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_WALK_WO_sec12_SessionContext;
*zxwsf_LEN_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_LEN_sec12_SessionContext;
*zxwsf_ENC_SO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_ENC_SO_sec12_SessionContext;
*zxwsf_ENC_WO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_ENC_WO_sec12_SessionContext;
*zxwsf_EASY_ENC_SO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec12_SessionContext;
*zxwsf_EASY_ENC_WO_sec12_SessionContext = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec12_SessionContext;
*zxwsf_sec12_SessionContext_GET_SessionIndex = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_SessionIndex;
*zxwsf_sec12_SessionContext_GET_AuthenticationInstant = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_AuthenticationInstant;
*zxwsf_sec12_SessionContext_GET_AssertionIssueInstant = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_AssertionIssueInstant;
*zxwsf_sec12_SessionContext_GET_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_SessionSubject;
*zxwsf_sec12_SessionContext_GET_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_ProviderID;
*zxwsf_sec12_SessionContext_GET_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_GET_RequestAuthnContext;
*zxwsf_sec12_SessionContext_NUM_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_NUM_SessionSubject;
*zxwsf_sec12_SessionContext_NUM_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_NUM_ProviderID;
*zxwsf_sec12_SessionContext_NUM_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_NUM_RequestAuthnContext;
*zxwsf_sec12_SessionContext_POP_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_POP_SessionSubject;
*zxwsf_sec12_SessionContext_POP_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_POP_ProviderID;
*zxwsf_sec12_SessionContext_POP_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_POP_RequestAuthnContext;
*zxwsf_sec12_SessionContext_PUSH_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUSH_SessionSubject;
*zxwsf_sec12_SessionContext_PUSH_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUSH_ProviderID;
*zxwsf_sec12_SessionContext_PUSH_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUSH_RequestAuthnContext;
*zxwsf_sec12_SessionContext_PUT_SessionIndex = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_SessionIndex;
*zxwsf_sec12_SessionContext_PUT_AuthenticationInstant = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_AuthenticationInstant;
*zxwsf_sec12_SessionContext_PUT_AssertionIssueInstant = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_AssertionIssueInstant;
*zxwsf_sec12_SessionContext_PUT_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_SessionSubject;
*zxwsf_sec12_SessionContext_PUT_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_ProviderID;
*zxwsf_sec12_SessionContext_PUT_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_PUT_RequestAuthnContext;
*zxwsf_sec12_SessionContext_ADD_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_ADD_SessionSubject;
*zxwsf_sec12_SessionContext_ADD_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_ADD_ProviderID;
*zxwsf_sec12_SessionContext_ADD_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_ADD_RequestAuthnContext;
*zxwsf_sec12_SessionContext_DEL_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_DEL_SessionSubject;
*zxwsf_sec12_SessionContext_DEL_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_DEL_ProviderID;
*zxwsf_sec12_SessionContext_DEL_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_DEL_RequestAuthnContext;
*zxwsf_sec12_SessionContext_REV_SessionSubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_REV_SessionSubject;
*zxwsf_sec12_SessionContext_REV_ProviderID = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_REV_ProviderID;
*zxwsf_sec12_SessionContext_REV_RequestAuthnContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_REV_RequestAuthnContext;
*zxwsf_DEC_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_DEC_sec12_SessionContextStatement;
*zxwsf_NEW_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_NEW_sec12_SessionContextStatement;
*zxwsf_DEEP_CLONE_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec12_SessionContextStatement;
*zxwsf_DUP_STRS_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec12_SessionContextStatement;
*zxwsf_FREE_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_FREE_sec12_SessionContextStatement;
*zxwsf_WALK_SO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_WALK_SO_sec12_SessionContextStatement;
*zxwsf_WALK_WO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_WALK_WO_sec12_SessionContextStatement;
*zxwsf_LEN_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_LEN_sec12_SessionContextStatement;
*zxwsf_ENC_SO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_ENC_SO_sec12_SessionContextStatement;
*zxwsf_ENC_WO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_ENC_WO_sec12_SessionContextStatement;
*zxwsf_EASY_ENC_SO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec12_SessionContextStatement;
*zxwsf_EASY_ENC_WO_sec12_SessionContextStatement = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec12_SessionContextStatement;
*zxwsf_sec12_SessionContextStatement_GET_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_GET_ProxySubject;
*zxwsf_sec12_SessionContextStatement_GET_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_GET_SessionContext;
*zxwsf_sec12_SessionContextStatement_NUM_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_NUM_ProxySubject;
*zxwsf_sec12_SessionContextStatement_NUM_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_NUM_SessionContext;
*zxwsf_sec12_SessionContextStatement_POP_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_POP_ProxySubject;
*zxwsf_sec12_SessionContextStatement_POP_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_POP_SessionContext;
*zxwsf_sec12_SessionContextStatement_PUSH_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_PUSH_ProxySubject;
*zxwsf_sec12_SessionContextStatement_PUSH_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_PUSH_SessionContext;
*zxwsf_sec12_SessionContextStatement_PUT_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_PUT_ProxySubject;
*zxwsf_sec12_SessionContextStatement_PUT_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_PUT_SessionContext;
*zxwsf_sec12_SessionContextStatement_ADD_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_ADD_ProxySubject;
*zxwsf_sec12_SessionContextStatement_ADD_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_ADD_SessionContext;
*zxwsf_sec12_SessionContextStatement_DEL_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_DEL_ProxySubject;
*zxwsf_sec12_SessionContextStatement_DEL_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_DEL_SessionContext;
*zxwsf_sec12_SessionContextStatement_REV_ProxySubject = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_REV_ProxySubject;
*zxwsf_sec12_SessionContextStatement_REV_SessionContext = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_REV_SessionContext;
*zxwsf_DEC_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_DEC_sec12_ValidityRestrictionCondition;
*zxwsf_NEW_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_NEW_sec12_ValidityRestrictionCondition;
*zxwsf_DEEP_CLONE_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec12_ValidityRestrictionCondition;
*zxwsf_DUP_STRS_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec12_ValidityRestrictionCondition;
*zxwsf_FREE_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_FREE_sec12_ValidityRestrictionCondition;
*zxwsf_WALK_SO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_WALK_SO_sec12_ValidityRestrictionCondition;
*zxwsf_WALK_WO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_WALK_WO_sec12_ValidityRestrictionCondition;
*zxwsf_LEN_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_LEN_sec12_ValidityRestrictionCondition;
*zxwsf_ENC_SO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_ENC_SO_sec12_ValidityRestrictionCondition;
*zxwsf_ENC_WO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_ENC_WO_sec12_ValidityRestrictionCondition;
*zxwsf_EASY_ENC_SO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec12_ValidityRestrictionCondition;
*zxwsf_EASY_ENC_WO_sec12_ValidityRestrictionCondition = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec12_ValidityRestrictionCondition;
*zxwsf_sec12_ValidityRestrictionCondition_GET_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_GET_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_NUM_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_NUM_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_POP_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_POP_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_PUSH_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_PUT_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_PUT_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_ADD_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_ADD_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_DEL_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_DEL_NumberOfUses;
*zxwsf_sec12_ValidityRestrictionCondition_REV_NumberOfUses = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_REV_NumberOfUses;
*zxwsf_DEC_sec_Token = *Net::WSF::Rawc::zxwsf_DEC_sec_Token;
*zxwsf_NEW_sec_Token = *Net::WSF::Rawc::zxwsf_NEW_sec_Token;
*zxwsf_DEEP_CLONE_sec_Token = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec_Token;
*zxwsf_DUP_STRS_sec_Token = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec_Token;
*zxwsf_FREE_sec_Token = *Net::WSF::Rawc::zxwsf_FREE_sec_Token;
*zxwsf_WALK_SO_sec_Token = *Net::WSF::Rawc::zxwsf_WALK_SO_sec_Token;
*zxwsf_WALK_WO_sec_Token = *Net::WSF::Rawc::zxwsf_WALK_WO_sec_Token;
*zxwsf_LEN_sec_Token = *Net::WSF::Rawc::zxwsf_LEN_sec_Token;
*zxwsf_ENC_SO_sec_Token = *Net::WSF::Rawc::zxwsf_ENC_SO_sec_Token;
*zxwsf_ENC_WO_sec_Token = *Net::WSF::Rawc::zxwsf_ENC_WO_sec_Token;
*zxwsf_EASY_ENC_SO_sec_Token = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec_Token;
*zxwsf_EASY_ENC_WO_sec_Token = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec_Token;
*zxwsf_sec_Token_GET_id = *Net::WSF::Rawc::zxwsf_sec_Token_GET_id;
*zxwsf_sec_Token_GET_ref = *Net::WSF::Rawc::zxwsf_sec_Token_GET_ref;
*zxwsf_sec_Token_GET_usage = *Net::WSF::Rawc::zxwsf_sec_Token_GET_usage;
*zxwsf_sec_Token_PUT_id = *Net::WSF::Rawc::zxwsf_sec_Token_PUT_id;
*zxwsf_sec_Token_PUT_ref = *Net::WSF::Rawc::zxwsf_sec_Token_PUT_ref;
*zxwsf_sec_Token_PUT_usage = *Net::WSF::Rawc::zxwsf_sec_Token_PUT_usage;
*zxwsf_DEC_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_DEC_sec_TokenPolicy;
*zxwsf_NEW_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_NEW_sec_TokenPolicy;
*zxwsf_DEEP_CLONE_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec_TokenPolicy;
*zxwsf_DUP_STRS_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec_TokenPolicy;
*zxwsf_FREE_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_FREE_sec_TokenPolicy;
*zxwsf_WALK_SO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_WALK_SO_sec_TokenPolicy;
*zxwsf_WALK_WO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_WALK_WO_sec_TokenPolicy;
*zxwsf_LEN_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_LEN_sec_TokenPolicy;
*zxwsf_ENC_SO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_ENC_SO_sec_TokenPolicy;
*zxwsf_ENC_WO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_ENC_WO_sec_TokenPolicy;
*zxwsf_EASY_ENC_SO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec_TokenPolicy;
*zxwsf_EASY_ENC_WO_sec_TokenPolicy = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec_TokenPolicy;
*zxwsf_sec_TokenPolicy_GET_validUntil = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_GET_validUntil;
*zxwsf_sec_TokenPolicy_GET_issueTo = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_GET_issueTo;
*zxwsf_sec_TokenPolicy_GET_type = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_GET_type;
*zxwsf_sec_TokenPolicy_GET_wantDSEPR = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_GET_wantDSEPR;
*zxwsf_sec_TokenPolicy_PUT_validUntil = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_PUT_validUntil;
*zxwsf_sec_TokenPolicy_PUT_issueTo = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_PUT_issueTo;
*zxwsf_sec_TokenPolicy_PUT_type = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_PUT_type;
*zxwsf_sec_TokenPolicy_PUT_wantDSEPR = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_PUT_wantDSEPR;
*zxwsf_DEC_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_DEC_sec_TransitedProvider;
*zxwsf_NEW_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_NEW_sec_TransitedProvider;
*zxwsf_DEEP_CLONE_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec_TransitedProvider;
*zxwsf_DUP_STRS_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec_TransitedProvider;
*zxwsf_FREE_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_FREE_sec_TransitedProvider;
*zxwsf_WALK_SO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_WALK_SO_sec_TransitedProvider;
*zxwsf_WALK_WO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_WALK_WO_sec_TransitedProvider;
*zxwsf_LEN_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_LEN_sec_TransitedProvider;
*zxwsf_ENC_SO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_ENC_SO_sec_TransitedProvider;
*zxwsf_ENC_WO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_ENC_WO_sec_TransitedProvider;
*zxwsf_EASY_ENC_SO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec_TransitedProvider;
*zxwsf_EASY_ENC_WO_sec_TransitedProvider = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec_TransitedProvider;
*zxwsf_sec_TransitedProvider_GET_timeStamp = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_GET_timeStamp;
*zxwsf_sec_TransitedProvider_GET_confirmationURI = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_GET_confirmationURI;
*zxwsf_sec_TransitedProvider_PUT_timeStamp = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_PUT_timeStamp;
*zxwsf_sec_TransitedProvider_PUT_confirmationURI = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_PUT_confirmationURI;
*zxwsf_DEC_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_DEC_sec_TransitedProviderPath;
*zxwsf_NEW_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_NEW_sec_TransitedProviderPath;
*zxwsf_DEEP_CLONE_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_sec_TransitedProviderPath;
*zxwsf_DUP_STRS_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_DUP_STRS_sec_TransitedProviderPath;
*zxwsf_FREE_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_FREE_sec_TransitedProviderPath;
*zxwsf_WALK_SO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_WALK_SO_sec_TransitedProviderPath;
*zxwsf_WALK_WO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_WALK_WO_sec_TransitedProviderPath;
*zxwsf_LEN_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_LEN_sec_TransitedProviderPath;
*zxwsf_ENC_SO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_ENC_SO_sec_TransitedProviderPath;
*zxwsf_ENC_WO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_ENC_WO_sec_TransitedProviderPath;
*zxwsf_EASY_ENC_SO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_sec_TransitedProviderPath;
*zxwsf_EASY_ENC_WO_sec_TransitedProviderPath = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_sec_TransitedProviderPath;
*zxwsf_sec_TransitedProviderPath_GET_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_GET_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_NUM_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_NUM_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_POP_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_POP_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_PUSH_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_PUSH_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_PUT_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_PUT_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_ADD_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_ADD_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_DEL_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_DEL_TransitedProvider;
*zxwsf_sec_TransitedProviderPath_REV_TransitedProvider = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_REV_TransitedProvider;
*zxwsf_DEC_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_DEC_wsse_BinarySecurityToken;
*zxwsf_NEW_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_NEW_wsse_BinarySecurityToken;
*zxwsf_DEEP_CLONE_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_BinarySecurityToken;
*zxwsf_DUP_STRS_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_BinarySecurityToken;
*zxwsf_FREE_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_FREE_wsse_BinarySecurityToken;
*zxwsf_WALK_SO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_BinarySecurityToken;
*zxwsf_WALK_WO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_BinarySecurityToken;
*zxwsf_LEN_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_LEN_wsse_BinarySecurityToken;
*zxwsf_ENC_SO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_BinarySecurityToken;
*zxwsf_ENC_WO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_BinarySecurityToken;
*zxwsf_EASY_ENC_SO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_BinarySecurityToken;
*zxwsf_EASY_ENC_WO_wsse_BinarySecurityToken = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_BinarySecurityToken;
*zxwsf_wsse_BinarySecurityToken_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_GET_Id;
*zxwsf_wsse_BinarySecurityToken_GET_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_GET_EncodingType;
*zxwsf_wsse_BinarySecurityToken_GET_ValueType = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_GET_ValueType;
*zxwsf_wsse_BinarySecurityToken_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_PUT_Id;
*zxwsf_wsse_BinarySecurityToken_PUT_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_PUT_EncodingType;
*zxwsf_wsse_BinarySecurityToken_PUT_ValueType = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_PUT_ValueType;
*zxwsf_DEC_wsse_Embedded = *Net::WSF::Rawc::zxwsf_DEC_wsse_Embedded;
*zxwsf_NEW_wsse_Embedded = *Net::WSF::Rawc::zxwsf_NEW_wsse_Embedded;
*zxwsf_DEEP_CLONE_wsse_Embedded = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Embedded;
*zxwsf_DUP_STRS_wsse_Embedded = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Embedded;
*zxwsf_FREE_wsse_Embedded = *Net::WSF::Rawc::zxwsf_FREE_wsse_Embedded;
*zxwsf_WALK_SO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Embedded;
*zxwsf_WALK_WO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Embedded;
*zxwsf_LEN_wsse_Embedded = *Net::WSF::Rawc::zxwsf_LEN_wsse_Embedded;
*zxwsf_ENC_SO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Embedded;
*zxwsf_ENC_WO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Embedded;
*zxwsf_EASY_ENC_SO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Embedded;
*zxwsf_EASY_ENC_WO_wsse_Embedded = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Embedded;
*zxwsf_wsse_Embedded_GET_ValueType = *Net::WSF::Rawc::zxwsf_wsse_Embedded_GET_ValueType;
*zxwsf_wsse_Embedded_PUT_ValueType = *Net::WSF::Rawc::zxwsf_wsse_Embedded_PUT_ValueType;
*zxwsf_DEC_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_DEC_wsse_KeyIdentifier;
*zxwsf_NEW_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_NEW_wsse_KeyIdentifier;
*zxwsf_DEEP_CLONE_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_KeyIdentifier;
*zxwsf_DUP_STRS_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_KeyIdentifier;
*zxwsf_FREE_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_FREE_wsse_KeyIdentifier;
*zxwsf_WALK_SO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_KeyIdentifier;
*zxwsf_WALK_WO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_KeyIdentifier;
*zxwsf_LEN_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_LEN_wsse_KeyIdentifier;
*zxwsf_ENC_SO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_KeyIdentifier;
*zxwsf_ENC_WO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_KeyIdentifier;
*zxwsf_EASY_ENC_SO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_KeyIdentifier;
*zxwsf_EASY_ENC_WO_wsse_KeyIdentifier = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_KeyIdentifier;
*zxwsf_wsse_KeyIdentifier_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_GET_Id;
*zxwsf_wsse_KeyIdentifier_GET_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_GET_EncodingType;
*zxwsf_wsse_KeyIdentifier_GET_ValueType = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_GET_ValueType;
*zxwsf_wsse_KeyIdentifier_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_PUT_Id;
*zxwsf_wsse_KeyIdentifier_PUT_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_PUT_EncodingType;
*zxwsf_wsse_KeyIdentifier_PUT_ValueType = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_PUT_ValueType;
*zxwsf_DEC_wsse_Nonce = *Net::WSF::Rawc::zxwsf_DEC_wsse_Nonce;
*zxwsf_NEW_wsse_Nonce = *Net::WSF::Rawc::zxwsf_NEW_wsse_Nonce;
*zxwsf_DEEP_CLONE_wsse_Nonce = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Nonce;
*zxwsf_DUP_STRS_wsse_Nonce = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Nonce;
*zxwsf_FREE_wsse_Nonce = *Net::WSF::Rawc::zxwsf_FREE_wsse_Nonce;
*zxwsf_WALK_SO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Nonce;
*zxwsf_WALK_WO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Nonce;
*zxwsf_LEN_wsse_Nonce = *Net::WSF::Rawc::zxwsf_LEN_wsse_Nonce;
*zxwsf_ENC_SO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Nonce;
*zxwsf_ENC_WO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Nonce;
*zxwsf_EASY_ENC_SO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Nonce;
*zxwsf_EASY_ENC_WO_wsse_Nonce = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Nonce;
*zxwsf_wsse_Nonce_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_Nonce_GET_Id;
*zxwsf_wsse_Nonce_GET_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_Nonce_GET_EncodingType;
*zxwsf_wsse_Nonce_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_Nonce_PUT_Id;
*zxwsf_wsse_Nonce_PUT_EncodingType = *Net::WSF::Rawc::zxwsf_wsse_Nonce_PUT_EncodingType;
*zxwsf_DEC_wsse_Password = *Net::WSF::Rawc::zxwsf_DEC_wsse_Password;
*zxwsf_NEW_wsse_Password = *Net::WSF::Rawc::zxwsf_NEW_wsse_Password;
*zxwsf_DEEP_CLONE_wsse_Password = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Password;
*zxwsf_DUP_STRS_wsse_Password = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Password;
*zxwsf_FREE_wsse_Password = *Net::WSF::Rawc::zxwsf_FREE_wsse_Password;
*zxwsf_WALK_SO_wsse_Password = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Password;
*zxwsf_WALK_WO_wsse_Password = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Password;
*zxwsf_LEN_wsse_Password = *Net::WSF::Rawc::zxwsf_LEN_wsse_Password;
*zxwsf_ENC_SO_wsse_Password = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Password;
*zxwsf_ENC_WO_wsse_Password = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Password;
*zxwsf_EASY_ENC_SO_wsse_Password = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Password;
*zxwsf_EASY_ENC_WO_wsse_Password = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Password;
*zxwsf_wsse_Password_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_Password_GET_Id;
*zxwsf_wsse_Password_GET_Type = *Net::WSF::Rawc::zxwsf_wsse_Password_GET_Type;
*zxwsf_wsse_Password_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_Password_PUT_Id;
*zxwsf_wsse_Password_PUT_Type = *Net::WSF::Rawc::zxwsf_wsse_Password_PUT_Type;
*zxwsf_DEC_wsse_Reference = *Net::WSF::Rawc::zxwsf_DEC_wsse_Reference;
*zxwsf_NEW_wsse_Reference = *Net::WSF::Rawc::zxwsf_NEW_wsse_Reference;
*zxwsf_DEEP_CLONE_wsse_Reference = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Reference;
*zxwsf_DUP_STRS_wsse_Reference = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Reference;
*zxwsf_FREE_wsse_Reference = *Net::WSF::Rawc::zxwsf_FREE_wsse_Reference;
*zxwsf_WALK_SO_wsse_Reference = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Reference;
*zxwsf_WALK_WO_wsse_Reference = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Reference;
*zxwsf_LEN_wsse_Reference = *Net::WSF::Rawc::zxwsf_LEN_wsse_Reference;
*zxwsf_ENC_SO_wsse_Reference = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Reference;
*zxwsf_ENC_WO_wsse_Reference = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Reference;
*zxwsf_EASY_ENC_SO_wsse_Reference = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Reference;
*zxwsf_EASY_ENC_WO_wsse_Reference = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Reference;
*zxwsf_wsse_Reference_GET_URI = *Net::WSF::Rawc::zxwsf_wsse_Reference_GET_URI;
*zxwsf_wsse_Reference_GET_ValueType = *Net::WSF::Rawc::zxwsf_wsse_Reference_GET_ValueType;
*zxwsf_wsse_Reference_PUT_URI = *Net::WSF::Rawc::zxwsf_wsse_Reference_PUT_URI;
*zxwsf_wsse_Reference_PUT_ValueType = *Net::WSF::Rawc::zxwsf_wsse_Reference_PUT_ValueType;
*zxwsf_DEC_wsse_Security = *Net::WSF::Rawc::zxwsf_DEC_wsse_Security;
*zxwsf_NEW_wsse_Security = *Net::WSF::Rawc::zxwsf_NEW_wsse_Security;
*zxwsf_DEEP_CLONE_wsse_Security = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Security;
*zxwsf_DUP_STRS_wsse_Security = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Security;
*zxwsf_FREE_wsse_Security = *Net::WSF::Rawc::zxwsf_FREE_wsse_Security;
*zxwsf_WALK_SO_wsse_Security = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Security;
*zxwsf_WALK_WO_wsse_Security = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Security;
*zxwsf_LEN_wsse_Security = *Net::WSF::Rawc::zxwsf_LEN_wsse_Security;
*zxwsf_ENC_SO_wsse_Security = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Security;
*zxwsf_ENC_WO_wsse_Security = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Security;
*zxwsf_EASY_ENC_SO_wsse_Security = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Security;
*zxwsf_EASY_ENC_WO_wsse_Security = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Security;
*zxwsf_DEC_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_DEC_wsse_SecurityTokenReference;
*zxwsf_NEW_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_NEW_wsse_SecurityTokenReference;
*zxwsf_DEEP_CLONE_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_SecurityTokenReference;
*zxwsf_DUP_STRS_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_SecurityTokenReference;
*zxwsf_FREE_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_FREE_wsse_SecurityTokenReference;
*zxwsf_WALK_SO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_SecurityTokenReference;
*zxwsf_WALK_WO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_SecurityTokenReference;
*zxwsf_LEN_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_LEN_wsse_SecurityTokenReference;
*zxwsf_ENC_SO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_SecurityTokenReference;
*zxwsf_ENC_WO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_SecurityTokenReference;
*zxwsf_EASY_ENC_SO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_SecurityTokenReference;
*zxwsf_EASY_ENC_WO_wsse_SecurityTokenReference = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_SecurityTokenReference;
*zxwsf_wsse_SecurityTokenReference_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_GET_Id;
*zxwsf_wsse_SecurityTokenReference_GET_Usage = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_GET_Usage;
*zxwsf_wsse_SecurityTokenReference_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_PUT_Id;
*zxwsf_wsse_SecurityTokenReference_PUT_Usage = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_PUT_Usage;
*zxwsf_DEC_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_DEC_wsse_TransformationParameters;
*zxwsf_NEW_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_NEW_wsse_TransformationParameters;
*zxwsf_DEEP_CLONE_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_TransformationParameters;
*zxwsf_DUP_STRS_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_TransformationParameters;
*zxwsf_FREE_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_FREE_wsse_TransformationParameters;
*zxwsf_WALK_SO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_TransformationParameters;
*zxwsf_WALK_WO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_TransformationParameters;
*zxwsf_LEN_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_LEN_wsse_TransformationParameters;
*zxwsf_ENC_SO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_TransformationParameters;
*zxwsf_ENC_WO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_TransformationParameters;
*zxwsf_EASY_ENC_SO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_TransformationParameters;
*zxwsf_EASY_ENC_WO_wsse_TransformationParameters = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_TransformationParameters;
*zxwsf_DEC_wsse_Username = *Net::WSF::Rawc::zxwsf_DEC_wsse_Username;
*zxwsf_NEW_wsse_Username = *Net::WSF::Rawc::zxwsf_NEW_wsse_Username;
*zxwsf_DEEP_CLONE_wsse_Username = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_Username;
*zxwsf_DUP_STRS_wsse_Username = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_Username;
*zxwsf_FREE_wsse_Username = *Net::WSF::Rawc::zxwsf_FREE_wsse_Username;
*zxwsf_WALK_SO_wsse_Username = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_Username;
*zxwsf_WALK_WO_wsse_Username = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_Username;
*zxwsf_LEN_wsse_Username = *Net::WSF::Rawc::zxwsf_LEN_wsse_Username;
*zxwsf_ENC_SO_wsse_Username = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_Username;
*zxwsf_ENC_WO_wsse_Username = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_Username;
*zxwsf_EASY_ENC_SO_wsse_Username = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_Username;
*zxwsf_EASY_ENC_WO_wsse_Username = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_Username;
*zxwsf_wsse_Username_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_Username_GET_Id;
*zxwsf_wsse_Username_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_Username_PUT_Id;
*zxwsf_DEC_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_DEC_wsse_UsernameToken;
*zxwsf_NEW_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_NEW_wsse_UsernameToken;
*zxwsf_DEEP_CLONE_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsse_UsernameToken;
*zxwsf_DUP_STRS_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsse_UsernameToken;
*zxwsf_FREE_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_FREE_wsse_UsernameToken;
*zxwsf_WALK_SO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_WALK_SO_wsse_UsernameToken;
*zxwsf_WALK_WO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_WALK_WO_wsse_UsernameToken;
*zxwsf_LEN_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_LEN_wsse_UsernameToken;
*zxwsf_ENC_SO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_ENC_SO_wsse_UsernameToken;
*zxwsf_ENC_WO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_ENC_WO_wsse_UsernameToken;
*zxwsf_EASY_ENC_SO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsse_UsernameToken;
*zxwsf_EASY_ENC_WO_wsse_UsernameToken = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsse_UsernameToken;
*zxwsf_wsse_UsernameToken_GET_Id = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_GET_Id;
*zxwsf_wsse_UsernameToken_GET_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_GET_Username;
*zxwsf_wsse_UsernameToken_NUM_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_NUM_Username;
*zxwsf_wsse_UsernameToken_POP_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_POP_Username;
*zxwsf_wsse_UsernameToken_PUSH_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_PUSH_Username;
*zxwsf_wsse_UsernameToken_PUT_Id = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_PUT_Id;
*zxwsf_wsse_UsernameToken_PUT_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_PUT_Username;
*zxwsf_wsse_UsernameToken_ADD_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_ADD_Username;
*zxwsf_wsse_UsernameToken_DEL_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_DEL_Username;
*zxwsf_wsse_UsernameToken_REV_Username = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_REV_Username;
*zxwsf_DEC_wsu_Created = *Net::WSF::Rawc::zxwsf_DEC_wsu_Created;
*zxwsf_NEW_wsu_Created = *Net::WSF::Rawc::zxwsf_NEW_wsu_Created;
*zxwsf_DEEP_CLONE_wsu_Created = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsu_Created;
*zxwsf_DUP_STRS_wsu_Created = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsu_Created;
*zxwsf_FREE_wsu_Created = *Net::WSF::Rawc::zxwsf_FREE_wsu_Created;
*zxwsf_WALK_SO_wsu_Created = *Net::WSF::Rawc::zxwsf_WALK_SO_wsu_Created;
*zxwsf_WALK_WO_wsu_Created = *Net::WSF::Rawc::zxwsf_WALK_WO_wsu_Created;
*zxwsf_LEN_wsu_Created = *Net::WSF::Rawc::zxwsf_LEN_wsu_Created;
*zxwsf_ENC_SO_wsu_Created = *Net::WSF::Rawc::zxwsf_ENC_SO_wsu_Created;
*zxwsf_ENC_WO_wsu_Created = *Net::WSF::Rawc::zxwsf_ENC_WO_wsu_Created;
*zxwsf_EASY_ENC_SO_wsu_Created = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsu_Created;
*zxwsf_EASY_ENC_WO_wsu_Created = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsu_Created;
*zxwsf_wsu_Created_GET_Id = *Net::WSF::Rawc::zxwsf_wsu_Created_GET_Id;
*zxwsf_wsu_Created_PUT_Id = *Net::WSF::Rawc::zxwsf_wsu_Created_PUT_Id;
*zxwsf_DEC_wsu_Expires = *Net::WSF::Rawc::zxwsf_DEC_wsu_Expires;
*zxwsf_NEW_wsu_Expires = *Net::WSF::Rawc::zxwsf_NEW_wsu_Expires;
*zxwsf_DEEP_CLONE_wsu_Expires = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsu_Expires;
*zxwsf_DUP_STRS_wsu_Expires = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsu_Expires;
*zxwsf_FREE_wsu_Expires = *Net::WSF::Rawc::zxwsf_FREE_wsu_Expires;
*zxwsf_WALK_SO_wsu_Expires = *Net::WSF::Rawc::zxwsf_WALK_SO_wsu_Expires;
*zxwsf_WALK_WO_wsu_Expires = *Net::WSF::Rawc::zxwsf_WALK_WO_wsu_Expires;
*zxwsf_LEN_wsu_Expires = *Net::WSF::Rawc::zxwsf_LEN_wsu_Expires;
*zxwsf_ENC_SO_wsu_Expires = *Net::WSF::Rawc::zxwsf_ENC_SO_wsu_Expires;
*zxwsf_ENC_WO_wsu_Expires = *Net::WSF::Rawc::zxwsf_ENC_WO_wsu_Expires;
*zxwsf_EASY_ENC_SO_wsu_Expires = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsu_Expires;
*zxwsf_EASY_ENC_WO_wsu_Expires = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsu_Expires;
*zxwsf_wsu_Expires_GET_Id = *Net::WSF::Rawc::zxwsf_wsu_Expires_GET_Id;
*zxwsf_wsu_Expires_PUT_Id = *Net::WSF::Rawc::zxwsf_wsu_Expires_PUT_Id;
*zxwsf_DEC_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_DEC_wsu_Timestamp;
*zxwsf_NEW_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_NEW_wsu_Timestamp;
*zxwsf_DEEP_CLONE_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_wsu_Timestamp;
*zxwsf_DUP_STRS_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_DUP_STRS_wsu_Timestamp;
*zxwsf_FREE_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_FREE_wsu_Timestamp;
*zxwsf_WALK_SO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_WALK_SO_wsu_Timestamp;
*zxwsf_WALK_WO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_WALK_WO_wsu_Timestamp;
*zxwsf_LEN_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_LEN_wsu_Timestamp;
*zxwsf_ENC_SO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_ENC_SO_wsu_Timestamp;
*zxwsf_ENC_WO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_ENC_WO_wsu_Timestamp;
*zxwsf_EASY_ENC_SO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_wsu_Timestamp;
*zxwsf_EASY_ENC_WO_wsu_Timestamp = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_wsu_Timestamp;
*zxwsf_wsu_Timestamp_GET_Id = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_GET_Id;
*zxwsf_wsu_Timestamp_GET_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_GET_Created;
*zxwsf_wsu_Timestamp_GET_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_GET_Expires;
*zxwsf_wsu_Timestamp_NUM_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_NUM_Created;
*zxwsf_wsu_Timestamp_NUM_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_NUM_Expires;
*zxwsf_wsu_Timestamp_POP_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_POP_Created;
*zxwsf_wsu_Timestamp_POP_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_POP_Expires;
*zxwsf_wsu_Timestamp_PUSH_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_PUSH_Created;
*zxwsf_wsu_Timestamp_PUSH_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_PUSH_Expires;
*zxwsf_wsu_Timestamp_PUT_Id = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_PUT_Id;
*zxwsf_wsu_Timestamp_PUT_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_PUT_Created;
*zxwsf_wsu_Timestamp_PUT_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_PUT_Expires;
*zxwsf_wsu_Timestamp_ADD_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_ADD_Created;
*zxwsf_wsu_Timestamp_ADD_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_ADD_Expires;
*zxwsf_wsu_Timestamp_DEL_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_DEL_Created;
*zxwsf_wsu_Timestamp_DEL_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_DEL_Expires;
*zxwsf_wsu_Timestamp_REV_Created = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_REV_Created;
*zxwsf_wsu_Timestamp_REV_Expires = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_REV_Expires;
*zxwsf_DEC_root = *Net::WSF::Rawc::zxwsf_DEC_root;
*zxwsf_NEW_root = *Net::WSF::Rawc::zxwsf_NEW_root;
*zxwsf_DEEP_CLONE_root = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_root;
*zxwsf_DUP_STRS_root = *Net::WSF::Rawc::zxwsf_DUP_STRS_root;
*zxwsf_FREE_root = *Net::WSF::Rawc::zxwsf_FREE_root;
*zxwsf_WALK_SO_root = *Net::WSF::Rawc::zxwsf_WALK_SO_root;
*zxwsf_WALK_WO_root = *Net::WSF::Rawc::zxwsf_WALK_WO_root;
*zxwsf_LEN_root = *Net::WSF::Rawc::zxwsf_LEN_root;
*zxwsf_ENC_SO_root = *Net::WSF::Rawc::zxwsf_ENC_SO_root;
*zxwsf_ENC_WO_root = *Net::WSF::Rawc::zxwsf_ENC_WO_root;
*zxwsf_EASY_ENC_SO_root = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_root;
*zxwsf_EASY_ENC_WO_root = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_root;
*zxwsf_root_GET_Envelope = *Net::WSF::Rawc::zxwsf_root_GET_Envelope;
*zxwsf_root_GET_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_GET_dise_Envelope;
*zxwsf_root_NUM_Envelope = *Net::WSF::Rawc::zxwsf_root_NUM_Envelope;
*zxwsf_root_NUM_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_NUM_dise_Envelope;
*zxwsf_root_POP_Envelope = *Net::WSF::Rawc::zxwsf_root_POP_Envelope;
*zxwsf_root_POP_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_POP_dise_Envelope;
*zxwsf_root_PUSH_Envelope = *Net::WSF::Rawc::zxwsf_root_PUSH_Envelope;
*zxwsf_root_PUSH_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_PUSH_dise_Envelope;
*zxwsf_root_PUT_Envelope = *Net::WSF::Rawc::zxwsf_root_PUT_Envelope;
*zxwsf_root_PUT_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_PUT_dise_Envelope;
*zxwsf_root_ADD_Envelope = *Net::WSF::Rawc::zxwsf_root_ADD_Envelope;
*zxwsf_root_ADD_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_ADD_dise_Envelope;
*zxwsf_root_DEL_Envelope = *Net::WSF::Rawc::zxwsf_root_DEL_Envelope;
*zxwsf_root_DEL_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_DEL_dise_Envelope;
*zxwsf_root_REV_Envelope = *Net::WSF::Rawc::zxwsf_root_REV_Envelope;
*zxwsf_root_REV_dise_Envelope = *Net::WSF::Rawc::zxwsf_root_REV_dise_Envelope;
*zxwsf_LEN_simple_elem = *Net::WSF::Rawc::zxwsf_LEN_simple_elem;
*zxwsf_ENC_SO_simple_elem = *Net::WSF::Rawc::zxwsf_ENC_SO_simple_elem;
*zxwsf_ENC_WO_simple_elem = *Net::WSF::Rawc::zxwsf_ENC_WO_simple_elem;
*zxwsf_EASY_ENC_SO_simple_elem = *Net::WSF::Rawc::zxwsf_EASY_ENC_SO_simple_elem;
*zxwsf_EASY_ENC_WO_simple_elem = *Net::WSF::Rawc::zxwsf_EASY_ENC_WO_simple_elem;
*zxwsf_DEC_simple_elem = *Net::WSF::Rawc::zxwsf_DEC_simple_elem;
*zxwsf_DEC_wrong_elem = *Net::WSF::Rawc::zxwsf_DEC_wrong_elem;
*zxwsf_DUP_STRS_simple_elem = *Net::WSF::Rawc::zxwsf_DUP_STRS_simple_elem;
*zxwsf_DEEP_CLONE_simple_elem = *Net::WSF::Rawc::zxwsf_DEEP_CLONE_simple_elem;
*zxwsf_FREE_simple_elem = *Net::WSF::Rawc::zxwsf_FREE_simple_elem;
*zxwsf_WALK_SO_simple_elem = *Net::WSF::Rawc::zxwsf_WALK_SO_simple_elem;
*zxwsf_WALK_WO_simple_elem = *Net::WSF::Rawc::zxwsf_WALK_WO_simple_elem;
*zxwsf_NEXT_simple_elem = *Net::WSF::Rawc::zxwsf_NEXT_simple_elem;

############# Class : Net::WSF::Raw::zxwsf_a_Action_s ##############

package Net::WSF::Raw::zxwsf_a_Action_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_Action_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_Action_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_Address_s ##############

package Net::WSF::Raw::zxwsf_a_Address_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_Address_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_Address_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_EndpointReference_s ##############

package Net::WSF::Raw::zxwsf_a_EndpointReference_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_a_EndpointReference_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_EndpointReference_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_EndpointReference_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_FaultTo_s ##############

package Net::WSF::Raw::zxwsf_a_FaultTo_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_a_FaultTo_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_FaultTo_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_FaultTo_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_From_s ##############

package Net::WSF::Raw::zxwsf_a_From_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_a_From_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_a_From_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_a_From_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_a_From_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_a_From_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_a_From_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_From_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_From_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_MessageID_s ##############

package Net::WSF::Raw::zxwsf_a_MessageID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_MessageID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_MessageID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_Metadata_s ##############

package Net::WSF::Raw::zxwsf_a_Metadata_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_Metadata_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_Metadata_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ProblemAction_s ##############

package Net::WSF::Raw::zxwsf_a_ProblemAction_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Action_get = *Net::WSF::Rawc::zxwsf_a_ProblemAction_s_Action_get;
*swig_Action_set = *Net::WSF::Rawc::zxwsf_a_ProblemAction_s_Action_set;
*swig_SoapAction_get = *Net::WSF::Rawc::zxwsf_a_ProblemAction_s_SoapAction_get;
*swig_SoapAction_set = *Net::WSF::Rawc::zxwsf_a_ProblemAction_s_SoapAction_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ProblemAction_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ProblemAction_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ProblemHeader_s ##############

package Net::WSF::Raw::zxwsf_a_ProblemHeader_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ProblemHeader_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ProblemHeader_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ProblemHeaderQName_s ##############

package Net::WSF::Raw::zxwsf_a_ProblemHeaderQName_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ProblemHeaderQName_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ProblemHeaderQName_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ProblemIRI_s ##############

package Net::WSF::Raw::zxwsf_a_ProblemIRI_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ProblemIRI_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ProblemIRI_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ReferenceParameters_s ##############

package Net::WSF::Raw::zxwsf_a_ReferenceParameters_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ReferenceParameters_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ReferenceParameters_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_RelatesTo_s ##############

package Net::WSF::Raw::zxwsf_a_RelatesTo_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_RelationshipType_get = *Net::WSF::Rawc::zxwsf_a_RelatesTo_s_RelationshipType_get;
*swig_RelationshipType_set = *Net::WSF::Rawc::zxwsf_a_RelatesTo_s_RelationshipType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_RelatesTo_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_RelatesTo_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_ReplyTo_s ##############

package Net::WSF::Raw::zxwsf_a_ReplyTo_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_a_ReplyTo_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_ReplyTo_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_ReplyTo_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_RetryAfter_s ##############

package Net::WSF::Raw::zxwsf_a_RetryAfter_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_RetryAfter_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_RetryAfter_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_a_To_s ##############

package Net::WSF::Raw::zxwsf_a_To_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_a_To_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_a_To_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b12_Consent_s ##############

package Net::WSF::Raw::zxwsf_b12_Consent_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_uri_get = *Net::WSF::Rawc::zxwsf_b12_Consent_s_uri_get;
*swig_uri_set = *Net::WSF::Rawc::zxwsf_b12_Consent_s_uri_set;
*swig_timestamp_get = *Net::WSF::Rawc::zxwsf_b12_Consent_s_timestamp_get;
*swig_timestamp_set = *Net::WSF::Rawc::zxwsf_b12_Consent_s_timestamp_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_b12_Consent_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_b12_Consent_s_id_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_b12_Consent_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_b12_Consent_s_mustUnderstand_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_b12_Consent_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_b12_Consent_s_actor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b12_Consent_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b12_Consent_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b12_Correlation_s ##############

package Net::WSF::Raw::zxwsf_b12_Correlation_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_messageID_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_messageID_get;
*swig_messageID_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_messageID_set;
*swig_refToMessageID_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_refToMessageID_get;
*swig_refToMessageID_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_refToMessageID_set;
*swig_timestamp_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_timestamp_get;
*swig_timestamp_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_timestamp_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_id_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_mustUnderstand_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_b12_Correlation_s_actor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b12_Correlation_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b12_Correlation_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b12_ProcessingContext_s ##############

package Net::WSF::Raw::zxwsf_b12_ProcessingContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_id_get = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_id_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_mustUnderstand_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_s_actor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b12_ProcessingContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b12_ProcessingContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b12_Provider_s ##############

package Net::WSF::Raw::zxwsf_b12_Provider_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_providerID_get = *Net::WSF::Rawc::zxwsf_b12_Provider_s_providerID_get;
*swig_providerID_set = *Net::WSF::Rawc::zxwsf_b12_Provider_s_providerID_set;
*swig_affiliationID_get = *Net::WSF::Rawc::zxwsf_b12_Provider_s_affiliationID_get;
*swig_affiliationID_set = *Net::WSF::Rawc::zxwsf_b12_Provider_s_affiliationID_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_b12_Provider_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_b12_Provider_s_id_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_b12_Provider_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_b12_Provider_s_mustUnderstand_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_b12_Provider_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_b12_Provider_s_actor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b12_Provider_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b12_Provider_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b12_UsageDirective_s ##############

package Net::WSF::Raw::zxwsf_b12_UsageDirective_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_id_get = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_id_set;
*swig_ref_get = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_ref_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_mustUnderstand_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_s_actor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b12_UsageDirective_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b12_UsageDirective_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_ApplicationEPR_s ##############

package Net::WSF::Raw::zxwsf_b_ApplicationEPR_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_ApplicationEPR_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_ApplicationEPR_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_Consent_s ##############

package Net::WSF::Raw::zxwsf_b_Consent_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_uri_get = *Net::WSF::Rawc::zxwsf_b_Consent_s_uri_get;
*swig_uri_set = *Net::WSF::Rawc::zxwsf_b_Consent_s_uri_set;
*swig_timestamp_get = *Net::WSF::Rawc::zxwsf_b_Consent_s_timestamp_get;
*swig_timestamp_set = *Net::WSF::Rawc::zxwsf_b_Consent_s_timestamp_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_Consent_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_Consent_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_CredentialsContext_s ##############

package Net::WSF::Raw::zxwsf_b_CredentialsContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_RequestedAuthnContext_get = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_s_RequestedAuthnContext_get;
*swig_RequestedAuthnContext_set = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_s_RequestedAuthnContext_set;
*swig_SecurityMechID_get = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_s_SecurityMechID_get;
*swig_SecurityMechID_set = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_s_SecurityMechID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_CredentialsContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_CredentialsContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_EndpointUpdate_s ##############

package Net::WSF::Raw::zxwsf_b_EndpointUpdate_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_Metadata_set;
*swig_updateType_get = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_updateType_get;
*swig_updateType_set = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_s_updateType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_EndpointUpdate_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_EndpointUpdate_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_Framework_s ##############

package Net::WSF::Raw::zxwsf_b_Framework_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_version_get = *Net::WSF::Rawc::zxwsf_b_Framework_s_version_get;
*swig_version_set = *Net::WSF::Rawc::zxwsf_b_Framework_s_version_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_Framework_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_Framework_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_InteractionService_s ##############

package Net::WSF::Raw::zxwsf_b_InteractionService_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_Address_set;
*swig_ReferenceParameters_get = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_ReferenceParameters_get;
*swig_ReferenceParameters_set = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_ReferenceParameters_set;
*swig_Metadata_get = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_Metadata_get;
*swig_Metadata_set = *Net::WSF::Rawc::zxwsf_b_InteractionService_s_Metadata_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_InteractionService_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_InteractionService_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_ProcessingContext_s ##############

package Net::WSF::Raw::zxwsf_b_ProcessingContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_ProcessingContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_ProcessingContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_RedirectRequest_s ##############

package Net::WSF::Raw::zxwsf_b_RedirectRequest_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_redirectURL_get = *Net::WSF::Rawc::zxwsf_b_RedirectRequest_s_redirectURL_get;
*swig_redirectURL_set = *Net::WSF::Rawc::zxwsf_b_RedirectRequest_s_redirectURL_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_RedirectRequest_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_RedirectRequest_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_Sender_s ##############

package Net::WSF::Raw::zxwsf_b_Sender_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_providerID_get = *Net::WSF::Rawc::zxwsf_b_Sender_s_providerID_get;
*swig_providerID_set = *Net::WSF::Rawc::zxwsf_b_Sender_s_providerID_set;
*swig_affiliationID_get = *Net::WSF::Rawc::zxwsf_b_Sender_s_affiliationID_get;
*swig_affiliationID_set = *Net::WSF::Rawc::zxwsf_b_Sender_s_affiliationID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_Sender_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_Sender_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_TargetIdentity_s ##############

package Net::WSF::Raw::zxwsf_b_TargetIdentity_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_TargetIdentity_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_TargetIdentity_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_UsageDirective_s ##############

package Net::WSF::Raw::zxwsf_b_UsageDirective_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ref_get = *Net::WSF::Rawc::zxwsf_b_UsageDirective_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_b_UsageDirective_s_ref_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_UsageDirective_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_UsageDirective_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_b_UserInteraction_s ##############

package Net::WSF::Raw::zxwsf_b_UserInteraction_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_InteractionService_get = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_InteractionService_get;
*swig_InteractionService_set = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_InteractionService_set;
*swig_interact_get = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_interact_get;
*swig_interact_set = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_interact_set;
*swig_language_get = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_language_get;
*swig_language_set = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_language_set;
*swig_redirect_get = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_redirect_get;
*swig_redirect_set = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_redirect_set;
*swig_maxInteractTime_get = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_maxInteractTime_get;
*swig_maxInteractTime_set = *Net::WSF::Rawc::zxwsf_b_UserInteraction_s_maxInteractTime_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_b_UserInteraction_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_b_UserInteraction_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_AuthenticateRequester_s ##############

package Net::WSF::Raw::zxwsf_di12_AuthenticateRequester_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_descriptionIDRefs_get = *Net::WSF::Rawc::zxwsf_di12_AuthenticateRequester_s_descriptionIDRefs_get;
*swig_descriptionIDRefs_set = *Net::WSF::Rawc::zxwsf_di12_AuthenticateRequester_s_descriptionIDRefs_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_AuthenticateRequester_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_AuthenticateRequester_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_AuthenticateSessionContext_s ##############

package Net::WSF::Raw::zxwsf_di12_AuthenticateSessionContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_descriptionIDRefs_get = *Net::WSF::Rawc::zxwsf_di12_AuthenticateSessionContext_s_descriptionIDRefs_get;
*swig_descriptionIDRefs_set = *Net::WSF::Rawc::zxwsf_di12_AuthenticateSessionContext_s_descriptionIDRefs_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_AuthenticateSessionContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_AuthenticateSessionContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_AuthorizeRequester_s ##############

package Net::WSF::Raw::zxwsf_di12_AuthorizeRequester_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_descriptionIDRefs_get = *Net::WSF::Rawc::zxwsf_di12_AuthorizeRequester_s_descriptionIDRefs_get;
*swig_descriptionIDRefs_set = *Net::WSF::Rawc::zxwsf_di12_AuthorizeRequester_s_descriptionIDRefs_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_AuthorizeRequester_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_AuthorizeRequester_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Credentials_s ##############

package Net::WSF::Raw::zxwsf_di12_Credentials_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Credentials_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Credentials_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Description_s ##############

package Net::WSF::Raw::zxwsf_di12_Description_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SecurityMechID_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_SecurityMechID_get;
*swig_SecurityMechID_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_SecurityMechID_set;
*swig_CredentialRef_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_CredentialRef_get;
*swig_CredentialRef_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_CredentialRef_set;
*swig_WsdlURI_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_WsdlURI_get;
*swig_WsdlURI_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_WsdlURI_set;
*swig_ServiceNameRef_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_ServiceNameRef_get;
*swig_ServiceNameRef_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_ServiceNameRef_set;
*swig_Endpoint_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_Endpoint_get;
*swig_Endpoint_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_Endpoint_set;
*swig_SoapAction_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_SoapAction_get;
*swig_SoapAction_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_SoapAction_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_Description_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_Description_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Description_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Description_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_EncryptResourceID_s ##############

package Net::WSF::Raw::zxwsf_di12_EncryptResourceID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_descriptionIDRefs_get = *Net::WSF::Rawc::zxwsf_di12_EncryptResourceID_s_descriptionIDRefs_get;
*swig_descriptionIDRefs_set = *Net::WSF::Rawc::zxwsf_di12_EncryptResourceID_s_descriptionIDRefs_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_EncryptResourceID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_EncryptResourceID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_EncryptedResourceID_s ##############

package Net::WSF::Raw::zxwsf_di12_EncryptedResourceID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_EncryptedData_get = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_s_EncryptedData_get;
*swig_EncryptedData_set = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_s_EncryptedData_set;
*swig_EncryptedKey_get = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_s_EncryptedKey_get;
*swig_EncryptedKey_set = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_s_EncryptedKey_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_EncryptedResourceID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_EncryptedResourceID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Extension_s ##############

package Net::WSF::Raw::zxwsf_di12_Extension_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Extension_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Extension_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_InsertEntry_s ##############

package Net::WSF::Raw::zxwsf_di12_InsertEntry_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ResourceOffering_get = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_s_ResourceOffering_get;
*swig_ResourceOffering_set = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_s_ResourceOffering_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_InsertEntry_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_InsertEntry_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Modify_s ##############

package Net::WSF::Raw::zxwsf_di12_Modify_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_InsertEntry_get = *Net::WSF::Rawc::zxwsf_di12_Modify_s_InsertEntry_get;
*swig_InsertEntry_set = *Net::WSF::Rawc::zxwsf_di12_Modify_s_InsertEntry_set;
*swig_RemoveEntry_get = *Net::WSF::Rawc::zxwsf_di12_Modify_s_RemoveEntry_get;
*swig_RemoveEntry_set = *Net::WSF::Rawc::zxwsf_di12_Modify_s_RemoveEntry_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_Modify_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_Modify_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Modify_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Modify_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_ModifyResponse_s ##############

package Net::WSF::Raw::zxwsf_di12_ModifyResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_Status_set;
*swig_Extension_get = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_Extension_get;
*swig_Extension_set = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_Extension_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_id_set;
*swig_newEntryIDs_get = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_newEntryIDs_get;
*swig_newEntryIDs_set = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_s_newEntryIDs_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_ModifyResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_ModifyResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Options_s ##############

package Net::WSF::Raw::zxwsf_di12_Options_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Option_get = *Net::WSF::Rawc::zxwsf_di12_Options_s_Option_get;
*swig_Option_set = *Net::WSF::Rawc::zxwsf_di12_Options_s_Option_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Options_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Options_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Query_s ##############

package Net::WSF::Raw::zxwsf_di12_Query_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_RequestedServiceType_get = *Net::WSF::Rawc::zxwsf_di12_Query_s_RequestedServiceType_get;
*swig_RequestedServiceType_set = *Net::WSF::Rawc::zxwsf_di12_Query_s_RequestedServiceType_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_Query_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_Query_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Query_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Query_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_QueryResponse_s ##############

package Net::WSF::Raw::zxwsf_di12_QueryResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_Status_set;
*swig_ResourceOffering_get = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_ResourceOffering_get;
*swig_ResourceOffering_set = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_ResourceOffering_set;
*swig_Credentials_get = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_Credentials_get;
*swig_Credentials_set = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_Credentials_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_QueryResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_QueryResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_RemoveEntry_s ##############

package Net::WSF::Raw::zxwsf_di12_RemoveEntry_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_entryID_get = *Net::WSF::Rawc::zxwsf_di12_RemoveEntry_s_entryID_get;
*swig_entryID_set = *Net::WSF::Rawc::zxwsf_di12_RemoveEntry_s_entryID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_RemoveEntry_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_RemoveEntry_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_RequestedServiceType_s ##############

package Net::WSF::Raw::zxwsf_di12_RequestedServiceType_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceType_get = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_s_ServiceType_get;
*swig_ServiceType_set = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_s_ServiceType_set;
*swig_Options_get = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_s_Options_get;
*swig_Options_set = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_s_Options_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_RequestedServiceType_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_RequestedServiceType_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_ResourceID_s ##############

package Net::WSF::Raw::zxwsf_di12_ResourceID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_id_get = *Net::WSF::Rawc::zxwsf_di12_ResourceID_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_di12_ResourceID_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_ResourceID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_ResourceID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_ResourceOffering_s ##############

package Net::WSF::Raw::zxwsf_di12_ResourceOffering_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceInstance_get = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_ServiceInstance_get;
*swig_ServiceInstance_set = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_ServiceInstance_set;
*swig_Options_get = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_Options_get;
*swig_Options_set = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_Options_set;
*swig_Abstract_get = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_Abstract_get;
*swig_Abstract_set = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_Abstract_set;
*swig_entryID_get = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_entryID_get;
*swig_entryID_set = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_s_entryID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_ResourceOffering_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_ResourceOffering_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_ServiceInstance_s ##############

package Net::WSF::Raw::zxwsf_di12_ServiceInstance_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceType_get = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_ServiceType_get;
*swig_ServiceType_set = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_ServiceType_set;
*swig_ProviderID_get = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_ProviderID_get;
*swig_ProviderID_set = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_ProviderID_set;
*swig_Description_get = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_Description_get;
*swig_Description_set = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_s_Description_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_ServiceInstance_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_ServiceInstance_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di12_Status_s ##############

package Net::WSF::Raw::zxwsf_di12_Status_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di12_Status_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di12_Status_s_Status_set;
*swig_code_get = *Net::WSF::Rawc::zxwsf_di12_Status_s_code_get;
*swig_code_set = *Net::WSF::Rawc::zxwsf_di12_Status_s_code_set;
*swig_ref_get = *Net::WSF::Rawc::zxwsf_di12_Status_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_di12_Status_s_ref_set;
*swig_comment_get = *Net::WSF::Rawc::zxwsf_di12_Status_s_comment_get;
*swig_comment_set = *Net::WSF::Rawc::zxwsf_di12_Status_s_comment_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di12_Status_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di12_Status_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_EndpointContext_s ##############

package Net::WSF::Raw::zxwsf_di_EndpointContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Address_get = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Address_get;
*swig_Address_set = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Address_set;
*swig_Framework_get = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Framework_get;
*swig_Framework_set = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Framework_set;
*swig_SecurityMechID_get = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_SecurityMechID_get;
*swig_SecurityMechID_set = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_SecurityMechID_set;
*swig_Action_get = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Action_get;
*swig_Action_set = *Net::WSF::Rawc::zxwsf_di_EndpointContext_s_Action_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_EndpointContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_EndpointContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_Framework_s ##############

package Net::WSF::Raw::zxwsf_di_Framework_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_version_get = *Net::WSF::Rawc::zxwsf_di_Framework_s_version_get;
*swig_version_set = *Net::WSF::Rawc::zxwsf_di_Framework_s_version_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_Framework_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_Framework_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_Keys_s ##############

package Net::WSF::Raw::zxwsf_di_Keys_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_KeyDescriptor_get = *Net::WSF::Rawc::zxwsf_di_Keys_s_KeyDescriptor_get;
*swig_KeyDescriptor_set = *Net::WSF::Rawc::zxwsf_di_Keys_s_KeyDescriptor_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_Keys_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_Keys_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_Options_s ##############

package Net::WSF::Raw::zxwsf_di_Options_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Option_get = *Net::WSF::Rawc::zxwsf_di_Options_s_Option_get;
*swig_Option_set = *Net::WSF::Rawc::zxwsf_di_Options_s_Option_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_Options_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_Options_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_Query_s ##############

package Net::WSF::Raw::zxwsf_di_Query_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_RequestedService_get = *Net::WSF::Rawc::zxwsf_di_Query_s_RequestedService_get;
*swig_RequestedService_set = *Net::WSF::Rawc::zxwsf_di_Query_s_RequestedService_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_Query_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_Query_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_QueryResponse_s ##############

package Net::WSF::Raw::zxwsf_di_QueryResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_QueryResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_QueryResponse_s_Status_set;
*swig_EndpointReference_get = *Net::WSF::Rawc::zxwsf_di_QueryResponse_s_EndpointReference_get;
*swig_EndpointReference_set = *Net::WSF::Rawc::zxwsf_di_QueryResponse_s_EndpointReference_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_QueryResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_QueryResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_RequestedService_s ##############

package Net::WSF::Raw::zxwsf_di_RequestedService_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceType_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_ServiceType_get;
*swig_ServiceType_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_ServiceType_set;
*swig_ProviderID_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_ProviderID_get;
*swig_ProviderID_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_ProviderID_set;
*swig_Options_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Options_get;
*swig_Options_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Options_set;
*swig_SecurityMechID_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_SecurityMechID_get;
*swig_SecurityMechID_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_SecurityMechID_set;
*swig_Framework_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Framework_get;
*swig_Framework_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Framework_set;
*swig_Action_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Action_get;
*swig_Action_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_Action_set;
*swig_reqID_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_reqID_get;
*swig_reqID_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_reqID_set;
*swig_resultsType_get = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_resultsType_get;
*swig_resultsType_set = *Net::WSF::Rawc::zxwsf_di_RequestedService_s_resultsType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_RequestedService_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_RequestedService_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SecurityContext_s ##############

package Net::WSF::Raw::zxwsf_di_SecurityContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SecurityMechID_get = *Net::WSF::Rawc::zxwsf_di_SecurityContext_s_SecurityMechID_get;
*swig_SecurityMechID_set = *Net::WSF::Rawc::zxwsf_di_SecurityContext_s_SecurityMechID_set;
*swig_Token_get = *Net::WSF::Rawc::zxwsf_di_SecurityContext_s_Token_get;
*swig_Token_set = *Net::WSF::Rawc::zxwsf_di_SecurityContext_s_Token_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SecurityContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SecurityContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_ServiceContext_s ##############

package Net::WSF::Raw::zxwsf_di_ServiceContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceType_get = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_ServiceType_get;
*swig_ServiceType_set = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_ServiceType_set;
*swig_Options_get = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_Options_get;
*swig_Options_set = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_Options_set;
*swig_EndpointContext_get = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_EndpointContext_get;
*swig_EndpointContext_set = *Net::WSF::Rawc::zxwsf_di_ServiceContext_s_EndpointContext_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_ServiceContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_ServiceContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMD_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMD_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Abstract_get = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_Abstract_get;
*swig_Abstract_set = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_Abstract_set;
*swig_ProviderID_get = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_ProviderID_get;
*swig_ProviderID_set = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_ProviderID_set;
*swig_ServiceContext_get = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_ServiceContext_get;
*swig_ServiceContext_set = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_ServiceContext_set;
*swig_svcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_svcMDID_get;
*swig_svcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMD_s_svcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMD_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMD_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationAdd_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationAdd_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationAdd_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationAdd_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationAddResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationAddResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_s_Status_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationAddResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationAddResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationDelete_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationDelete_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationDelete_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationDelete_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationDeleteResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationDeleteResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_s_Status_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationDeleteResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationDeleteResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationQuery_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationQuery_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationQuery_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationQuery_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDAssociationQueryResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDAssociationQueryResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_s_Status_set;
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDAssociationQueryResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDAssociationQueryResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDDelete_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDDelete_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDDelete_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDDelete_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDDeleteResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDDeleteResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_s_Status_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDDeleteResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDDeleteResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDQuery_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDQuery_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_s_SvcMDID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDQuery_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDQuery_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDQueryResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDQueryResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_s_Status_set;
*swig_SvcMD_get = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_s_SvcMD_get;
*swig_SvcMD_set = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_s_SvcMD_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDQueryResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDQueryResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDRegister_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDRegister_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMD_get = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_s_SvcMD_get;
*swig_SvcMD_set = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_s_SvcMD_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDRegister_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDRegister_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDRegisterResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDRegisterResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_Status_set;
*swig_SvcMDID_get = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_SvcMDID_get;
*swig_SvcMDID_set = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_SvcMDID_set;
*swig_Keys_get = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_Keys_get;
*swig_Keys_set = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_s_Keys_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDRegisterResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDRegisterResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDReplace_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDReplace_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMD_get = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_s_SvcMD_get;
*swig_SvcMD_set = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_s_SvcMD_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDReplace_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDReplace_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_di_SvcMDReplaceResponse_s ##############

package Net::WSF::Raw::zxwsf_di_SvcMDReplaceResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_s_Status_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_di_SvcMDReplaceResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_di_SvcMDReplaceResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_dise_Body_s ##############

package Net::WSF::Raw::zxwsf_dise_Body_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SvcMDAssociationAdd_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationAdd_get;
*swig_SvcMDAssociationAdd_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationAdd_set;
*swig_SvcMDAssociationAddResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationAddResponse_get;
*swig_SvcMDAssociationAddResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationAddResponse_set;
*swig_SvcMDAssociationDelete_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationDelete_get;
*swig_SvcMDAssociationDelete_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationDelete_set;
*swig_SvcMDAssociationDeleteResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationDeleteResponse_get;
*swig_SvcMDAssociationDeleteResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationDeleteResponse_set;
*swig_SvcMDAssociationQuery_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationQuery_get;
*swig_SvcMDAssociationQuery_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationQuery_set;
*swig_SvcMDAssociationQueryResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationQueryResponse_get;
*swig_SvcMDAssociationQueryResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDAssociationQueryResponse_set;
*swig_SvcMDRegister_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDRegister_get;
*swig_SvcMDRegister_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDRegister_set;
*swig_SvcMDRegisterResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDRegisterResponse_get;
*swig_SvcMDRegisterResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDRegisterResponse_set;
*swig_SvcMDDelete_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDDelete_get;
*swig_SvcMDDelete_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDDelete_set;
*swig_SvcMDDeleteResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDDeleteResponse_get;
*swig_SvcMDDeleteResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDDeleteResponse_set;
*swig_SvcMDQuery_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDQuery_get;
*swig_SvcMDQuery_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDQuery_set;
*swig_SvcMDQueryResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDQueryResponse_get;
*swig_SvcMDQueryResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDQueryResponse_set;
*swig_SvcMDReplace_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDReplace_get;
*swig_SvcMDReplace_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDReplace_set;
*swig_SvcMDReplaceResponse_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDReplaceResponse_get;
*swig_SvcMDReplaceResponse_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_SvcMDReplaceResponse_set;
*swig_Fault_get = *Net::WSF::Rawc::zxwsf_dise_Body_s_Fault_get;
*swig_Fault_set = *Net::WSF::Rawc::zxwsf_dise_Body_s_Fault_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_dise_Body_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_dise_Body_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_dise_Envelope_s ##############

package Net::WSF::Raw::zxwsf_dise_Envelope_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Header_get = *Net::WSF::Rawc::zxwsf_dise_Envelope_s_Header_get;
*swig_Header_set = *Net::WSF::Rawc::zxwsf_dise_Envelope_s_Header_set;
*swig_Body_get = *Net::WSF::Rawc::zxwsf_dise_Envelope_s_Body_get;
*swig_Body_set = *Net::WSF::Rawc::zxwsf_dise_Envelope_s_Body_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_dise_Envelope_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_dise_Envelope_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_dise_Fault_s ##############

package Net::WSF::Raw::zxwsf_dise_Fault_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_faultcode_get = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultcode_get;
*swig_faultcode_set = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultcode_set;
*swig_faultstring_get = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultstring_get;
*swig_faultstring_set = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultstring_set;
*swig_faultactor_get = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultactor_get;
*swig_faultactor_set = *Net::WSF::Rawc::zxwsf_dise_Fault_s_faultactor_set;
*swig_detail_get = *Net::WSF::Rawc::zxwsf_dise_Fault_s_detail_get;
*swig_detail_set = *Net::WSF::Rawc::zxwsf_dise_Fault_s_detail_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_dise_Fault_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_dise_Fault_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_dise_Header_s ##############

package Net::WSF::Raw::zxwsf_dise_Header_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_MessageID_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_MessageID_get;
*swig_MessageID_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_MessageID_set;
*swig_RelatesTo_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_RelatesTo_get;
*swig_RelatesTo_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_RelatesTo_set;
*swig_ReplyTo_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_ReplyTo_get;
*swig_ReplyTo_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_ReplyTo_set;
*swig_From_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_From_get;
*swig_From_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_From_set;
*swig_FaultTo_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_FaultTo_get;
*swig_FaultTo_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_FaultTo_set;
*swig_To_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_To_get;
*swig_To_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_To_set;
*swig_Action_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_Action_get;
*swig_Action_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_Action_set;
*swig_Framework_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_Framework_get;
*swig_Framework_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_Framework_set;
*swig_b_Framework_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_b_Framework_get;
*swig_b_Framework_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_b_Framework_set;
*swig_Sender_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_Sender_get;
*swig_Sender_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_Sender_set;
*swig_CredentialsContext_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_CredentialsContext_get;
*swig_CredentialsContext_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_CredentialsContext_set;
*swig_EndpointUpdate_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_EndpointUpdate_get;
*swig_EndpointUpdate_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_EndpointUpdate_set;
*swig_Timeout_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_Timeout_get;
*swig_Timeout_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_Timeout_set;
*swig_ProcessingContext_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_ProcessingContext_get;
*swig_ProcessingContext_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_ProcessingContext_set;
*swig_ApplicationEPR_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_ApplicationEPR_get;
*swig_ApplicationEPR_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_ApplicationEPR_set;
*swig_RedirectRequest_get = *Net::WSF::Rawc::zxwsf_dise_Header_s_RedirectRequest_get;
*swig_RedirectRequest_set = *Net::WSF::Rawc::zxwsf_dise_Header_s_RedirectRequest_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_dise_Header_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_dise_Header_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_dise_detail_s ##############

package Net::WSF::Raw::zxwsf_dise_detail_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_dise_detail_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_dise_detail_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_e_Body_s ##############

package Net::WSF::Raw::zxwsf_e_Body_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Query_get = *Net::WSF::Rawc::zxwsf_e_Body_s_Query_get;
*swig_Query_set = *Net::WSF::Rawc::zxwsf_e_Body_s_Query_set;
*swig_QueryResponse_get = *Net::WSF::Rawc::zxwsf_e_Body_s_QueryResponse_get;
*swig_QueryResponse_set = *Net::WSF::Rawc::zxwsf_e_Body_s_QueryResponse_set;
*swig_di12_Query_get = *Net::WSF::Rawc::zxwsf_e_Body_s_di12_Query_get;
*swig_di12_Query_set = *Net::WSF::Rawc::zxwsf_e_Body_s_di12_Query_set;
*swig_di12_QueryResponse_get = *Net::WSF::Rawc::zxwsf_e_Body_s_di12_QueryResponse_get;
*swig_di12_QueryResponse_set = *Net::WSF::Rawc::zxwsf_e_Body_s_di12_QueryResponse_set;
*swig_Modify_get = *Net::WSF::Rawc::zxwsf_e_Body_s_Modify_get;
*swig_Modify_set = *Net::WSF::Rawc::zxwsf_e_Body_s_Modify_set;
*swig_ModifyResponse_get = *Net::WSF::Rawc::zxwsf_e_Body_s_ModifyResponse_get;
*swig_ModifyResponse_set = *Net::WSF::Rawc::zxwsf_e_Body_s_ModifyResponse_set;
*swig_Fault_get = *Net::WSF::Rawc::zxwsf_e_Body_s_Fault_get;
*swig_Fault_set = *Net::WSF::Rawc::zxwsf_e_Body_s_Fault_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_e_Body_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_e_Body_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_e_Envelope_s ##############

package Net::WSF::Raw::zxwsf_e_Envelope_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Header_get = *Net::WSF::Rawc::zxwsf_e_Envelope_s_Header_get;
*swig_Header_set = *Net::WSF::Rawc::zxwsf_e_Envelope_s_Header_set;
*swig_Body_get = *Net::WSF::Rawc::zxwsf_e_Envelope_s_Body_get;
*swig_Body_set = *Net::WSF::Rawc::zxwsf_e_Envelope_s_Body_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_e_Envelope_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_e_Envelope_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_e_Fault_s ##############

package Net::WSF::Raw::zxwsf_e_Fault_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_faultcode_get = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultcode_get;
*swig_faultcode_set = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultcode_set;
*swig_faultstring_get = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultstring_get;
*swig_faultstring_set = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultstring_set;
*swig_faultactor_get = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultactor_get;
*swig_faultactor_set = *Net::WSF::Rawc::zxwsf_e_Fault_s_faultactor_set;
*swig_detail_get = *Net::WSF::Rawc::zxwsf_e_Fault_s_detail_get;
*swig_detail_set = *Net::WSF::Rawc::zxwsf_e_Fault_s_detail_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_e_Fault_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_e_Fault_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_e_Header_s ##############

package Net::WSF::Raw::zxwsf_e_Header_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_MessageID_get = *Net::WSF::Rawc::zxwsf_e_Header_s_MessageID_get;
*swig_MessageID_set = *Net::WSF::Rawc::zxwsf_e_Header_s_MessageID_set;
*swig_RelatesTo_get = *Net::WSF::Rawc::zxwsf_e_Header_s_RelatesTo_get;
*swig_RelatesTo_set = *Net::WSF::Rawc::zxwsf_e_Header_s_RelatesTo_set;
*swig_ReplyTo_get = *Net::WSF::Rawc::zxwsf_e_Header_s_ReplyTo_get;
*swig_ReplyTo_set = *Net::WSF::Rawc::zxwsf_e_Header_s_ReplyTo_set;
*swig_From_get = *Net::WSF::Rawc::zxwsf_e_Header_s_From_get;
*swig_From_set = *Net::WSF::Rawc::zxwsf_e_Header_s_From_set;
*swig_FaultTo_get = *Net::WSF::Rawc::zxwsf_e_Header_s_FaultTo_get;
*swig_FaultTo_set = *Net::WSF::Rawc::zxwsf_e_Header_s_FaultTo_set;
*swig_To_get = *Net::WSF::Rawc::zxwsf_e_Header_s_To_get;
*swig_To_set = *Net::WSF::Rawc::zxwsf_e_Header_s_To_set;
*swig_Action_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Action_get;
*swig_Action_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Action_set;
*swig_Framework_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Framework_get;
*swig_Framework_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Framework_set;
*swig_b_Framework_get = *Net::WSF::Rawc::zxwsf_e_Header_s_b_Framework_get;
*swig_b_Framework_set = *Net::WSF::Rawc::zxwsf_e_Header_s_b_Framework_set;
*swig_Sender_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Sender_get;
*swig_Sender_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Sender_set;
*swig_TargetIdentity_get = *Net::WSF::Rawc::zxwsf_e_Header_s_TargetIdentity_get;
*swig_TargetIdentity_set = *Net::WSF::Rawc::zxwsf_e_Header_s_TargetIdentity_set;
*swig_CredentialsContext_get = *Net::WSF::Rawc::zxwsf_e_Header_s_CredentialsContext_get;
*swig_CredentialsContext_set = *Net::WSF::Rawc::zxwsf_e_Header_s_CredentialsContext_set;
*swig_EndpointUpdate_get = *Net::WSF::Rawc::zxwsf_e_Header_s_EndpointUpdate_get;
*swig_EndpointUpdate_set = *Net::WSF::Rawc::zxwsf_e_Header_s_EndpointUpdate_set;
*swig_Timeout_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Timeout_get;
*swig_Timeout_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Timeout_set;
*swig_ProcessingContext_get = *Net::WSF::Rawc::zxwsf_e_Header_s_ProcessingContext_get;
*swig_ProcessingContext_set = *Net::WSF::Rawc::zxwsf_e_Header_s_ProcessingContext_set;
*swig_Consent_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Consent_get;
*swig_Consent_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Consent_set;
*swig_UsageDirective_get = *Net::WSF::Rawc::zxwsf_e_Header_s_UsageDirective_get;
*swig_UsageDirective_set = *Net::WSF::Rawc::zxwsf_e_Header_s_UsageDirective_set;
*swig_ApplicationEPR_get = *Net::WSF::Rawc::zxwsf_e_Header_s_ApplicationEPR_get;
*swig_ApplicationEPR_set = *Net::WSF::Rawc::zxwsf_e_Header_s_ApplicationEPR_set;
*swig_UserInteraction_get = *Net::WSF::Rawc::zxwsf_e_Header_s_UserInteraction_get;
*swig_UserInteraction_set = *Net::WSF::Rawc::zxwsf_e_Header_s_UserInteraction_set;
*swig_RedirectRequest_get = *Net::WSF::Rawc::zxwsf_e_Header_s_RedirectRequest_get;
*swig_RedirectRequest_set = *Net::WSF::Rawc::zxwsf_e_Header_s_RedirectRequest_set;
*swig_Correlation_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Correlation_get;
*swig_Correlation_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Correlation_set;
*swig_Provider_get = *Net::WSF::Rawc::zxwsf_e_Header_s_Provider_get;
*swig_Provider_set = *Net::WSF::Rawc::zxwsf_e_Header_s_Provider_set;
*swig_b12_ProcessingContext_get = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_ProcessingContext_get;
*swig_b12_ProcessingContext_set = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_ProcessingContext_set;
*swig_b12_Consent_get = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_Consent_get;
*swig_b12_Consent_set = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_Consent_set;
*swig_b12_UsageDirective_get = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_UsageDirective_get;
*swig_b12_UsageDirective_set = *Net::WSF::Rawc::zxwsf_e_Header_s_b12_UsageDirective_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_e_Header_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_e_Header_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_e_detail_s ##############

package Net::WSF::Raw::zxwsf_e_detail_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_e_detail_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_e_detail_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Confirm_s ##############

package Net::WSF::Raw::zxwsf_is12_Confirm_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is12_Confirm_s_name_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Confirm_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Confirm_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_EncryptedResourceID_s ##############

package Net::WSF::Raw::zxwsf_is12_EncryptedResourceID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_EncryptedData_get = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_s_EncryptedData_get;
*swig_EncryptedData_set = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_s_EncryptedData_set;
*swig_EncryptedKey_get = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_s_EncryptedKey_get;
*swig_EncryptedKey_set = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_s_EncryptedKey_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_EncryptedResourceID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_EncryptedResourceID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Extension_s ##############

package Net::WSF::Raw::zxwsf_is12_Extension_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Extension_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Extension_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Help_s ##############

package Net::WSF::Raw::zxwsf_is12_Help_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_label_get = *Net::WSF::Rawc::zxwsf_is12_Help_s_label_get;
*swig_label_set = *Net::WSF::Rawc::zxwsf_is12_Help_s_label_set;
*swig_link_get = *Net::WSF::Rawc::zxwsf_is12_Help_s_link_get;
*swig_link_set = *Net::WSF::Rawc::zxwsf_is12_Help_s_link_set;
*swig_moreLink_get = *Net::WSF::Rawc::zxwsf_is12_Help_s_moreLink_get;
*swig_moreLink_set = *Net::WSF::Rawc::zxwsf_is12_Help_s_moreLink_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Help_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Help_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Inquiry_s ##############

package Net::WSF::Raw::zxwsf_is12_Inquiry_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Help_set;
*swig_Select_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Select_get;
*swig_Select_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Select_set;
*swig_Confirm_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Confirm_get;
*swig_Confirm_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Confirm_set;
*swig_Text_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Text_get;
*swig_Text_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_Text_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_id_set;
*swig_title_get = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_title_get;
*swig_title_set = *Net::WSF::Rawc::zxwsf_is12_Inquiry_s_title_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Inquiry_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Inquiry_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_InteractionRequest_s ##############

package Net::WSF::Raw::zxwsf_is12_InteractionRequest_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Inquiry_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_Inquiry_get;
*swig_Inquiry_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_Inquiry_set;
*swig_KeyInfo_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_KeyInfo_get;
*swig_KeyInfo_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_KeyInfo_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_id_set;
*swig_language_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_language_get;
*swig_language_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_language_set;
*swig_maxInteractTime_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_maxInteractTime_get;
*swig_maxInteractTime_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_maxInteractTime_set;
*swig_signed_is_c_keyword_get = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_signed_is_c_keyword_get;
*swig_signed_is_c_keyword_set = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_s_signed_is_c_keyword_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_InteractionRequest_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_InteractionRequest_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_InteractionResponse_s ##############

package Net::WSF::Raw::zxwsf_is12_InteractionResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_Status_set;
*swig_InteractionStatement_get = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_InteractionStatement_get;
*swig_InteractionStatement_set = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_InteractionStatement_set;
*swig_Parameter_get = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_Parameter_get;
*swig_Parameter_set = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_s_Parameter_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_InteractionResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_InteractionResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_InteractionService_s ##############

package Net::WSF::Raw::zxwsf_is12_InteractionService_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ServiceInstance_get = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_ServiceInstance_get;
*swig_ServiceInstance_set = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_ServiceInstance_set;
*swig_Options_get = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_Options_get;
*swig_Options_set = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_Options_set;
*swig_Abstract_get = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_Abstract_get;
*swig_Abstract_set = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_Abstract_set;
*swig_entryID_get = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_entryID_get;
*swig_entryID_set = *Net::WSF::Rawc::zxwsf_is12_InteractionService_s_entryID_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_InteractionService_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_InteractionService_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_InteractionStatement_s ##############

package Net::WSF::Raw::zxwsf_is12_InteractionStatement_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Inquiry_get = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_s_Inquiry_get;
*swig_Inquiry_set = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_s_Inquiry_set;
*swig_Signature_get = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_s_Signature_get;
*swig_Signature_set = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_s_Signature_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_InteractionStatement_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_InteractionStatement_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Item_s ##############

package Net::WSF::Raw::zxwsf_is12_Item_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is12_Item_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is12_Item_s_Hint_set;
*swig_label_get = *Net::WSF::Rawc::zxwsf_is12_Item_s_label_get;
*swig_label_set = *Net::WSF::Rawc::zxwsf_is12_Item_s_label_set;
*swig_value_get = *Net::WSF::Rawc::zxwsf_is12_Item_s_value_get;
*swig_value_set = *Net::WSF::Rawc::zxwsf_is12_Item_s_value_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Item_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Item_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Parameter_s ##############

package Net::WSF::Raw::zxwsf_is12_Parameter_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_name_get = *Net::WSF::Rawc::zxwsf_is12_Parameter_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is12_Parameter_s_name_set;
*swig_value_get = *Net::WSF::Rawc::zxwsf_is12_Parameter_s_value_get;
*swig_value_set = *Net::WSF::Rawc::zxwsf_is12_Parameter_s_value_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Parameter_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Parameter_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_RedirectRequest_s ##############

package Net::WSF::Raw::zxwsf_is12_RedirectRequest_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_redirectURL_get = *Net::WSF::Rawc::zxwsf_is12_RedirectRequest_s_redirectURL_get;
*swig_redirectURL_set = *Net::WSF::Rawc::zxwsf_is12_RedirectRequest_s_redirectURL_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_RedirectRequest_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_RedirectRequest_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_ResourceID_s ##############

package Net::WSF::Raw::zxwsf_is12_ResourceID_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_id_get = *Net::WSF::Rawc::zxwsf_is12_ResourceID_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is12_ResourceID_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_ResourceID_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_ResourceID_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Select_s ##############

package Net::WSF::Raw::zxwsf_is12_Select_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_name_set;
*swig_Item_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_Item_get;
*swig_Item_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_Item_set;
*swig_multiple_get = *Net::WSF::Rawc::zxwsf_is12_Select_s_multiple_get;
*swig_multiple_set = *Net::WSF::Rawc::zxwsf_is12_Select_s_multiple_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Select_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Select_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Status_s ##############

package Net::WSF::Raw::zxwsf_is12_Status_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_is12_Status_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_is12_Status_s_Status_set;
*swig_code_get = *Net::WSF::Rawc::zxwsf_is12_Status_s_code_get;
*swig_code_set = *Net::WSF::Rawc::zxwsf_is12_Status_s_code_set;
*swig_ref_get = *Net::WSF::Rawc::zxwsf_is12_Status_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_is12_Status_s_ref_set;
*swig_comment_get = *Net::WSF::Rawc::zxwsf_is12_Status_s_comment_get;
*swig_comment_set = *Net::WSF::Rawc::zxwsf_is12_Status_s_comment_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Status_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Status_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_Text_s ##############

package Net::WSF::Raw::zxwsf_is12_Text_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_name_set;
*swig_minChars_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_minChars_get;
*swig_minChars_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_minChars_set;
*swig_maxChars_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_maxChars_get;
*swig_maxChars_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_maxChars_set;
*swig_format_get = *Net::WSF::Rawc::zxwsf_is12_Text_s_format_get;
*swig_format_set = *Net::WSF::Rawc::zxwsf_is12_Text_s_format_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_Text_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_Text_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is12_UserInteraction_s ##############

package Net::WSF::Raw::zxwsf_is12_UserInteraction_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_InteractionService_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_InteractionService_get;
*swig_InteractionService_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_InteractionService_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_id_set;
*swig_interact_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_interact_get;
*swig_interact_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_interact_set;
*swig_language_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_language_get;
*swig_language_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_language_set;
*swig_redirect_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_redirect_get;
*swig_redirect_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_redirect_set;
*swig_maxInteractTime_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_maxInteractTime_get;
*swig_maxInteractTime_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_maxInteractTime_set;
*swig_actor_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_actor_get;
*swig_actor_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_actor_set;
*swig_mustUnderstand_get = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_mustUnderstand_get;
*swig_mustUnderstand_set = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_s_mustUnderstand_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is12_UserInteraction_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is12_UserInteraction_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Confirm_s ##############

package Net::WSF::Raw::zxwsf_is_Confirm_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is_Confirm_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is_Confirm_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is_Confirm_s_name_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Confirm_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Confirm_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Help_s ##############

package Net::WSF::Raw::zxwsf_is_Help_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_label_get = *Net::WSF::Rawc::zxwsf_is_Help_s_label_get;
*swig_label_set = *Net::WSF::Rawc::zxwsf_is_Help_s_label_set;
*swig_link_get = *Net::WSF::Rawc::zxwsf_is_Help_s_link_get;
*swig_link_set = *Net::WSF::Rawc::zxwsf_is_Help_s_link_set;
*swig_moreLink_get = *Net::WSF::Rawc::zxwsf_is_Help_s_moreLink_get;
*swig_moreLink_set = *Net::WSF::Rawc::zxwsf_is_Help_s_moreLink_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Help_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Help_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Inquiry_s ##############

package Net::WSF::Raw::zxwsf_is_Inquiry_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Help_set;
*swig_Select_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Select_get;
*swig_Select_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Select_set;
*swig_Confirm_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Confirm_get;
*swig_Confirm_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Confirm_set;
*swig_Text_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Text_get;
*swig_Text_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_Text_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_id_set;
*swig_title_get = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_title_get;
*swig_title_set = *Net::WSF::Rawc::zxwsf_is_Inquiry_s_title_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Inquiry_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Inquiry_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_InteractionRequest_s ##############

package Net::WSF::Raw::zxwsf_is_InteractionRequest_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Inquiry_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_Inquiry_get;
*swig_Inquiry_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_Inquiry_set;
*swig_KeyInfo_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_KeyInfo_get;
*swig_KeyInfo_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_KeyInfo_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_id_set;
*swig_language_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_language_get;
*swig_language_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_language_set;
*swig_maxInteractTime_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_maxInteractTime_get;
*swig_maxInteractTime_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_maxInteractTime_set;
*swig_signed_is_c_keyword_get = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_signed_is_c_keyword_get;
*swig_signed_is_c_keyword_set = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_s_signed_is_c_keyword_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_InteractionRequest_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_InteractionRequest_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_InteractionResponse_s ##############

package Net::WSF::Raw::zxwsf_is_InteractionResponse_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_Status_set;
*swig_InteractionStatement_get = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_InteractionStatement_get;
*swig_InteractionStatement_set = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_InteractionStatement_set;
*swig_Parameter_get = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_Parameter_get;
*swig_Parameter_set = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_s_Parameter_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_InteractionResponse_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_InteractionResponse_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_InteractionStatement_s ##############

package Net::WSF::Raw::zxwsf_is_InteractionStatement_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Inquiry_get = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_s_Inquiry_get;
*swig_Inquiry_set = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_s_Inquiry_set;
*swig_Signature_get = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_s_Signature_get;
*swig_Signature_set = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_s_Signature_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_InteractionStatement_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_InteractionStatement_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Item_s ##############

package Net::WSF::Raw::zxwsf_is_Item_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is_Item_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is_Item_s_Hint_set;
*swig_label_get = *Net::WSF::Rawc::zxwsf_is_Item_s_label_get;
*swig_label_set = *Net::WSF::Rawc::zxwsf_is_Item_s_label_set;
*swig_value_get = *Net::WSF::Rawc::zxwsf_is_Item_s_value_get;
*swig_value_set = *Net::WSF::Rawc::zxwsf_is_Item_s_value_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Item_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Item_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Parameter_s ##############

package Net::WSF::Raw::zxwsf_is_Parameter_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_name_get = *Net::WSF::Rawc::zxwsf_is_Parameter_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is_Parameter_s_name_set;
*swig_value_get = *Net::WSF::Rawc::zxwsf_is_Parameter_s_value_get;
*swig_value_set = *Net::WSF::Rawc::zxwsf_is_Parameter_s_value_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Parameter_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Parameter_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Select_s ##############

package Net::WSF::Raw::zxwsf_is_Select_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is_Select_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is_Select_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is_Select_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is_Select_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is_Select_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is_Select_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is_Select_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is_Select_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is_Select_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is_Select_s_name_set;
*swig_Item_get = *Net::WSF::Rawc::zxwsf_is_Select_s_Item_get;
*swig_Item_set = *Net::WSF::Rawc::zxwsf_is_Select_s_Item_set;
*swig_multiple_get = *Net::WSF::Rawc::zxwsf_is_Select_s_multiple_get;
*swig_multiple_set = *Net::WSF::Rawc::zxwsf_is_Select_s_multiple_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Select_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Select_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_is_Text_s ##############

package Net::WSF::Raw::zxwsf_is_Text_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Help_get = *Net::WSF::Rawc::zxwsf_is_Text_s_Help_get;
*swig_Help_set = *Net::WSF::Rawc::zxwsf_is_Text_s_Help_set;
*swig_Hint_get = *Net::WSF::Rawc::zxwsf_is_Text_s_Hint_get;
*swig_Hint_set = *Net::WSF::Rawc::zxwsf_is_Text_s_Hint_set;
*swig_Label_get = *Net::WSF::Rawc::zxwsf_is_Text_s_Label_get;
*swig_Label_set = *Net::WSF::Rawc::zxwsf_is_Text_s_Label_set;
*swig_Value_get = *Net::WSF::Rawc::zxwsf_is_Text_s_Value_get;
*swig_Value_set = *Net::WSF::Rawc::zxwsf_is_Text_s_Value_set;
*swig_name_get = *Net::WSF::Rawc::zxwsf_is_Text_s_name_get;
*swig_name_set = *Net::WSF::Rawc::zxwsf_is_Text_s_name_set;
*swig_minChars_get = *Net::WSF::Rawc::zxwsf_is_Text_s_minChars_get;
*swig_minChars_set = *Net::WSF::Rawc::zxwsf_is_Text_s_minChars_set;
*swig_maxChars_get = *Net::WSF::Rawc::zxwsf_is_Text_s_maxChars_get;
*swig_maxChars_set = *Net::WSF::Rawc::zxwsf_is_Text_s_maxChars_set;
*swig_format_get = *Net::WSF::Rawc::zxwsf_is_Text_s_format_get;
*swig_format_set = *Net::WSF::Rawc::zxwsf_is_Text_s_format_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_is_Text_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_is_Text_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_lu_Extension_s ##############

package Net::WSF::Raw::zxwsf_lu_Extension_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_lu_Extension_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_lu_Extension_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_lu_Status_s ##############

package Net::WSF::Raw::zxwsf_lu_Status_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Status_get = *Net::WSF::Rawc::zxwsf_lu_Status_s_Status_get;
*swig_Status_set = *Net::WSF::Rawc::zxwsf_lu_Status_s_Status_set;
*swig_code_get = *Net::WSF::Rawc::zxwsf_lu_Status_s_code_get;
*swig_code_set = *Net::WSF::Rawc::zxwsf_lu_Status_s_code_set;
*swig_ref_get = *Net::WSF::Rawc::zxwsf_lu_Status_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_lu_Status_s_ref_set;
*swig_comment_get = *Net::WSF::Rawc::zxwsf_lu_Status_s_comment_get;
*swig_comment_set = *Net::WSF::Rawc::zxwsf_lu_Status_s_comment_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_lu_Status_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_lu_Status_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_lu_TestResult_s ##############

package Net::WSF::Raw::zxwsf_lu_TestResult_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_itemIDRef_get = *Net::WSF::Rawc::zxwsf_lu_TestResult_s_itemIDRef_get;
*swig_itemIDRef_set = *Net::WSF::Rawc::zxwsf_lu_TestResult_s_itemIDRef_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_lu_TestResult_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_lu_TestResult_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sbf_Framework_s ##############

package Net::WSF::Raw::zxwsf_sbf_Framework_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_version_get = *Net::WSF::Rawc::zxwsf_sbf_Framework_s_version_get;
*swig_version_set = *Net::WSF::Rawc::zxwsf_sbf_Framework_s_version_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sbf_Framework_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sbf_Framework_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec12_ProxyInfoConfirmationData_s ##############

package Net::WSF::Raw::zxwsf_sec12_ProxyInfoConfirmationData_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_AssertionIDReference_get = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_AssertionIDReference_get;
*swig_AssertionIDReference_set = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_AssertionIDReference_set;
*swig_Issuer_get = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_Issuer_get;
*swig_Issuer_set = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_Issuer_set;
*swig_IssueInstant_get = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_IssueInstant_get;
*swig_IssueInstant_set = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_IssueInstant_set;
*swig_Signature_get = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_Signature_get;
*swig_Signature_set = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_Signature_set;
*swig_id_get = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_s_id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec12_ProxyInfoConfirmationData_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec12_ProxyInfoConfirmationData_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec12_ResourceAccessStatement_s ##############

package Net::WSF::Raw::zxwsf_sec12_ResourceAccessStatement_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ProxySubject_get = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_s_ProxySubject_get;
*swig_ProxySubject_set = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_s_ProxySubject_set;
*swig_SessionContext_get = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_s_SessionContext_get;
*swig_SessionContext_set = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_s_SessionContext_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec12_ResourceAccessStatement_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec12_ResourceAccessStatement_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec12_SessionContext_s ##############

package Net::WSF::Raw::zxwsf_sec12_SessionContext_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_SessionSubject_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_SessionSubject_get;
*swig_SessionSubject_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_SessionSubject_set;
*swig_ProviderID_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_ProviderID_get;
*swig_ProviderID_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_ProviderID_set;
*swig_RequestAuthnContext_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_RequestAuthnContext_get;
*swig_RequestAuthnContext_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_RequestAuthnContext_set;
*swig_SessionIndex_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_SessionIndex_get;
*swig_SessionIndex_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_SessionIndex_set;
*swig_AuthenticationInstant_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_AuthenticationInstant_get;
*swig_AuthenticationInstant_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_AuthenticationInstant_set;
*swig_AssertionIssueInstant_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_AssertionIssueInstant_get;
*swig_AssertionIssueInstant_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_s_AssertionIssueInstant_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec12_SessionContext_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec12_SessionContext_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec12_SessionContextStatement_s ##############

package Net::WSF::Raw::zxwsf_sec12_SessionContextStatement_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ProxySubject_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_s_ProxySubject_get;
*swig_ProxySubject_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_s_ProxySubject_set;
*swig_SessionContext_get = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_s_SessionContext_get;
*swig_SessionContext_set = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_s_SessionContext_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec12_SessionContextStatement_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec12_SessionContextStatement_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec12_ValidityRestrictionCondition_s ##############

package Net::WSF::Raw::zxwsf_sec12_ValidityRestrictionCondition_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_NumberOfUses_get = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_s_NumberOfUses_get;
*swig_NumberOfUses_set = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_s_NumberOfUses_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec12_ValidityRestrictionCondition_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec12_ValidityRestrictionCondition_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec_Token_s ##############

package Net::WSF::Raw::zxwsf_sec_Token_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_id_get = *Net::WSF::Rawc::zxwsf_sec_Token_s_id_get;
*swig_id_set = *Net::WSF::Rawc::zxwsf_sec_Token_s_id_set;
*swig_ref_get = *Net::WSF::Rawc::zxwsf_sec_Token_s_ref_get;
*swig_ref_set = *Net::WSF::Rawc::zxwsf_sec_Token_s_ref_set;
*swig_usage_get = *Net::WSF::Rawc::zxwsf_sec_Token_s_usage_get;
*swig_usage_set = *Net::WSF::Rawc::zxwsf_sec_Token_s_usage_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec_Token_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec_Token_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec_TokenPolicy_s ##############

package Net::WSF::Raw::zxwsf_sec_TokenPolicy_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_validUntil_get = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_validUntil_get;
*swig_validUntil_set = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_validUntil_set;
*swig_issueTo_get = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_issueTo_get;
*swig_issueTo_set = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_issueTo_set;
*swig_type_get = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_type_get;
*swig_type_set = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_type_set;
*swig_wantDSEPR_get = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_wantDSEPR_get;
*swig_wantDSEPR_set = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_s_wantDSEPR_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec_TokenPolicy_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec_TokenPolicy_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec_TransitedProvider_s ##############

package Net::WSF::Raw::zxwsf_sec_TransitedProvider_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_timeStamp_get = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_s_timeStamp_get;
*swig_timeStamp_set = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_s_timeStamp_set;
*swig_confirmationURI_get = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_s_confirmationURI_get;
*swig_confirmationURI_set = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_s_confirmationURI_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec_TransitedProvider_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec_TransitedProvider_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_sec_TransitedProviderPath_s ##############

package Net::WSF::Raw::zxwsf_sec_TransitedProviderPath_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_TransitedProvider_get = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_s_TransitedProvider_get;
*swig_TransitedProvider_set = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_s_TransitedProvider_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_sec_TransitedProviderPath_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_sec_TransitedProviderPath_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_BinarySecurityToken_s ##############

package Net::WSF::Raw::zxwsf_wsse_BinarySecurityToken_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_Id_set;
*swig_EncodingType_get = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_EncodingType_get;
*swig_EncodingType_set = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_EncodingType_set;
*swig_ValueType_get = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_ValueType_get;
*swig_ValueType_set = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_s_ValueType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_BinarySecurityToken_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_BinarySecurityToken_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Embedded_s ##############

package Net::WSF::Raw::zxwsf_wsse_Embedded_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_ValueType_get = *Net::WSF::Rawc::zxwsf_wsse_Embedded_s_ValueType_get;
*swig_ValueType_set = *Net::WSF::Rawc::zxwsf_wsse_Embedded_s_ValueType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Embedded_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Embedded_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_KeyIdentifier_s ##############

package Net::WSF::Raw::zxwsf_wsse_KeyIdentifier_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_Id_set;
*swig_EncodingType_get = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_EncodingType_get;
*swig_EncodingType_set = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_EncodingType_set;
*swig_ValueType_get = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_ValueType_get;
*swig_ValueType_set = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_s_ValueType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_KeyIdentifier_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_KeyIdentifier_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Nonce_s ##############

package Net::WSF::Raw::zxwsf_wsse_Nonce_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_Nonce_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_Nonce_s_Id_set;
*swig_EncodingType_get = *Net::WSF::Rawc::zxwsf_wsse_Nonce_s_EncodingType_get;
*swig_EncodingType_set = *Net::WSF::Rawc::zxwsf_wsse_Nonce_s_EncodingType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Nonce_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Nonce_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Password_s ##############

package Net::WSF::Raw::zxwsf_wsse_Password_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_Password_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_Password_s_Id_set;
*swig_Type_get = *Net::WSF::Rawc::zxwsf_wsse_Password_s_Type_get;
*swig_Type_set = *Net::WSF::Rawc::zxwsf_wsse_Password_s_Type_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Password_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Password_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Reference_s ##############

package Net::WSF::Raw::zxwsf_wsse_Reference_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_URI_get = *Net::WSF::Rawc::zxwsf_wsse_Reference_s_URI_get;
*swig_URI_set = *Net::WSF::Rawc::zxwsf_wsse_Reference_s_URI_set;
*swig_ValueType_get = *Net::WSF::Rawc::zxwsf_wsse_Reference_s_ValueType_get;
*swig_ValueType_set = *Net::WSF::Rawc::zxwsf_wsse_Reference_s_ValueType_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Reference_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Reference_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Security_s ##############

package Net::WSF::Raw::zxwsf_wsse_Security_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Security_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Security_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_SecurityTokenReference_s ##############

package Net::WSF::Raw::zxwsf_wsse_SecurityTokenReference_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_s_Id_set;
*swig_Usage_get = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_s_Usage_get;
*swig_Usage_set = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_s_Usage_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_SecurityTokenReference_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_SecurityTokenReference_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_TransformationParameters_s ##############

package Net::WSF::Raw::zxwsf_wsse_TransformationParameters_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_TransformationParameters_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_TransformationParameters_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_Username_s ##############

package Net::WSF::Raw::zxwsf_wsse_Username_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_Username_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_Username_s_Id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_Username_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_Username_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsse_UsernameToken_s ##############

package Net::WSF::Raw::zxwsf_wsse_UsernameToken_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Username_get = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_s_Username_get;
*swig_Username_set = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_s_Username_set;
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_s_Id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsse_UsernameToken_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsse_UsernameToken_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsu_Created_s ##############

package Net::WSF::Raw::zxwsf_wsu_Created_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsu_Created_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsu_Created_s_Id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsu_Created_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsu_Created_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsu_Expires_s ##############

package Net::WSF::Raw::zxwsf_wsu_Expires_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsu_Expires_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsu_Expires_s_Id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsu_Expires_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsu_Expires_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_wsu_Timestamp_s ##############

package Net::WSF::Raw::zxwsf_wsu_Timestamp_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Created_get = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Created_get;
*swig_Created_set = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Created_set;
*swig_Expires_get = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Expires_get;
*swig_Expires_set = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Expires_set;
*swig_Id_get = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Id_get;
*swig_Id_set = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_s_Id_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_wsu_Timestamp_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_wsu_Timestamp_s($self);
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


############# Class : Net::WSF::Raw::zxwsf_root_s ##############

package Net::WSF::Raw::zxwsf_root_s;
use vars qw(@ISA %OWNER %ITERATORS %BLESSEDMEMBERS);
@ISA = qw( Net::WSF::Raw );
%OWNER = ();
%ITERATORS = ();
*swig_Envelope_get = *Net::WSF::Rawc::zxwsf_root_s_Envelope_get;
*swig_Envelope_set = *Net::WSF::Rawc::zxwsf_root_s_Envelope_set;
*swig_dise_Envelope_get = *Net::WSF::Rawc::zxwsf_root_s_dise_Envelope_get;
*swig_dise_Envelope_set = *Net::WSF::Rawc::zxwsf_root_s_dise_Envelope_set;
sub new {
    my $pkg = shift;
    my $self = Net::WSF::Rawc::new_zxwsf_root_s(@_);
    bless $self, $pkg if defined($self);
}

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
        Net::WSF::Rawc::delete_zxwsf_root_s($self);
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

package Net::WSF::Raw;

*zxwsf_id_ATTR = *Net::WSF::Rawc::zxwsf_id_ATTR;
*zxwsf_uri_ATTR = *Net::WSF::Rawc::zxwsf_uri_ATTR;
*zxwsf_redirect_ATTR = *Net::WSF::Rawc::zxwsf_redirect_ATTR;
*zxwsf_name_ATTR = *Net::WSF::Rawc::zxwsf_name_ATTR;
*zxwsf_redirectURL_ATTR = *Net::WSF::Rawc::zxwsf_redirectURL_ATTR;
*zxwsf_interact_ATTR = *Net::WSF::Rawc::zxwsf_interact_ATTR;
*zxwsf_timestamp_ATTR = *Net::WSF::Rawc::zxwsf_timestamp_ATTR;
*zxwsf_updateType_ATTR = *Net::WSF::Rawc::zxwsf_updateType_ATTR;
*zxwsf_descriptionIDRefs_ATTR = *Net::WSF::Rawc::zxwsf_descriptionIDRefs_ATTR;
*zxwsf_multiple_ATTR = *Net::WSF::Rawc::zxwsf_multiple_ATTR;
*zxwsf_link_ATTR = *Net::WSF::Rawc::zxwsf_link_ATTR;
*zxwsf_resultsType_ATTR = *Net::WSF::Rawc::zxwsf_resultsType_ATTR;
*zxwsf_issueTo_ATTR = *Net::WSF::Rawc::zxwsf_issueTo_ATTR;
*zxwsf_language_ATTR = *Net::WSF::Rawc::zxwsf_language_ATTR;
*zxwsf_messageID_ATTR = *Net::WSF::Rawc::zxwsf_messageID_ATTR;
*zxwsf_e_actor_ATTR = *Net::WSF::Rawc::zxwsf_e_actor_ATTR;
*zxwsf_newEntryIDs_ATTR = *Net::WSF::Rawc::zxwsf_newEntryIDs_ATTR;
*zxwsf_version_ATTR = *Net::WSF::Rawc::zxwsf_version_ATTR;
*zxwsf_ref_ATTR = *Net::WSF::Rawc::zxwsf_ref_ATTR;
*zxwsf_code_ATTR = *Net::WSF::Rawc::zxwsf_code_ATTR;
*zxwsf_title_ATTR = *Net::WSF::Rawc::zxwsf_title_ATTR;
*zxwsf_AssertionIssueInstant_ATTR = *Net::WSF::Rawc::zxwsf_AssertionIssueInstant_ATTR;
*zxwsf_wsu_Id_ATTR = *Net::WSF::Rawc::zxwsf_wsu_Id_ATTR;
*zxwsf_minChars_ATTR = *Net::WSF::Rawc::zxwsf_minChars_ATTR;
*zxwsf_e_mustUnderstand_ATTR = *Net::WSF::Rawc::zxwsf_e_mustUnderstand_ATTR;
*zxwsf_usage_ATTR = *Net::WSF::Rawc::zxwsf_usage_ATTR;
*zxwsf_signed_ATTR = *Net::WSF::Rawc::zxwsf_signed_ATTR;
*zxwsf_entryID_ATTR = *Net::WSF::Rawc::zxwsf_entryID_ATTR;
*zxwsf_moreLink_ATTR = *Net::WSF::Rawc::zxwsf_moreLink_ATTR;
*zxwsf_type_ATTR = *Net::WSF::Rawc::zxwsf_type_ATTR;
*zxwsf_validUntil_ATTR = *Net::WSF::Rawc::zxwsf_validUntil_ATTR;
*zxwsf_RelationshipType_ATTR = *Net::WSF::Rawc::zxwsf_RelationshipType_ATTR;
*zxwsf_SessionIndex_ATTR = *Net::WSF::Rawc::zxwsf_SessionIndex_ATTR;
*zxwsf_ZX_TOK_NOT_FOUND_ATTR = *Net::WSF::Rawc::zxwsf_ZX_TOK_NOT_FOUND_ATTR;
*zxwsf_timeStamp_ATTR = *Net::WSF::Rawc::zxwsf_timeStamp_ATTR;
*zxwsf_confirmationURI_ATTR = *Net::WSF::Rawc::zxwsf_confirmationURI_ATTR;
*zxwsf_format_ATTR = *Net::WSF::Rawc::zxwsf_format_ATTR;
*zxwsf_comment_ATTR = *Net::WSF::Rawc::zxwsf_comment_ATTR;
*zxwsf_wantDSEPR_ATTR = *Net::WSF::Rawc::zxwsf_wantDSEPR_ATTR;
*zxwsf_value_ATTR = *Net::WSF::Rawc::zxwsf_value_ATTR;
*zxwsf_AuthenticationInstant_ATTR = *Net::WSF::Rawc::zxwsf_AuthenticationInstant_ATTR;
*zxwsf_EncodingType_ATTR = *Net::WSF::Rawc::zxwsf_EncodingType_ATTR;
*zxwsf_URI_ATTR = *Net::WSF::Rawc::zxwsf_URI_ATTR;
*zxwsf_itemIDRef_ATTR = *Net::WSF::Rawc::zxwsf_itemIDRef_ATTR;
*zxwsf_wsse_Usage_ATTR = *Net::WSF::Rawc::zxwsf_wsse_Usage_ATTR;
*zxwsf_ValueType_ATTR = *Net::WSF::Rawc::zxwsf_ValueType_ATTR;
*zxwsf_xmlns_ATTR = *Net::WSF::Rawc::zxwsf_xmlns_ATTR;
*zxwsf_svcMDID_ATTR = *Net::WSF::Rawc::zxwsf_svcMDID_ATTR;
*zxwsf_affiliationID_ATTR = *Net::WSF::Rawc::zxwsf_affiliationID_ATTR;
*zxwsf_Type_ATTR = *Net::WSF::Rawc::zxwsf_Type_ATTR;
*zxwsf_maxInteractTime_ATTR = *Net::WSF::Rawc::zxwsf_maxInteractTime_ATTR;
*zxwsf_refToMessageID_ATTR = *Net::WSF::Rawc::zxwsf_refToMessageID_ATTR;
*zxwsf_providerID_ATTR = *Net::WSF::Rawc::zxwsf_providerID_ATTR;
*zxwsf_maxChars_ATTR = *Net::WSF::Rawc::zxwsf_maxChars_ATTR;
*zxwsf_reqID_ATTR = *Net::WSF::Rawc::zxwsf_reqID_ATTR;
*zxwsf_label_ATTR = *Net::WSF::Rawc::zxwsf_label_ATTR;
*zxwsf_a_To_ELEM = *Net::WSF::Rawc::zxwsf_a_To_ELEM;
*zxwsf_sec_Token_ELEM = *Net::WSF::Rawc::zxwsf_sec_Token_ELEM;
*zxwsf_b_Timeout_ELEM = *Net::WSF::Rawc::zxwsf_b_Timeout_ELEM;
*zxwsf_is12_Text_ELEM = *Net::WSF::Rawc::zxwsf_is12_Text_ELEM;
*zxwsf_is_Text_ELEM = *Net::WSF::Rawc::zxwsf_is_Text_ELEM;
*zxwsf_is12_Label_ELEM = *Net::WSF::Rawc::zxwsf_is12_Label_ELEM;
*zxwsf_is_Label_ELEM = *Net::WSF::Rawc::zxwsf_is_Label_ELEM;
*zxwsf_wsu_Timestamp_ELEM = *Net::WSF::Rawc::zxwsf_wsu_Timestamp_ELEM;
*zxwsf_is12_Select_ELEM = *Net::WSF::Rawc::zxwsf_is12_Select_ELEM;
*zxwsf_is_Select_ELEM = *Net::WSF::Rawc::zxwsf_is_Select_ELEM;
*zxwsf_is12_Item_ELEM = *Net::WSF::Rawc::zxwsf_is12_Item_ELEM;
*zxwsf_is_Item_ELEM = *Net::WSF::Rawc::zxwsf_is_Item_ELEM;
*zxwsf_di_SvcMD_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMD_ELEM;
*zxwsf_di12_Status_ELEM = *Net::WSF::Rawc::zxwsf_di12_Status_ELEM;
*zxwsf_lu_Status_ELEM = *Net::WSF::Rawc::zxwsf_lu_Status_ELEM;
*zxwsf_is12_Status_ELEM = *Net::WSF::Rawc::zxwsf_is12_Status_ELEM;
*zxwsf_di_SvcMDID_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDID_ELEM;
*zxwsf_a_Metadata_ELEM = *Net::WSF::Rawc::zxwsf_a_Metadata_ELEM;
*zxwsf_a_MessageID_ELEM = *Net::WSF::Rawc::zxwsf_a_MessageID_ELEM;
*zxwsf_di_SvcMDQuery_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDQuery_ELEM;
*zxwsf_dise_Envelope_ELEM = *Net::WSF::Rawc::zxwsf_dise_Envelope_ELEM;
*zxwsf_e_Envelope_ELEM = *Net::WSF::Rawc::zxwsf_e_Envelope_ELEM;
*zxwsf_root_ELEM = *Net::WSF::Rawc::zxwsf_root_ELEM;
*zxwsf_dise_detail_ELEM = *Net::WSF::Rawc::zxwsf_dise_detail_ELEM;
*zxwsf_e_detail_ELEM = *Net::WSF::Rawc::zxwsf_e_detail_ELEM;
*zxwsf_di_SvcMDQueryResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDQueryResponse_ELEM;
*zxwsf_sec12_SessionSubject_ELEM = *Net::WSF::Rawc::zxwsf_sec12_SessionSubject_ELEM;
*zxwsf_b_Sender_ELEM = *Net::WSF::Rawc::zxwsf_b_Sender_ELEM;
*zxwsf_di_SvcMDRegister_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDRegister_ELEM;
*zxwsf_di_SvcMDAssociationAdd_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAdd_ELEM;
*zxwsf_di_SvcMDAssociationQuery_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQuery_ELEM;
*zxwsf_di_SvcMDAssociationDelete_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDelete_ELEM;
*zxwsf_b_InteractionService_ELEM = *Net::WSF::Rawc::zxwsf_b_InteractionService_ELEM;
*zxwsf_is12_InteractionService_ELEM = *Net::WSF::Rawc::zxwsf_is12_InteractionService_ELEM;
*zxwsf_a_RelatesTo_ELEM = *Net::WSF::Rawc::zxwsf_a_RelatesTo_ELEM;
*zxwsf_is12_InteractionStatement_ELEM = *Net::WSF::Rawc::zxwsf_is12_InteractionStatement_ELEM;
*zxwsf_is_InteractionStatement_ELEM = *Net::WSF::Rawc::zxwsf_is_InteractionStatement_ELEM;
*zxwsf_di_SvcMDRegisterResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDRegisterResponse_ELEM;
*zxwsf_di_SvcMDAssociationAddResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationAddResponse_ELEM;
*zxwsf_wsse_Embedded_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Embedded_ELEM;
*zxwsf_di_SvcMDAssociationQueryResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationQueryResponse_ELEM;
*zxwsf_di_SvcMDAssociationDeleteResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDAssociationDeleteResponse_ELEM;
*zxwsf_lu_TestResult_ELEM = *Net::WSF::Rawc::zxwsf_lu_TestResult_ELEM;
*zxwsf_sec12_Issuer_ELEM = *Net::WSF::Rawc::zxwsf_sec12_Issuer_ELEM;
*zxwsf_is12_Inquiry_ELEM = *Net::WSF::Rawc::zxwsf_is12_Inquiry_ELEM;
*zxwsf_is_Inquiry_ELEM = *Net::WSF::Rawc::zxwsf_is_Inquiry_ELEM;
*zxwsf_xenc_EncryptedData_ELEM = *Net::WSF::Rawc::zxwsf_xenc_EncryptedData_ELEM;
*zxwsf_di12_EncryptedResourceID_ELEM = *Net::WSF::Rawc::zxwsf_di12_EncryptedResourceID_ELEM;
*zxwsf_is12_EncryptedResourceID_ELEM = *Net::WSF::Rawc::zxwsf_is12_EncryptedResourceID_ELEM;
*zxwsf_is12_Value_ELEM = *Net::WSF::Rawc::zxwsf_is12_Value_ELEM;
*zxwsf_is_Value_ELEM = *Net::WSF::Rawc::zxwsf_is_Value_ELEM;
*zxwsf_di_SvcMDReplace_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDReplace_ELEM;
*zxwsf_is12_InteractionRequest_ELEM = *Net::WSF::Rawc::zxwsf_is12_InteractionRequest_ELEM;
*zxwsf_is_InteractionRequest_ELEM = *Net::WSF::Rawc::zxwsf_is_InteractionRequest_ELEM;
*zxwsf_is12_InteractionResponse_ELEM = *Net::WSF::Rawc::zxwsf_is12_InteractionResponse_ELEM;
*zxwsf_is_InteractionResponse_ELEM = *Net::WSF::Rawc::zxwsf_is_InteractionResponse_ELEM;
*zxwsf_a_RetryAfter_ELEM = *Net::WSF::Rawc::zxwsf_a_RetryAfter_ELEM;
*zxwsf_di12_InsertEntry_ELEM = *Net::WSF::Rawc::zxwsf_di12_InsertEntry_ELEM;
*zxwsf_sec12_IssueInstant_ELEM = *Net::WSF::Rawc::zxwsf_sec12_IssueInstant_ELEM;
*zxwsf_di12_Endpoint_ELEM = *Net::WSF::Rawc::zxwsf_di12_Endpoint_ELEM;
*zxwsf_is12_Parameter_ELEM = *Net::WSF::Rawc::zxwsf_is12_Parameter_ELEM;
*zxwsf_is_Parameter_ELEM = *Net::WSF::Rawc::zxwsf_is_Parameter_ELEM;
*zxwsf_di_SvcMDReplaceResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDReplaceResponse_ELEM;
*zxwsf_di12_Modify_ELEM = *Net::WSF::Rawc::zxwsf_di12_Modify_ELEM;
*zxwsf_di12_Extension_ELEM = *Net::WSF::Rawc::zxwsf_di12_Extension_ELEM;
*zxwsf_lu_Extension_ELEM = *Net::WSF::Rawc::zxwsf_lu_Extension_ELEM;
*zxwsf_is12_Extension_ELEM = *Net::WSF::Rawc::zxwsf_is12_Extension_ELEM;
*zxwsf_a_ProblemIRI_ELEM = *Net::WSF::Rawc::zxwsf_a_ProblemIRI_ELEM;
*zxwsf_di12_ServiceType_ELEM = *Net::WSF::Rawc::zxwsf_di12_ServiceType_ELEM;
*zxwsf_di_ServiceType_ELEM = *Net::WSF::Rawc::zxwsf_di_ServiceType_ELEM;
*zxwsf_a_EndpointReference_ELEM = *Net::WSF::Rawc::zxwsf_a_EndpointReference_ELEM;
*zxwsf_b_EndpointUpdate_ELEM = *Net::WSF::Rawc::zxwsf_b_EndpointUpdate_ELEM;
*zxwsf_di_EndpointContext_ELEM = *Net::WSF::Rawc::zxwsf_di_EndpointContext_ELEM;
*zxwsf_sec12_ProxySubject_ELEM = *Net::WSF::Rawc::zxwsf_sec12_ProxySubject_ELEM;
*zxwsf_wsse_Password_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Password_ELEM;
*zxwsf_ds_Signature_ELEM = *Net::WSF::Rawc::zxwsf_ds_Signature_ELEM;
*zxwsf_di12_ResourceID_ELEM = *Net::WSF::Rawc::zxwsf_di12_ResourceID_ELEM;
*zxwsf_is12_ResourceID_ELEM = *Net::WSF::Rawc::zxwsf_is12_ResourceID_ELEM;
*zxwsf_sec_TokenPolicy_ELEM = *Net::WSF::Rawc::zxwsf_sec_TokenPolicy_ELEM;
*zxwsf_wsu_Expires_ELEM = *Net::WSF::Rawc::zxwsf_wsu_Expires_ELEM;
*zxwsf_a_From_ELEM = *Net::WSF::Rawc::zxwsf_a_From_ELEM;
*zxwsf_di12_ResourceOffering_ELEM = *Net::WSF::Rawc::zxwsf_di12_ResourceOffering_ELEM;
*zxwsf_b12_Consent_ELEM = *Net::WSF::Rawc::zxwsf_b12_Consent_ELEM;
*zxwsf_b_Consent_ELEM = *Net::WSF::Rawc::zxwsf_b_Consent_ELEM;
*zxwsf_di12_Abstract_ELEM = *Net::WSF::Rawc::zxwsf_di12_Abstract_ELEM;
*zxwsf_di_Abstract_ELEM = *Net::WSF::Rawc::zxwsf_di_Abstract_ELEM;
*zxwsf_di12_ServiceInstance_ELEM = *Net::WSF::Rawc::zxwsf_di12_ServiceInstance_ELEM;
*zxwsf_sp_RequestedAuthnContext_ELEM = *Net::WSF::Rawc::zxwsf_sp_RequestedAuthnContext_ELEM;
*zxwsf_wsu_Created_ELEM = *Net::WSF::Rawc::zxwsf_wsu_Created_ELEM;
*zxwsf_sec12_ResourceAccessStatement_ELEM = *Net::WSF::Rawc::zxwsf_sec12_ResourceAccessStatement_ELEM;
*zxwsf_is12_Hint_ELEM = *Net::WSF::Rawc::zxwsf_is12_Hint_ELEM;
*zxwsf_is_Hint_ELEM = *Net::WSF::Rawc::zxwsf_is_Hint_ELEM;
*zxwsf_di12_Query_ELEM = *Net::WSF::Rawc::zxwsf_di12_Query_ELEM;
*zxwsf_di_Query_ELEM = *Net::WSF::Rawc::zxwsf_di_Query_ELEM;
*zxwsf_di_SvcMDDelete_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDDelete_ELEM;
*zxwsf_a_Address_ELEM = *Net::WSF::Rawc::zxwsf_a_Address_ELEM;
*zxwsf_di_Address_ELEM = *Net::WSF::Rawc::zxwsf_di_Address_ELEM;
*zxwsf_ZX_TOK_NOT_FOUND_ELEM = *Net::WSF::Rawc::zxwsf_ZX_TOK_NOT_FOUND_ELEM;
*zxwsf_b_TargetIdentity_ELEM = *Net::WSF::Rawc::zxwsf_b_TargetIdentity_ELEM;
*zxwsf_di_RequestedService_ELEM = *Net::WSF::Rawc::zxwsf_di_RequestedService_ELEM;
*zxwsf_sec_TransitedProvider_ELEM = *Net::WSF::Rawc::zxwsf_sec_TransitedProvider_ELEM;
*zxwsf_di12_QueryResponse_ELEM = *Net::WSF::Rawc::zxwsf_di12_QueryResponse_ELEM;
*zxwsf_di_QueryResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_QueryResponse_ELEM;
*zxwsf_sec12_SessionContext_ELEM = *Net::WSF::Rawc::zxwsf_sec12_SessionContext_ELEM;
*zxwsf_di12_RequestedServiceType_ELEM = *Net::WSF::Rawc::zxwsf_di12_RequestedServiceType_ELEM;
*zxwsf_sec_TransitedProviderPath_ELEM = *Net::WSF::Rawc::zxwsf_sec_TransitedProviderPath_ELEM;
*zxwsf_a_ReplyTo_ELEM = *Net::WSF::Rawc::zxwsf_a_ReplyTo_ELEM;
*zxwsf_b_Framework_ELEM = *Net::WSF::Rawc::zxwsf_b_Framework_ELEM;
*zxwsf_sbf_Framework_ELEM = *Net::WSF::Rawc::zxwsf_sbf_Framework_ELEM;
*zxwsf_di_Framework_ELEM = *Net::WSF::Rawc::zxwsf_di_Framework_ELEM;
*zxwsf_a_SoapAction_ELEM = *Net::WSF::Rawc::zxwsf_a_SoapAction_ELEM;
*zxwsf_di12_SoapAction_ELEM = *Net::WSF::Rawc::zxwsf_di12_SoapAction_ELEM;
*zxwsf_dise_Header_ELEM = *Net::WSF::Rawc::zxwsf_dise_Header_ELEM;
*zxwsf_e_Header_ELEM = *Net::WSF::Rawc::zxwsf_e_Header_ELEM;
*zxwsf_xenc_EncryptedKey_ELEM = *Net::WSF::Rawc::zxwsf_xenc_EncryptedKey_ELEM;
*zxwsf_sec12_SessionContextStatement_ELEM = *Net::WSF::Rawc::zxwsf_sec12_SessionContextStatement_ELEM;
*zxwsf_dise_faultactor_ELEM = *Net::WSF::Rawc::zxwsf_dise_faultactor_ELEM;
*zxwsf_e_faultactor_ELEM = *Net::WSF::Rawc::zxwsf_e_faultactor_ELEM;
*zxwsf_b12_Correlation_ELEM = *Net::WSF::Rawc::zxwsf_b12_Correlation_ELEM;
*zxwsf_is12_Confirm_ELEM = *Net::WSF::Rawc::zxwsf_is12_Confirm_ELEM;
*zxwsf_is_Confirm_ELEM = *Net::WSF::Rawc::zxwsf_is_Confirm_ELEM;
*zxwsf_wsse_Security_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Security_ELEM;
*zxwsf_di12_ModifyResponse_ELEM = *Net::WSF::Rawc::zxwsf_di12_ModifyResponse_ELEM;
*zxwsf_di12_Description_ELEM = *Net::WSF::Rawc::zxwsf_di12_Description_ELEM;
*zxwsf_di12_EncryptResourceID_ELEM = *Net::WSF::Rawc::zxwsf_di12_EncryptResourceID_ELEM;
*zxwsf_di12_AuthorizeRequester_ELEM = *Net::WSF::Rawc::zxwsf_di12_AuthorizeRequester_ELEM;
*zxwsf_is12_Help_ELEM = *Net::WSF::Rawc::zxwsf_is12_Help_ELEM;
*zxwsf_is_Help_ELEM = *Net::WSF::Rawc::zxwsf_is_Help_ELEM;
*zxwsf_di12_RemoveEntry_ELEM = *Net::WSF::Rawc::zxwsf_di12_RemoveEntry_ELEM;
*zxwsf_sec12_NumberOfUses_ELEM = *Net::WSF::Rawc::zxwsf_sec12_NumberOfUses_ELEM;
*zxwsf_dise_faultcode_ELEM = *Net::WSF::Rawc::zxwsf_dise_faultcode_ELEM;
*zxwsf_e_faultcode_ELEM = *Net::WSF::Rawc::zxwsf_e_faultcode_ELEM;
*zxwsf_di_SecurityContext_ELEM = *Net::WSF::Rawc::zxwsf_di_SecurityContext_ELEM;
*zxwsf_dise_faultstring_ELEM = *Net::WSF::Rawc::zxwsf_dise_faultstring_ELEM;
*zxwsf_e_faultstring_ELEM = *Net::WSF::Rawc::zxwsf_e_faultstring_ELEM;
*zxwsf_wsse_SecurityTokenReference_ELEM = *Net::WSF::Rawc::zxwsf_wsse_SecurityTokenReference_ELEM;
*zxwsf_b12_Provider_ELEM = *Net::WSF::Rawc::zxwsf_b12_Provider_ELEM;
*zxwsf_di_SvcMDDeleteResponse_ELEM = *Net::WSF::Rawc::zxwsf_di_SvcMDDeleteResponse_ELEM;
*zxwsf_di12_ProviderID_ELEM = *Net::WSF::Rawc::zxwsf_di12_ProviderID_ELEM;
*zxwsf_sec12_ProviderID_ELEM = *Net::WSF::Rawc::zxwsf_sec12_ProviderID_ELEM;
*zxwsf_di_ProviderID_ELEM = *Net::WSF::Rawc::zxwsf_di_ProviderID_ELEM;
*zxwsf_a_Action_ELEM = *Net::WSF::Rawc::zxwsf_a_Action_ELEM;
*zxwsf_di_Action_ELEM = *Net::WSF::Rawc::zxwsf_di_Action_ELEM;
*zxwsf_di12_WsdlURI_ELEM = *Net::WSF::Rawc::zxwsf_di12_WsdlURI_ELEM;
*zxwsf_wsse_Username_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Username_ELEM;
*zxwsf_wsse_Reference_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Reference_ELEM;
*zxwsf_di12_Option_ELEM = *Net::WSF::Rawc::zxwsf_di12_Option_ELEM;
*zxwsf_di_Option_ELEM = *Net::WSF::Rawc::zxwsf_di_Option_ELEM;
*zxwsf_di12_Options_ELEM = *Net::WSF::Rawc::zxwsf_di12_Options_ELEM;
*zxwsf_di_Options_ELEM = *Net::WSF::Rawc::zxwsf_di_Options_ELEM;
*zxwsf_wsse_UsernameToken_ELEM = *Net::WSF::Rawc::zxwsf_wsse_UsernameToken_ELEM;
*zxwsf_wsse_TransformationParameters_ELEM = *Net::WSF::Rawc::zxwsf_wsse_TransformationParameters_ELEM;
*zxwsf_b_RedirectRequest_ELEM = *Net::WSF::Rawc::zxwsf_b_RedirectRequest_ELEM;
*zxwsf_is12_RedirectRequest_ELEM = *Net::WSF::Rawc::zxwsf_is12_RedirectRequest_ELEM;
*zxwsf_b_SecurityMechID_ELEM = *Net::WSF::Rawc::zxwsf_b_SecurityMechID_ELEM;
*zxwsf_di_SecurityMechID_ELEM = *Net::WSF::Rawc::zxwsf_di_SecurityMechID_ELEM;
*zxwsf_di12_SecurityMechID_ELEM = *Net::WSF::Rawc::zxwsf_di12_SecurityMechID_ELEM;
*zxwsf_b_UserInteraction_ELEM = *Net::WSF::Rawc::zxwsf_b_UserInteraction_ELEM;
*zxwsf_is12_UserInteraction_ELEM = *Net::WSF::Rawc::zxwsf_is12_UserInteraction_ELEM;
*zxwsf_a_ProblemHeader_ELEM = *Net::WSF::Rawc::zxwsf_a_ProblemHeader_ELEM;
*zxwsf_di_Keys_ELEM = *Net::WSF::Rawc::zxwsf_di_Keys_ELEM;
*zxwsf_dise_Fault_ELEM = *Net::WSF::Rawc::zxwsf_dise_Fault_ELEM;
*zxwsf_e_Fault_ELEM = *Net::WSF::Rawc::zxwsf_e_Fault_ELEM;
*zxwsf_a_FaultTo_ELEM = *Net::WSF::Rawc::zxwsf_a_FaultTo_ELEM;
*zxwsf_a_ProblemHeaderQName_ELEM = *Net::WSF::Rawc::zxwsf_a_ProblemHeaderQName_ELEM;
*zxwsf_di_ServiceContext_ELEM = *Net::WSF::Rawc::zxwsf_di_ServiceContext_ELEM;
*zxwsf_sec12_ProxyInfoConfirmationData_ELEM = *Net::WSF::Rawc::zxwsf_sec12_ProxyInfoConfirmationData_ELEM;
*zxwsf_dise_Body_ELEM = *Net::WSF::Rawc::zxwsf_dise_Body_ELEM;
*zxwsf_e_Body_ELEM = *Net::WSF::Rawc::zxwsf_e_Body_ELEM;
*zxwsf_sa11_AssertionIDReference_ELEM = *Net::WSF::Rawc::zxwsf_sa11_AssertionIDReference_ELEM;
*zxwsf_ds_KeyInfo_ELEM = *Net::WSF::Rawc::zxwsf_ds_KeyInfo_ELEM;
*zxwsf_sec12_ValidityRestrictionCondition_ELEM = *Net::WSF::Rawc::zxwsf_sec12_ValidityRestrictionCondition_ELEM;
*zxwsf_a_ReferenceParameters_ELEM = *Net::WSF::Rawc::zxwsf_a_ReferenceParameters_ELEM;
*zxwsf_di12_Credentials_ELEM = *Net::WSF::Rawc::zxwsf_di12_Credentials_ELEM;
*zxwsf_di12_CredentialRef_ELEM = *Net::WSF::Rawc::zxwsf_di12_CredentialRef_ELEM;
*zxwsf_di12_AuthenticateRequester_ELEM = *Net::WSF::Rawc::zxwsf_di12_AuthenticateRequester_ELEM;
*zxwsf_wsse_KeyIdentifier_ELEM = *Net::WSF::Rawc::zxwsf_wsse_KeyIdentifier_ELEM;
*zxwsf_wsse_BinarySecurityToken_ELEM = *Net::WSF::Rawc::zxwsf_wsse_BinarySecurityToken_ELEM;
*zxwsf_di12_AuthenticateSessionContext_ELEM = *Net::WSF::Rawc::zxwsf_di12_AuthenticateSessionContext_ELEM;
*zxwsf_a_ProblemAction_ELEM = *Net::WSF::Rawc::zxwsf_a_ProblemAction_ELEM;
*zxwsf_b_ApplicationEPR_ELEM = *Net::WSF::Rawc::zxwsf_b_ApplicationEPR_ELEM;
*zxwsf_di12_ServiceNameRef_ELEM = *Net::WSF::Rawc::zxwsf_di12_ServiceNameRef_ELEM;
*zxwsf_wsse_Nonce_ELEM = *Net::WSF::Rawc::zxwsf_wsse_Nonce_ELEM;
*zxwsf_ff12_RequestAuthnContext_ELEM = *Net::WSF::Rawc::zxwsf_ff12_RequestAuthnContext_ELEM;
*zxwsf_b12_UsageDirective_ELEM = *Net::WSF::Rawc::zxwsf_b12_UsageDirective_ELEM;
*zxwsf_b_UsageDirective_ELEM = *Net::WSF::Rawc::zxwsf_b_UsageDirective_ELEM;
*zxwsf_md_KeyDescriptor_ELEM = *Net::WSF::Rawc::zxwsf_md_KeyDescriptor_ELEM;
*zxwsf_b_CredentialsContext_ELEM = *Net::WSF::Rawc::zxwsf_b_CredentialsContext_ELEM;
*zxwsf_b12_ProcessingContext_ELEM = *Net::WSF::Rawc::zxwsf_b12_ProcessingContext_ELEM;
*zxwsf_b_ProcessingContext_ELEM = *Net::WSF::Rawc::zxwsf_b_ProcessingContext_ELEM;
*zxwsf_attrs = *Net::WSF::Rawc::zxwsf_attrs;
*zxwsf_elems = *Net::WSF::Rawc::zxwsf_elems;
*zxwsf_ns_tab = *Net::WSF::Rawc::zxwsf_ns_tab;
*zxwsf_xmlns_ix_e = *Net::WSF::Rawc::zxwsf_xmlns_ix_e;
*zxwsf_xmlns_e = *Net::WSF::Rawc::zxwsf_xmlns_e;
*zxwsf_xmlns_ix_dise = *Net::WSF::Rawc::zxwsf_xmlns_ix_dise;
*zxwsf_xmlns_dise = *Net::WSF::Rawc::zxwsf_xmlns_dise;
*zxwsf_xmlns_ix_a = *Net::WSF::Rawc::zxwsf_xmlns_ix_a;
*zxwsf_xmlns_a = *Net::WSF::Rawc::zxwsf_xmlns_a;
*zxwsf_xmlns_ix_wsse = *Net::WSF::Rawc::zxwsf_xmlns_ix_wsse;
*zxwsf_xmlns_wsse = *Net::WSF::Rawc::zxwsf_xmlns_wsse;
*zxwsf_xmlns_ix_wsu = *Net::WSF::Rawc::zxwsf_xmlns_ix_wsu;
*zxwsf_xmlns_wsu = *Net::WSF::Rawc::zxwsf_xmlns_wsu;
*zxwsf_xmlns_ix_sbf = *Net::WSF::Rawc::zxwsf_xmlns_ix_sbf;
*zxwsf_xmlns_sbf = *Net::WSF::Rawc::zxwsf_xmlns_sbf;
*zxwsf_xmlns_ix_b = *Net::WSF::Rawc::zxwsf_xmlns_ix_b;
*zxwsf_xmlns_b = *Net::WSF::Rawc::zxwsf_xmlns_b;
*zxwsf_xmlns_ix_sec = *Net::WSF::Rawc::zxwsf_xmlns_ix_sec;
*zxwsf_xmlns_sec = *Net::WSF::Rawc::zxwsf_xmlns_sec;
*zxwsf_xmlns_ix_di = *Net::WSF::Rawc::zxwsf_xmlns_ix_di;
*zxwsf_xmlns_di = *Net::WSF::Rawc::zxwsf_xmlns_di;
*zxwsf_xmlns_ix_is = *Net::WSF::Rawc::zxwsf_xmlns_ix_is;
*zxwsf_xmlns_is = *Net::WSF::Rawc::zxwsf_xmlns_is;
*zxwsf_xmlns_ix_lu = *Net::WSF::Rawc::zxwsf_xmlns_ix_lu;
*zxwsf_xmlns_lu = *Net::WSF::Rawc::zxwsf_xmlns_lu;
*zxwsf_xmlns_ix_b12 = *Net::WSF::Rawc::zxwsf_xmlns_ix_b12;
*zxwsf_xmlns_b12 = *Net::WSF::Rawc::zxwsf_xmlns_b12;
*zxwsf_xmlns_ix_sec12 = *Net::WSF::Rawc::zxwsf_xmlns_ix_sec12;
*zxwsf_xmlns_sec12 = *Net::WSF::Rawc::zxwsf_xmlns_sec12;
*zxwsf_xmlns_ix_di12 = *Net::WSF::Rawc::zxwsf_xmlns_ix_di12;
*zxwsf_xmlns_di12 = *Net::WSF::Rawc::zxwsf_xmlns_di12;
*zxwsf_xmlns_ix_is12 = *Net::WSF::Rawc::zxwsf_xmlns_ix_is12;
*zxwsf_xmlns_is12 = *Net::WSF::Rawc::zxwsf_xmlns_is12;
1;
