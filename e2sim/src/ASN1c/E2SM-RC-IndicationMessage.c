/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "E2SM-RC-IndicationMessage.h"

#include "E2SM-RC-IndicationMessage-Format1.h"
#include "E2SM-RC-IndicationMessage-Format2.h"
#include "E2SM-RC-IndicationMessage-Format3.h"
#include "E2SM-RC-IndicationMessage-Format4.h"
#include "E2SM-RC-IndicationMessage-Format5.h"
#include "E2SM-RC-IndicationMessage-Format6.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ric_indicationMessage_formats_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ric_indicationMessage_formats_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_ric_indicationMessage_formats_2[] = {
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format1,
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
		"indicationMessage-Format1"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format2,
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
		"indicationMessage-Format2"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format3,
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
		"indicationMessage-Format3"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format4,
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
		"indicationMessage-Format4"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format5,
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
		"indicationMessage-Format5"
		},
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, choice.indicationMessage_Format6),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_IndicationMessage_Format6,
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
		"indicationMessage-Format6"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ric_indicationMessage_formats_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* indicationMessage-Format1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* indicationMessage-Format2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* indicationMessage-Format3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* indicationMessage-Format4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* indicationMessage-Format5 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* indicationMessage-Format6 */
};
static asn_CHOICE_specifics_t asn_SPC_ric_indicationMessage_formats_specs_2 = {
	sizeof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats),
	offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, _asn_ctx),
	offsetof(struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats, present),
	sizeof(((struct E2SM_RC_IndicationMessage__ric_indicationMessage_formats *)0)->present),
	asn_MAP_ric_indicationMessage_formats_tag2el_2,
	6,	/* Count of tags in the map */
	0, 0,
	5	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_indicationMessage_formats_2 = {
	"ric-indicationMessage-formats",
	"ric-indicationMessage-formats",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ric_indicationMessage_formats_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ric_indicationMessage_formats_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_ric_indicationMessage_formats_2,
	6,	/* Elements count */
	&asn_SPC_ric_indicationMessage_formats_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_IndicationMessage, ric_indicationMessage_formats),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ric_indicationMessage_formats_2,
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
		"ric-indicationMessage-formats"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_IndicationMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_IndicationMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ric-indicationMessage-formats */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_specs_1 = {
	sizeof(struct E2SM_RC_IndicationMessage),
	offsetof(struct E2SM_RC_IndicationMessage, _asn_ctx),
	asn_MAP_E2SM_RC_IndicationMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage = {
	"E2SM-RC-IndicationMessage",
	"E2SM-RC-IndicationMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_IndicationMessage_tags_1,
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_IndicationMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_IndicationMessage_tags_1)
		/sizeof(asn_DEF_E2SM_RC_IndicationMessage_tags_1[0]), /* 1 */
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
	asn_MBR_E2SM_RC_IndicationMessage_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_RC_IndicationMessage_specs_1	/* Additional specs */
};

