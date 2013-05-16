/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "MmsPdu.h"

static asn_TYPE_member_t asn_MBR_MmsPdu_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.confirmedRequestPdu),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfirmedRequestPdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"confirmedRequestPdu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.confirmedResponsePdu),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfirmedResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"confirmedResponsePdu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.confirmedErrorPDU),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfirmedErrorPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"confirmedErrorPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.unconfirmedPDU),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnconfirmedPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unconfirmedPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.rejectPDU),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RejectPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rejectPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.initiateRequestPdu),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiateRequestPdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateRequestPdu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.initiateResponsePdu),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiateResponsePdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateResponsePdu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.initiateErrorPdu),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InitiateErrorPdu,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"initiateErrorPdu"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.concludeRequestPDU),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConcludeRequestPDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"concludeRequestPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MmsPdu, choice.concludeResponsePDU),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConcludeResponsePDU,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"concludeResponsePDU"
		},
};
static asn_TYPE_tag2member_t asn_MAP_MmsPdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* confirmedRequestPdu at 16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* confirmedResponsePdu at 17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* confirmedErrorPDU at 18 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* unconfirmedPDU at 19 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rejectPDU at 20 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 5, 0, 0 }, /* initiateRequestPdu at 22 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 6, 0, 0 }, /* initiateResponsePdu at 23 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 7, 0, 0 }, /* initiateErrorPdu at 24 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 8, 0, 0 }, /* concludeRequestPDU at 25 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 9, 0, 0 } /* concludeResponsePDU at 27 */
};
static asn_CHOICE_specifics_t asn_SPC_MmsPdu_specs_1 = {
	sizeof(struct MmsPdu),
	offsetof(struct MmsPdu, _asn_ctx),
	offsetof(struct MmsPdu, present),
	sizeof(((struct MmsPdu *)0)->present),
	asn_MAP_MmsPdu_tag2el_1,
	10,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MmsPdu = {
	"MmsPdu",
	"MmsPdu",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_MmsPdu_1,
	10,	/* Elements count */
	&asn_SPC_MmsPdu_specs_1	/* Additional specs */
};

