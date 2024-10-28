/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_BinRangeDefinition_H_
#define	_BinRangeDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BinRangeList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BinRangeList;

/* BinRangeDefinition */
typedef struct BinRangeDefinition {
	BinRangeList_t	 binRangeListX;
	struct BinRangeList	*binRangeListY;	/* OPTIONAL */
	struct BinRangeList	*binRangeListZ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BinRangeDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BinRangeDefinition;
extern asn_SEQUENCE_specifics_t asn_SPC_BinRangeDefinition_specs_1;
extern asn_TYPE_member_t asn_MBR_BinRangeDefinition_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BinRangeDefinition_H_ */
#include <asn_internal.h>
