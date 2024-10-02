/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "RAN-ControlParameter-Item.h"

asn_TYPE_member_t asn_MBR_RAN_ControlParameter_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RAN_ControlParameter_Item, ranParameter_ID),
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
	{ ATF_NOFLAGS, 0, offsetof(struct RAN_ControlParameter_Item, ranParameter_Name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Name,
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
		"ranParameter-Name"
		},
};
static const ber_tlv_tag_t asn_DEF_RAN_ControlParameter_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RAN_ControlParameter_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranParameter-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranParameter-Name */
};
asn_SEQUENCE_specifics_t asn_SPC_RAN_ControlParameter_Item_specs_1 = {
	sizeof(struct RAN_ControlParameter_Item),
	offsetof(struct RAN_ControlParameter_Item, _asn_ctx),
	asn_MAP_RAN_ControlParameter_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RAN_ControlParameter_Item = {
	"RAN-ControlParameter-Item",
	"RAN-ControlParameter-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RAN_ControlParameter_Item_tags_1,
	sizeof(asn_DEF_RAN_ControlParameter_Item_tags_1)
		/sizeof(asn_DEF_RAN_ControlParameter_Item_tags_1[0]), /* 1 */
	asn_DEF_RAN_ControlParameter_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RAN_ControlParameter_Item_tags_1)
		/sizeof(asn_DEF_RAN_ControlParameter_Item_tags_1[0]), /* 1 */
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
	asn_MBR_RAN_ControlParameter_Item_1,
	2,	/* Elements count */
	&asn_SPC_RAN_ControlParameter_Item_specs_1	/* Additional specs */
};

