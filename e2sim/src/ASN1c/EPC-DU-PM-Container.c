/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "EPC-DU-PM-Container.h"

#include "PerQCIReportListItem.h"
static int
memb_perQCIReportList_du_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 256UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_perQCIReportList_du_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_perQCIReportList_du_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_perQCIReportList_du_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_perQCIReportList_du_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_perQCIReportList_du_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PerQCIReportListItem,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_perQCIReportList_du_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_perQCIReportList_du_specs_2 = {
	sizeof(struct EPC_DU_PM_Container__perQCIReportList_du),
	offsetof(struct EPC_DU_PM_Container__perQCIReportList_du, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_perQCIReportList_du_2 = {
	"perQCIReportList-du",
	"perQCIReportList-du",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_perQCIReportList_du_tags_2,
	sizeof(asn_DEF_perQCIReportList_du_tags_2)
		/sizeof(asn_DEF_perQCIReportList_du_tags_2[0]) - 1, /* 1 */
	asn_DEF_perQCIReportList_du_tags_2,	/* Same as above */
	sizeof(asn_DEF_perQCIReportList_du_tags_2)
		/sizeof(asn_DEF_perQCIReportList_du_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_perQCIReportList_du_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_perQCIReportList_du_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_perQCIReportList_du_2,
	1,	/* Single element */
	&asn_SPC_perQCIReportList_du_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EPC_DU_PM_Container_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPC_DU_PM_Container, perQCIReportList_du),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_perQCIReportList_du_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_perQCIReportList_du_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_perQCIReportList_du_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_perQCIReportList_du_constraint_1
		},
		0, 0, /* No default value */
		"perQCIReportList-du"
		},
};
static const ber_tlv_tag_t asn_DEF_EPC_DU_PM_Container_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EPC_DU_PM_Container_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* perQCIReportList-du */
};
asn_SEQUENCE_specifics_t asn_SPC_EPC_DU_PM_Container_specs_1 = {
	sizeof(struct EPC_DU_PM_Container),
	offsetof(struct EPC_DU_PM_Container, _asn_ctx),
	asn_MAP_EPC_DU_PM_Container_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EPC_DU_PM_Container = {
	"EPC-DU-PM-Container",
	"EPC-DU-PM-Container",
	&asn_OP_SEQUENCE,
	asn_DEF_EPC_DU_PM_Container_tags_1,
	sizeof(asn_DEF_EPC_DU_PM_Container_tags_1)
		/sizeof(asn_DEF_EPC_DU_PM_Container_tags_1[0]), /* 1 */
	asn_DEF_EPC_DU_PM_Container_tags_1,	/* Same as above */
	sizeof(asn_DEF_EPC_DU_PM_Container_tags_1)
		/sizeof(asn_DEF_EPC_DU_PM_Container_tags_1[0]), /* 1 */
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
	asn_MBR_EPC_DU_PM_Container_1,
	1,	/* Elements count */
	&asn_SPC_EPC_DU_PM_Container_specs_1	/* Additional specs */
};

