/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/home/rshacham/e2sm-kpm-v01.02.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RAN_Container_H_
#define	_RAN_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Timestamp.h"
#include "DU-Usage-Report-Per-UE.h"
#include "CU-CP-Usage-Report-Per-UE.h"
#include "CU-UP-Usage-Report-Per-UE.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RAN_Container__reportContainer_PR {
	RAN_Container__reportContainer_PR_NOTHING,	/* No components present */
	RAN_Container__reportContainer_PR_oDU_UE,
	RAN_Container__reportContainer_PR_oCU_CP_UE,
	RAN_Container__reportContainer_PR_oCU_UP_UE
	/* Extensions may appear below */
	
} RAN_Container__reportContainer_PR;

/* RAN-Container */
typedef struct RAN_Container {
	Timestamp_t	 timestamp;
	struct RAN_Container__reportContainer {
		RAN_Container__reportContainer_PR present;
		union RAN_Container__reportContainer_u {
			DU_Usage_Report_Per_UE_t	 oDU_UE;
			CU_CP_Usage_Report_Per_UE_t	 oCU_CP_UE;
			CU_UP_Usage_Report_Per_UE_t	 oCU_UP_UE;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportContainer;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAN_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAN_Container;
extern asn_SEQUENCE_specifics_t asn_SPC_RAN_Container_specs_1;
extern asn_TYPE_member_t asn_MBR_RAN_Container_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RAN_Container_H_ */
#include <asn_internal.h>