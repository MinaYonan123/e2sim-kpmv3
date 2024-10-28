/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "OCUCP-PF-Container.h"

static int
memb_numberOfActive_UEs_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 65535L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_numberOfActive_UEs_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16,  16,  1,  65535 }	/* (1..65535,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_cu_CP_Resource_Status_2[] = {
	{ ATF_POINTER, 1, offsetof(struct OCUCP_PF_Container__cu_CP_Resource_Status, numberOfActive_UEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_numberOfActive_UEs_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_numberOfActive_UEs_constraint_2
		},
		0, 0, /* No default value */
		"numberOfActive-UEs"
		},
};
static const int asn_MAP_cu_CP_Resource_Status_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_cu_CP_Resource_Status_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cu_CP_Resource_Status_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* numberOfActive-UEs */
};
static asn_SEQUENCE_specifics_t asn_SPC_cu_CP_Resource_Status_specs_2 = {
	sizeof(struct OCUCP_PF_Container__cu_CP_Resource_Status),
	offsetof(struct OCUCP_PF_Container__cu_CP_Resource_Status, _asn_ctx),
	asn_MAP_cu_CP_Resource_Status_tag2el_2,
	1,	/* Count of tags in the map */
	asn_MAP_cu_CP_Resource_Status_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cu_CP_Resource_Status_2 = {
	"cu-CP-Resource-Status",
	"cu-CP-Resource-Status",
	&asn_OP_SEQUENCE,
	asn_DEF_cu_CP_Resource_Status_tags_2,
	sizeof(asn_DEF_cu_CP_Resource_Status_tags_2)
		/sizeof(asn_DEF_cu_CP_Resource_Status_tags_2[0]) - 1, /* 1 */
	asn_DEF_cu_CP_Resource_Status_tags_2,	/* Same as above */
	sizeof(asn_DEF_cu_CP_Resource_Status_tags_2)
		/sizeof(asn_DEF_cu_CP_Resource_Status_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_cu_CP_Resource_Status_2,
	1,	/* Elements count */
	&asn_SPC_cu_CP_Resource_Status_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OCUCP_PF_Container_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OCUCP_PF_Container, cu_CP_Resource_Status),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cu_CP_Resource_Status_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cu-CP-Resource-Status"
		},
};
static const ber_tlv_tag_t asn_DEF_OCUCP_PF_Container_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OCUCP_PF_Container_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cu-CP-Resource-Status */
};
asn_SEQUENCE_specifics_t asn_SPC_OCUCP_PF_Container_specs_1 = {
	sizeof(struct OCUCP_PF_Container),
	offsetof(struct OCUCP_PF_Container, _asn_ctx),
	asn_MAP_OCUCP_PF_Container_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OCUCP_PF_Container = {
	"OCUCP-PF-Container",
	"OCUCP-PF-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_OCUCP_PF_Container_tags_1,
	sizeof(asn_DEF_OCUCP_PF_Container_tags_1)
		/sizeof(asn_DEF_OCUCP_PF_Container_tags_1[0]), /* 1 */
	asn_DEF_OCUCP_PF_Container_tags_1,	/* Same as above */
	sizeof(asn_DEF_OCUCP_PF_Container_tags_1)
		/sizeof(asn_DEF_OCUCP_PF_Container_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_OCUCP_PF_Container_1,
	1,	/* Elements count */
	&asn_SPC_OCUCP_PF_Container_specs_1	/* Additional specs */
};

