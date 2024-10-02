/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "NeighborCell-Item-Choice-NR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_nR_mode_info_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_nR_mode_info_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_x2_Xn_established_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_x2_Xn_established_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_hO_validated_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_hO_validated_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_version_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  16,  16,  1,  65535 }	/* (1..65535,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_nR_mode_info_value2enum_5[] = {
	{ 0,	3,	"fdd" },
	{ 1,	3,	"tdd" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_nR_mode_info_enum2value_5[] = {
	0,	/* fdd(0) */
	1	/* tdd(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_nR_mode_info_specs_5 = {
	asn_MAP_nR_mode_info_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_nR_mode_info_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nR_mode_info_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nR_mode_info_5 = {
	"nR-mode-info",
	"nR-mode-info",
	&asn_OP_NativeEnumerated,
	asn_DEF_nR_mode_info_tags_5,
	sizeof(asn_DEF_nR_mode_info_tags_5)
		/sizeof(asn_DEF_nR_mode_info_tags_5[0]) - 1, /* 1 */
	asn_DEF_nR_mode_info_tags_5,	/* Same as above */
	sizeof(asn_DEF_nR_mode_info_tags_5)
		/sizeof(asn_DEF_nR_mode_info_tags_5[0]), /* 2 */
	{ &asn_OER_type_nR_mode_info_constr_5, &asn_PER_type_nR_mode_info_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nR_mode_info_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_x2_Xn_established_value2enum_10[] = {
	{ 0,	4,	"true" },
	{ 1,	5,	"false" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_x2_Xn_established_enum2value_10[] = {
	1,	/* false(1) */
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_x2_Xn_established_specs_10 = {
	asn_MAP_x2_Xn_established_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_x2_Xn_established_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_x2_Xn_established_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_x2_Xn_established_10 = {
	"x2-Xn-established",
	"x2-Xn-established",
	&asn_OP_NativeEnumerated,
	asn_DEF_x2_Xn_established_tags_10,
	sizeof(asn_DEF_x2_Xn_established_tags_10)
		/sizeof(asn_DEF_x2_Xn_established_tags_10[0]) - 1, /* 1 */
	asn_DEF_x2_Xn_established_tags_10,	/* Same as above */
	sizeof(asn_DEF_x2_Xn_established_tags_10)
		/sizeof(asn_DEF_x2_Xn_established_tags_10[0]), /* 2 */
	{ &asn_OER_type_x2_Xn_established_constr_10, &asn_PER_type_x2_Xn_established_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_x2_Xn_established_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_hO_validated_value2enum_14[] = {
	{ 0,	4,	"true" },
	{ 1,	5,	"false" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_hO_validated_enum2value_14[] = {
	1,	/* false(1) */
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_hO_validated_specs_14 = {
	asn_MAP_hO_validated_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_hO_validated_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_hO_validated_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hO_validated_14 = {
	"hO-validated",
	"hO-validated",
	&asn_OP_NativeEnumerated,
	asn_DEF_hO_validated_tags_14,
	sizeof(asn_DEF_hO_validated_tags_14)
		/sizeof(asn_DEF_hO_validated_tags_14[0]) - 1, /* 1 */
	asn_DEF_hO_validated_tags_14,	/* Same as above */
	sizeof(asn_DEF_hO_validated_tags_14)
		/sizeof(asn_DEF_hO_validated_tags_14[0]), /* 2 */
	{ &asn_OER_type_hO_validated_constr_14, &asn_PER_type_hO_validated_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_hO_validated_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NeighborCell_Item_Choice_NR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, nR_CGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-CGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, nR_PCI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-PCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, fiveGS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveGS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveGS-TAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, nR_mode_info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nR_mode_info_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-mode-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, nR_FreqInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRFrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-FreqInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, x2_Xn_established),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_x2_Xn_established_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"x2-Xn-established"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, hO_validated),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_hO_validated_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hO-validated"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighborCell_Item_Choice_NR, version),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_version_constr_18, &asn_PER_memb_version_constr_18,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
};
static const ber_tlv_tag_t asn_DEF_NeighborCell_Item_Choice_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighborCell_Item_Choice_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-CGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-PCI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fiveGS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nR-mode-info */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nR-FreqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* x2-Xn-established */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* hO-validated */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* version */
};
asn_SEQUENCE_specifics_t asn_SPC_NeighborCell_Item_Choice_NR_specs_1 = {
	sizeof(struct NeighborCell_Item_Choice_NR),
	offsetof(struct NeighborCell_Item_Choice_NR, _asn_ctx),
	asn_MAP_NeighborCell_Item_Choice_NR_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NeighborCell_Item_Choice_NR = {
	"NeighborCell-Item-Choice-NR",
	"NeighborCell-Item-Choice-NR",
	&asn_OP_SEQUENCE,
	asn_DEF_NeighborCell_Item_Choice_NR_tags_1,
	sizeof(asn_DEF_NeighborCell_Item_Choice_NR_tags_1)
		/sizeof(asn_DEF_NeighborCell_Item_Choice_NR_tags_1[0]), /* 1 */
	asn_DEF_NeighborCell_Item_Choice_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighborCell_Item_Choice_NR_tags_1)
		/sizeof(asn_DEF_NeighborCell_Item_Choice_NR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NeighborCell_Item_Choice_NR_1,
	8,	/* Elements count */
	&asn_SPC_NeighborCell_Item_Choice_NR_specs_1	/* Additional specs */
};

