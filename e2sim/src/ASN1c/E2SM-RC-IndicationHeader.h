/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_standard.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_E2SM_RC_IndicationHeader_H_
#define	_E2SM_RC_IndicationHeader_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR {
	E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR_NOTHING,	/* No components present */
	E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR_indicationHeader_Format1,
	E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR_indicationHeader_Format2,
	/* Extensions may appear below */
	E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR_indicationHeader_Format3
} E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR;

/* Forward declarations */
struct E2SM_RC_IndicationHeader_Format1;
struct E2SM_RC_IndicationHeader_Format2;
struct E2SM_RC_IndicationHeader_Format3;

/* E2SM-RC-IndicationHeader */
typedef struct E2SM_RC_IndicationHeader {
	struct E2SM_RC_IndicationHeader__ric_indicationHeader_formats {
		E2SM_RC_IndicationHeader__ric_indicationHeader_formats_PR present;
		union E2SM_RC_IndicationHeader__ric_indicationHeader_formats_u {
			struct E2SM_RC_IndicationHeader_Format1	*indicationHeader_Format1;
			struct E2SM_RC_IndicationHeader_Format2	*indicationHeader_Format2;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct E2SM_RC_IndicationHeader_Format3	*indicationHeader_Format3;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ric_indicationHeader_formats;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_IndicationHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationHeader;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_IndicationHeader_H_ */
#include <asn_internal.h>
