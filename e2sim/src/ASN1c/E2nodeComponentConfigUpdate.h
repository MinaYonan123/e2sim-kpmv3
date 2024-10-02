/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_E2nodeComponentConfigUpdate_H_
#define	_E2nodeComponentConfigUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2nodeComponentConfigUpdate_PR {
	E2nodeComponentConfigUpdate_PR_NOTHING,	/* No components present */
	E2nodeComponentConfigUpdate_PR_gNBconfigUpdate,
	E2nodeComponentConfigUpdate_PR_en_gNBconfigUpdate,
	E2nodeComponentConfigUpdate_PR_ng_eNBconfigUpdate,
	E2nodeComponentConfigUpdate_PR_eNBconfigUpdate
	/* Extensions may appear below */
	
} E2nodeComponentConfigUpdate_PR;

/* Forward declarations */
struct E2nodeComponentConfigUpdateGNB;
struct E2nodeComponentConfigUpdateENgNB;
struct E2nodeComponentConfigUpdateNGeNB;
struct E2nodeComponentConfigUpdateENB;

/* E2nodeComponentConfigUpdate */
typedef struct E2nodeComponentConfigUpdate {
	E2nodeComponentConfigUpdate_PR present;
	union E2nodeComponentConfigUpdate_u {
		struct E2nodeComponentConfigUpdateGNB	*gNBconfigUpdate;
		struct E2nodeComponentConfigUpdateENgNB	*en_gNBconfigUpdate;
		struct E2nodeComponentConfigUpdateNGeNB	*ng_eNBconfigUpdate;
		struct E2nodeComponentConfigUpdateENB	*eNBconfigUpdate;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentConfigUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdate;
extern asn_CHOICE_specifics_t asn_SPC_E2nodeComponentConfigUpdate_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdate_1[4];
extern asn_per_constraints_t asn_PER_type_E2nodeComponentConfigUpdate_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentConfigUpdate_H_ */
#include <asn_internal.h>
