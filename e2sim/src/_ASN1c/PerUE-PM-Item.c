/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "PerUE-PM-Item.h"

#include "PM-Info-Item.h"
static int
memb_list_of_PM_Information_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2147483647)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_list_of_PM_Information_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2147483647)) */};
static asn_per_constraints_t asn_PER_type_list_of_PM_Information_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 31, -1,  1,  2147483647 }	/* (SIZE(1..2147483647)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_list_of_PM_Information_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2147483647)) */};
static asn_per_constraints_t asn_PER_memb_list_of_PM_Information_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 31, -1,  1,  2147483647 }	/* (SIZE(1..2147483647)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_list_of_PM_Information_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PM_Info_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_list_of_PM_Information_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_list_of_PM_Information_specs_3 = {
	sizeof(struct PerUE_PM_Item__list_of_PM_Information),
	offsetof(struct PerUE_PM_Item__list_of_PM_Information, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_list_of_PM_Information_3 = {
	"list-of-PM-Information",
	"list-of-PM-Information",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_list_of_PM_Information_tags_3,
	sizeof(asn_DEF_list_of_PM_Information_tags_3)
		/sizeof(asn_DEF_list_of_PM_Information_tags_3[0]) - 1, /* 1 */
	asn_DEF_list_of_PM_Information_tags_3,	/* Same as above */
	sizeof(asn_DEF_list_of_PM_Information_tags_3)
		/sizeof(asn_DEF_list_of_PM_Information_tags_3[0]), /* 2 */
	{ &asn_OER_type_list_of_PM_Information_constr_3, &asn_PER_type_list_of_PM_Information_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_list_of_PM_Information_3,
	1,	/* Single element */
	&asn_SPC_list_of_PM_Information_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PerUE_PM_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PerUE_PM_Item, ueId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueId"
		},
	{ ATF_POINTER, 1, offsetof(struct PerUE_PM_Item, list_of_PM_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_list_of_PM_Information_3,
		0,
		{ &asn_OER_memb_list_of_PM_Information_constr_3, &asn_PER_memb_list_of_PM_Information_constr_3,  memb_list_of_PM_Information_constraint_1 },
		0, 0, /* No default value */
		"list-of-PM-Information"
		},
};
static const int asn_MAP_PerUE_PM_Item_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PerUE_PM_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PerUE_PM_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* list-of-PM-Information */
};
asn_SEQUENCE_specifics_t asn_SPC_PerUE_PM_Item_specs_1 = {
	sizeof(struct PerUE_PM_Item),
	offsetof(struct PerUE_PM_Item, _asn_ctx),
	asn_MAP_PerUE_PM_Item_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PerUE_PM_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PerUE_PM_Item = {
	"PerUE-PM-Item",
	"PerUE-PM-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_PerUE_PM_Item_tags_1,
	sizeof(asn_DEF_PerUE_PM_Item_tags_1)
		/sizeof(asn_DEF_PerUE_PM_Item_tags_1[0]), /* 1 */
	asn_DEF_PerUE_PM_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_PerUE_PM_Item_tags_1)
		/sizeof(asn_DEF_PerUE_PM_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PerUE_PM_Item_1,
	2,	/* Elements count */
	&asn_SPC_PerUE_PM_Item_specs_1	/* Additional specs */
};

