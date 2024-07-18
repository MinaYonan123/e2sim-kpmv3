/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm_kpm_v03.00_modified.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_NRFrequencyBand_List_H_
#define	_NRFrequencyBand_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRFrequencyBandItem;

/* NRFrequencyBand-List */
typedef struct NRFrequencyBand_List {
	A_SEQUENCE_OF(struct NRFrequencyBandItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRFrequencyBand_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRFrequencyBand_List;
extern asn_SET_OF_specifics_t asn_SPC_NRFrequencyBand_List_specs_1;
extern asn_TYPE_member_t asn_MBR_NRFrequencyBand_List_1[1];
extern asn_per_constraints_t asn_PER_type_NRFrequencyBand_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRFrequencyBand_List_H_ */
#include <asn_internal.h>
