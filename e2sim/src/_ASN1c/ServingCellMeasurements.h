/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_ServingCellMeasurements_H_
#define	_ServingCellMeasurements_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServingCellMeasurements_PR {
	ServingCellMeasurements_PR_NOTHING,	/* No components present */
	ServingCellMeasurements_PR_nr_measResultServingMOList,
	ServingCellMeasurements_PR_eutra_measResultPCell
	/* Extensions may appear below */
	
} ServingCellMeasurements_PR;

/* Forward declarations */
struct MeasResultServMOList;
struct MeasResultPCell;

/* ServingCellMeasurements */
typedef struct ServingCellMeasurements {
	ServingCellMeasurements_PR present;
	union ServingCellMeasurements_u {
		struct MeasResultServMOList	*nr_measResultServingMOList;
		struct MeasResultPCell	*eutra_measResultPCell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServingCellMeasurements_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServingCellMeasurements;
extern asn_CHOICE_specifics_t asn_SPC_ServingCellMeasurements_specs_1;
extern asn_TYPE_member_t asn_MBR_ServingCellMeasurements_1[2];
extern asn_per_constraints_t asn_PER_type_ServingCellMeasurements_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServingCellMeasurements_H_ */
#include <asn_internal.h>
