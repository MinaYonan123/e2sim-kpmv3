
/*****************************************************************************
#                                                                            *
# Copyright 2020 AT&T Intellectual Property                                  *
# Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved.      *
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

#ifndef ENCODE_E2APV1_HPP
#define ENCODE_E2APV1_HPP

#include <vector>
#include <e2sim.hpp>


extern "C" {

#include "E2AP-PDU.h"
#include "OCTET_STRING.h"

}

namespace encoding {

  struct ran_func_info {
    long ranFunctionId;
    OCTET_STRING_t *ranFunctionDesc;
    long ranFunctionRev;
  };
  
  long get_function_id_from_subscription(E2AP_PDU_t *e2ap_pdu);
  
  void buildSubsReq(E2AP_PDU_t *pdu);

  void generate_e2apv1_setup_request_parameterized(E2AP_PDU_t *setup_req_pdu, std::vector<ran_func_info> all_funcs, uint8_t *gnb_id, uint8_t *plmn_id);
  
  void generate_e2apv1_setup_response(E2AP_PDU_t *setup_resp_pdu);
  
  void generate_e2apv1_subscription_request(E2AP_PDU_t *sub_req_pdu);

  void generate_e2apv1_ric_control_acknowledge(E2AP_PDU_t *control_resp_pdu, long reqRequestorId, long reqInstanceId, long ranFuncionId);

  // TODO: Mostafa
  void generate_e2apv1_subscription_delete_acknowledge(E2AP_PDU_t *delete_resp_pdu, long reqRequestorId, long reqInstanceId, long ranFuncionId);

  void generate_e2apv1_subscription_response(E2AP_PDU_t *sub_resp_pdu, E2AP_PDU_t *sub_req_pdu);
  
  void generate_e2apv1_subscription_response_success(E2AP_PDU *e2ap_pdu, long reqActionIdsAccepted[], long reqActionIdsRejected[], int accept_size, int reject_size, long reqRequestorId, long reqInstanceId);
  
  void generate_e2apv1_indication_request_parameterized(E2AP_PDU *e2ap_pdu, long requestorId, long instanceId, long ranFunctionId, long actionId, long seqNum, uint8_t *ind_header_buf, int header_length, uint8_t *ind_message_buf, int message_length);
  
  void generate_e2apv1_service_update(E2AP_PDU_t *e2ap_pdu, std::vector<ran_func_info> all_funcs);

  long get_function_id_from_control_request(E2AP_PDU_t *pdu);

  OCTET_STRING_t most_copy_src_ostring_to_dst_ostring ();
}

#endif
