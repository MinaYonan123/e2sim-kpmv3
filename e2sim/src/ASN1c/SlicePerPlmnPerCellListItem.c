/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "SlicePerPlmnPerCellListItem.h"

#include "FQIPERSlicesPerPlmnPerCellListItem.h"
static int
memb_fQIPERSlicesPerPlmnPerCellList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fQIPERSlicesPerPlmnPerCellList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_fQIPERSlicesPerPlmnPerCellList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_fQIPERSlicesPerPlmnPerCellList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FQIPERSlicesPerPlmnPerCellListItem,
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
static const ber_tlv_tag_t asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_fQIPERSlicesPerPlmnPerCellList_specs_3 = {
	sizeof(struct SlicePerPlmnPerCellListItem__fQIPERSlicesPerPlmnPerCellList),
	offsetof(struct SlicePerPlmnPerCellListItem__fQIPERSlicesPerPlmnPerCellList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fQIPERSlicesPerPlmnPerCellList_3 = {
	"fQIPERSlicesPerPlmnPerCellList",
	"fQIPERSlicesPerPlmnPerCellList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3,
	sizeof(asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3)
		/sizeof(asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3[0]) - 1, /* 1 */
	asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3,	/* Same as above */
	sizeof(asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3)
		/sizeof(asn_DEF_fQIPERSlicesPerPlmnPerCellList_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fQIPERSlicesPerPlmnPerCellList_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_fQIPERSlicesPerPlmnPerCellList_3,
	1,	/* Single element */
	&asn_SPC_fQIPERSlicesPerPlmnPerCellList_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SlicePerPlmnPerCellListItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SlicePerPlmnPerCellListItem, sliceID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_NSSAI,
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
		"sliceID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SlicePerPlmnPerCellListItem, fQIPERSlicesPerPlmnPerCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_fQIPERSlicesPerPlmnPerCellList_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_fQIPERSlicesPerPlmnPerCellList_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_fQIPERSlicesPerPlmnPerCellList_constraint_1
		},
		0, 0, /* No default value */
		"fQIPERSlicesPerPlmnPerCellList"
		},
};
static const ber_tlv_tag_t asn_DEF_SlicePerPlmnPerCellListItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SlicePerPlmnPerCellListItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sliceID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fQIPERSlicesPerPlmnPerCellList */
};
asn_SEQUENCE_specifics_t asn_SPC_SlicePerPlmnPerCellListItem_specs_1 = {
	sizeof(struct SlicePerPlmnPerCellListItem),
	offsetof(struct SlicePerPlmnPerCellListItem, _asn_ctx),
	asn_MAP_SlicePerPlmnPerCellListItem_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SlicePerPlmnPerCellListItem = {
	"SlicePerPlmnPerCellListItem",
	"SlicePerPlmnPerCellListItem",
	&asn_OP_SEQUENCE,
	asn_DEF_SlicePerPlmnPerCellListItem_tags_1,
	sizeof(asn_DEF_SlicePerPlmnPerCellListItem_tags_1)
		/sizeof(asn_DEF_SlicePerPlmnPerCellListItem_tags_1[0]), /* 1 */
	asn_DEF_SlicePerPlmnPerCellListItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_SlicePerPlmnPerCellListItem_tags_1)
		/sizeof(asn_DEF_SlicePerPlmnPerCellListItem_tags_1[0]), /* 1 */
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
	asn_MBR_SlicePerPlmnPerCellListItem_1,
	2,	/* Elements count */
	&asn_SPC_SlicePerPlmnPerCellListItem_specs_1	/* Additional specs */
};

