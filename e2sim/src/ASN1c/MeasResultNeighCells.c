/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#include "MeasResultNeighCells.h"

#include "MeasResultListNR.h"
#include "MeasResultListEUTRA.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_MeasResultNeighCells_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_MeasResultNeighCells_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_MeasResultNeighCells_1[] = {
	{ ATF_POINTER, 0, offsetof(struct MeasResultNeighCells, choice.measResultListNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListNR,
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
		"measResultListNR"
		},
	{ ATF_POINTER, 0, offsetof(struct MeasResultNeighCells, choice.measResultListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListEUTRA,
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
		"measResultListEUTRA"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultNeighCells_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultListEUTRA */
};
asn_CHOICE_specifics_t asn_SPC_MeasResultNeighCells_specs_1 = {
	sizeof(struct MeasResultNeighCells),
	offsetof(struct MeasResultNeighCells, _asn_ctx),
	offsetof(struct MeasResultNeighCells, present),
	sizeof(((struct MeasResultNeighCells *)0)->present),
	asn_MAP_MeasResultNeighCells_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultNeighCells = {
	"MeasResultNeighCells",
	"MeasResultNeighCells",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_MeasResultNeighCells_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_MeasResultNeighCells_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_MeasResultNeighCells_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultNeighCells_specs_1	/* Additional specs */
};

