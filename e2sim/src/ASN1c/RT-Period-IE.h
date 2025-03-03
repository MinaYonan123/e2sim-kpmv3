/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RT_Period_IE_H_
#define	_RT_Period_IE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RT_Period_IE {
	RT_Period_IE_ms10	= 0,
	RT_Period_IE_ms20	= 1,
	RT_Period_IE_ms32	= 2,
	RT_Period_IE_ms40	= 3,
	RT_Period_IE_ms60	= 4,
	RT_Period_IE_ms64	= 5,
	RT_Period_IE_ms70	= 6,
	RT_Period_IE_ms80	= 7,
	RT_Period_IE_ms128	= 8,
	RT_Period_IE_ms160	= 9,
	RT_Period_IE_ms256	= 10,
	RT_Period_IE_ms320	= 11,
	RT_Period_IE_ms512	= 12,
	RT_Period_IE_ms640	= 13,
	RT_Period_IE_ms1024	= 14,
	RT_Period_IE_ms1280	= 15,
	RT_Period_IE_ms2048	= 16,
	RT_Period_IE_ms2560	= 17,
	RT_Period_IE_ms5120	= 18,
	RT_Period_IE_ms10240	= 19
	/*
	 * Enumeration is extensible
	 */
} e_RT_Period_IE;

/* RT-Period-IE */
typedef long	 RT_Period_IE_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RT_Period_IE_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RT_Period_IE;
extern const asn_INTEGER_specifics_t asn_SPC_RT_Period_IE_specs_1;
asn_struct_free_f RT_Period_IE_free;
asn_struct_print_f RT_Period_IE_print;
asn_constr_check_f RT_Period_IE_constraint;
xer_type_decoder_f RT_Period_IE_decode_xer;
xer_type_encoder_f RT_Period_IE_encode_xer;
per_type_decoder_f RT_Period_IE_decode_aper;
per_type_encoder_f RT_Period_IE_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RT_Period_IE_H_ */
#include <asn_internal.h>
