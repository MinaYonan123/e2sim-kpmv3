/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_L3_RRC_Measurements_H_
#define	_L3_RRC_Measurements_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCEvent.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ServingCellMeasurements;
struct MeasResultNeighCells;

/* L3-RRC-Measurements */
typedef struct L3_RRC_Measurements {
	RRCEvent_t	 rrcEvent;
	struct ServingCellMeasurements	*servingCellMeasurements;	/* OPTIONAL */
	struct MeasResultNeighCells	*measResultNeighCells;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} L3_RRC_Measurements_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_L3_RRC_Measurements;
extern asn_SEQUENCE_specifics_t asn_SPC_L3_RRC_Measurements_specs_1;
extern asn_TYPE_member_t asn_MBR_L3_RRC_Measurements_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _L3_RRC_Measurements_H_ */
#include <asn_internal.h>
