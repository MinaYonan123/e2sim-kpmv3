/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "E2SM-RC-ControlOutcome-Format2-RANP-Item.h"

asn_TYPE_member_t asn_MBR_E2SM_RC_ControlOutcome_Format2_RANP_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ControlOutcome_Format2_RANP_Item, ranParameter_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_ID,
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
		"ranParameter-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ControlOutcome_Format2_RANP_Item, ranParameter_value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANParameter_Value,
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
		"ranParameter-value"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_ControlOutcome_Format2_RANP_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranParameter-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranParameter-value */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ControlOutcome_Format2_RANP_Item_specs_1 = {
	sizeof(struct E2SM_RC_ControlOutcome_Format2_RANP_Item),
	offsetof(struct E2SM_RC_ControlOutcome_Format2_RANP_Item, _asn_ctx),
	asn_MAP_E2SM_RC_ControlOutcome_Format2_RANP_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item = {
	"E2SM-RC-ControlOutcome-Format2-RANP-Item",
	"E2SM-RC-ControlOutcome-Format2-RANP-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1,
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_Format2_RANP_Item_tags_1[0]), /* 1 */
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
	asn_MBR_E2SM_RC_ControlOutcome_Format2_RANP_Item_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_ControlOutcome_Format2_RANP_Item_specs_1	/* Additional specs */
};

