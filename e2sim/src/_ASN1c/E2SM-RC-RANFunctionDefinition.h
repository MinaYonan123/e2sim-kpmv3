/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_E2SM_RC_RANFunctionDefinition_H_
#define	_E2SM_RC_RANFunctionDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANfunction-Name.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANFunctionDefinition_EventTrigger;
struct RANFunctionDefinition_Report;
struct RANFunctionDefinition_Insert;
struct RANFunctionDefinition_Control;
struct RANFunctionDefinition_Policy;

/* E2SM-RC-RANFunctionDefinition */
typedef struct E2SM_RC_RANFunctionDefinition {
	RANfunction_Name_t	 ranFunction_Name;
	struct RANFunctionDefinition_EventTrigger	*ranFunctionDefinition_EventTrigger	/* OPTIONAL */;
	struct RANFunctionDefinition_Report	*ranFunctionDefinition_Report	/* OPTIONAL */;
	struct RANFunctionDefinition_Insert	*ranFunctionDefinition_Insert	/* OPTIONAL */;
	struct RANFunctionDefinition_Control	*ranFunctionDefinition_Control	/* OPTIONAL */;
	struct RANFunctionDefinition_Policy	*ranFunctionDefinition_Policy	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_RANFunctionDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_RANFunctionDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_RANFunctionDefinition_H_ */
#include <asn_internal.h>
