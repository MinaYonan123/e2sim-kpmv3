/*****************************************************************************
#                                                                            *
# Copyright 2020 AT&T Intellectual Property                                  *
# Copyright 2019 Nokia                                                       *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/
#include "e2ap_asn1c_codec.h"


void e2ap_asn1c_print_pdu(const E2AP_PDU_t* pdu)
{
    asn1c_xer_print(&asn_DEF_E2AP_PDU,(void*) pdu);
}

void asn1c_xer_print(asn_TYPE_descriptor_t *typeDescriptor, void *data)
{
    if (LOG_LEVEL == LOG_LEVEL_DEBUG) {
        xer_fprint(stdout, typeDescriptor,  data);
        LOG_D("\n");
    }
}


E2AP_PDU_t* e2ap_xml_to_pdu(char const* xml_message)
{
  // E2AP_PDU_t *pdu = new E2AP_PDU_t();
  E2AP_PDU_t *pdu = calloc(1, sizeof(E2AP_PDU_t));

  assert(pdu != 0);


  uint8_t         buf[MAX_XML_BUFFER];
  asn_dec_rval_t  rval;
  size_t          size;
  FILE            *f;

  char XML_path[300];
  char *work_dir = getenv(WORKDIR_ENV);


  strcpy(XML_path, work_dir);
  strcat(XML_path, E2AP_XML_DIR);
  strcat(XML_path, xml_message);

  LOG_D("Generate E2AP PDU from XML file: %s\n", XML_path);
  memset(buf, 0, sizeof(buf));


  f = fopen(XML_path, "r");
  if(!f){
     LOG_E("Unable to open %s. Make sure you have set the Environment Variable E2SIM_DIR, see README", XML_path)
  }

  assert(f);

  size = fread(buf, 1, sizeof(buf), f);
  if(size == 0 || size == sizeof(buf))
  {
    LOG_E("Input too long: %s", XML_path);
    exit(1);
  }

  fclose(f);

  rval = xer_decode(0, &asn_DEF_E2AP_PDU, (void **)&pdu, buf, size);

  assert(rval.code == RC_OK);

  return pdu;
}


E2setupRequest_t* smaller_e2ap_xml_to_pdu(char const* xml_message)
{
  // E2AP_PDU_t *pdu = new E2AP_PDU_t();
  E2AP_PDU_t *pdu = calloc(1, sizeof(E2AP_PDU_t));

  //  GlobalE2node_ID_t *globale2nodeid = (GlobalE2node_ID_t*)calloc(1, sizeof(GlobalE2node_ID_t));
  GlobalE2node_ID_t *globale2nodeid = (GlobalE2node_ID_t*)calloc(1, sizeof(GlobalE2node_ID_t));
  E2setupRequest_t *e2setuprequest = (E2setupRequest_t*)calloc(1,sizeof(E2setupRequest_t));

  uint8_t         buf[MAX_XML_BUFFER];
  asn_dec_rval_t  rval;
  size_t          size;
  FILE            *f;

  char XML_path[300];
  char *work_dir = getenv(WORKDIR_ENV);

  strcpy(XML_path, work_dir);
  strcat(XML_path, E2AP_XML_DIR);
  strcat(XML_path, xml_message);

  LOG_D("Generate E2AP PDU from XML file: %s\n", XML_path);
  memset(buf, 0, sizeof(buf));

  f = fopen(XML_path, "r");
  if(!f){
     LOG_E("Unable to open %s. Make sure you have set the Environment Variable E2SIM_DIR, see README", XML_path)
  }

  assert(f);

  size = fread(buf, 1, sizeof(buf), f);
  if(size == 0 || size == sizeof(buf))
  {
    LOG_E("Input too long: %s", XML_path);
    exit(1);
  }

  fclose(f);

  rval = xer_decode(0, &asn_DEF_E2setupRequest, (void **)&e2setuprequest, buf, size);

  assert(rval.code == RC_OK);

  return e2setuprequest;
}


int e2ap_asn1c_encode_pdu(E2AP_PDU_t* pdu, unsigned char **buffer)
{
  int len;

  *buffer = NULL;
  assert(pdu != NULL);
  assert(buffer != NULL);

  len = aper_encode_to_new_buffer(&asn_DEF_E2AP_PDU, 0, pdu, (void **)buffer);

    if (len < 0) {
        LOG_E("[E2AP ASN] Unable to aper encode");
        exit(EXIT_FAILURE);
    } else {
        LOG_D("**[E2AP ASN] Encoded succesfully, encoded size = %d", len);
    }

  ASN_STRUCT_FREE_CONTENTS_ONLY(asn_DEF_E2AP_PDU, pdu);

  return len;
}

struct asn_dec_rval_s e2ap_asn1c_decode_pdu(E2AP_PDU_t *pdu, enum asn_transfer_syntax syntax, unsigned char *buffer, int len) {
    asn_dec_rval_t dec_ret;
    assert(buffer != NULL);

    dec_ret = asn_decode(NULL, syntax, &asn_DEF_E2AP_PDU, (void **) &pdu, buffer, len);
    if (dec_ret.code != RC_OK) {
        LOG_E("[E2AP ASN] Failed to decode pdu");
        exit(EXIT_FAILURE);
    } else {
        LOG_D("[E2AP ASN] Decoded successfully");
        return dec_ret;
    }
}

long e2ap_asn1c_get_procedureCode(E2AP_PDU_t* pdu)
{
  long procedureCode = -1;

  switch(pdu->present)
  {
    case E2AP_PDU_PR_initiatingMessage:
      procedureCode = pdu->choice.initiatingMessage->procedureCode;
      break;

    case E2AP_PDU_PR_successfulOutcome:
      procedureCode = pdu->choice.successfulOutcome->procedureCode;
      break;

    case E2AP_PDU_PR_unsuccessfulOutcome:
      procedureCode = pdu->choice.unsuccessfulOutcome->procedureCode;
      break;

    default:
      LOG_E("[E2AP] Error: Unknown index %d in E2AP PDU", (int)pdu->present);
      break;
  }

  return procedureCode;
}
