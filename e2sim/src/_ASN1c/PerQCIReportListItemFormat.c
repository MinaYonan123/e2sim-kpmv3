/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "PerQCIReportListItemFormat.h"

static int
memb_pDCPBytesDL_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((value >= 0 && value <= 10000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pDCPBytesUL_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((value >= 0 && value <= 10000000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_pDCPBytesDL_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_pDCPBytesDL_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  34, -1,  0,  10000000000 }	/* (0..10000000000,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pDCPBytesUL_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_pDCPBytesUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  34, -1,  0,  10000000000 }	/* (0..10000000000,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PerQCIReportListItemFormat_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PerQCIReportListItemFormat, drbqci),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drbqci"
		},
	{ ATF_POINTER, 2, offsetof(struct PerQCIReportListItemFormat, pDCPBytesDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ &asn_OER_memb_pDCPBytesDL_constr_3, &asn_PER_memb_pDCPBytesDL_constr_3,  memb_pDCPBytesDL_constraint_1 },
		0, 0, /* No default value */
		"pDCPBytesDL"
		},
	{ ATF_POINTER, 1, offsetof(struct PerQCIReportListItemFormat, pDCPBytesUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ &asn_OER_memb_pDCPBytesUL_constr_4, &asn_PER_memb_pDCPBytesUL_constr_4,  memb_pDCPBytesUL_constraint_1 },
		0, 0, /* No default value */
		"pDCPBytesUL"
		},
};
static const int asn_MAP_PerQCIReportListItemFormat_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_PerQCIReportListItemFormat_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PerQCIReportListItemFormat_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drbqci */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDCPBytesDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pDCPBytesUL */
};
asn_SEQUENCE_specifics_t asn_SPC_PerQCIReportListItemFormat_specs_1 = {
	sizeof(struct PerQCIReportListItemFormat),
	offsetof(struct PerQCIReportListItemFormat, _asn_ctx),
	asn_MAP_PerQCIReportListItemFormat_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PerQCIReportListItemFormat_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PerQCIReportListItemFormat = {
	"PerQCIReportListItemFormat",
	"PerQCIReportListItemFormat",
	&asn_OP_SEQUENCE,
	asn_DEF_PerQCIReportListItemFormat_tags_1,
	sizeof(asn_DEF_PerQCIReportListItemFormat_tags_1)
		/sizeof(asn_DEF_PerQCIReportListItemFormat_tags_1[0]), /* 1 */
	asn_DEF_PerQCIReportListItemFormat_tags_1,	/* Same as above */
	sizeof(asn_DEF_PerQCIReportListItemFormat_tags_1)
		/sizeof(asn_DEF_PerQCIReportListItemFormat_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PerQCIReportListItemFormat_1,
	3,	/* Elements count */
	&asn_SPC_PerQCIReportListItemFormat_specs_1	/* Additional specs */
};

