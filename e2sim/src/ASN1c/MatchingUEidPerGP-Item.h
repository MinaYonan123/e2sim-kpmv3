/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v03.00_modified.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_MatchingUEidPerGP_Item_H_
#define	_MatchingUEidPerGP_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MatchingUEidPerGP_Item__matchedPerGP_PR {
	MatchingUEidPerGP_Item__matchedPerGP_PR_NOTHING,	/* No components present */
	MatchingUEidPerGP_Item__matchedPerGP_PR_noUEmatched,
	MatchingUEidPerGP_Item__matchedPerGP_PR_oneOrMoreUEmatched
	/* Extensions may appear below */
	
} MatchingUEidPerGP_Item__matchedPerGP_PR;
typedef enum MatchingUEidPerGP_Item__matchedPerGP__noUEmatched {
	MatchingUEidPerGP_Item__matchedPerGP__noUEmatched_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MatchingUEidPerGP_Item__matchedPerGP__noUEmatched;

/* Forward declarations */
struct MatchingUEidList_PerGP;

/* MatchingUEidPerGP-Item */
typedef struct MatchingUEidPerGP_Item {
	struct MatchingUEidPerGP_Item__matchedPerGP {
		MatchingUEidPerGP_Item__matchedPerGP_PR present;
		union MatchingUEidPerGP_Item__matchedPerGP_u {
			long	 noUEmatched;
			struct MatchingUEidList_PerGP	*oneOrMoreUEmatched;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} matchedPerGP;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingUEidPerGP_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_noUEmatched_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MatchingUEidPerGP_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_MatchingUEidPerGP_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingUEidPerGP_Item_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingUEidPerGP_Item_H_ */
#include <asn_internal.h>
