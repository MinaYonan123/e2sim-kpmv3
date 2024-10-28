/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "AMF-UE-NGAP-ID.h"

int
AMF_UE_NGAP_ID_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0L && value <= 1099511627775L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using INTEGER,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_AMF_UE_NGAP_ID_constr_1 CC_NOTUSED = {
	{ 8, 1 }	/* (0..1099511627775) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_AMF_UE_NGAP_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 40, -1,  0,  1099511627775 }	/* (0..1099511627775) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_AMF_UE_NGAP_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_AMF_UE_NGAP_ID = {
	"AMF-UE-NGAP-ID",
	"AMF-UE-NGAP-ID",
	&asn_OP_INTEGER,
	asn_DEF_AMF_UE_NGAP_ID_tags_1,
	sizeof(asn_DEF_AMF_UE_NGAP_ID_tags_1)
		/sizeof(asn_DEF_AMF_UE_NGAP_ID_tags_1[0]), /* 1 */
	asn_DEF_AMF_UE_NGAP_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_AMF_UE_NGAP_ID_tags_1)
		/sizeof(asn_DEF_AMF_UE_NGAP_ID_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_AMF_UE_NGAP_ID_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_AMF_UE_NGAP_ID_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		AMF_UE_NGAP_ID_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

