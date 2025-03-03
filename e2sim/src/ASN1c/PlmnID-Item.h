/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_PlmnID_Item_H_
#define	_PlmnID_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FGC_CUUP_PM_Format;
struct EPC_CUUP_PM_Format;

/* PlmnID-Item */
typedef struct PlmnID_Item {
	PLMN_Identity_t	 pLMN_Identity;
	struct FGC_CUUP_PM_Format	*cu_UP_PM_5GC;	/* OPTIONAL */
	struct EPC_CUUP_PM_Format	*cu_UP_PM_EPC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PlmnID_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PlmnID_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_PlmnID_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_PlmnID_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PlmnID_Item_H_ */
#include <asn_internal.h>
