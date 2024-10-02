/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -no-gen-example`
 */

#ifndef	_FGC_CUUP_PM_Format_H_
#define	_FGC_CUUP_PM_Format_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SliceToReportListItem;

/* FGC-CUUP-PM-Format */
typedef struct FGC_CUUP_PM_Format {
	struct FGC_CUUP_PM_Format__sliceToReportList {
		A_SEQUENCE_OF(struct SliceToReportListItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sliceToReportList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FGC_CUUP_PM_Format_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FGC_CUUP_PM_Format;
extern asn_SEQUENCE_specifics_t asn_SPC_FGC_CUUP_PM_Format_specs_1;
extern asn_TYPE_member_t asn_MBR_FGC_CUUP_PM_Format_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _FGC_CUUP_PM_Format_H_ */
#include <asn_internal.h>
