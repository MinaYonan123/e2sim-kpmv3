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

#ifndef E2SIM_HPP
#define E2SIM_HPP

#include <unordered_map>
#include <functional>
#include <string>

#include<thread>

extern "C" {
#include "E2AP-PDU.h"
#include "OCTET_STRING.h"
}

typedef std::function<void(E2AP_PDU_t*)> SubscriptionCallback;
typedef std::function<void(E2AP_PDU_t*)> SmCallback;
typedef std::function<void(void)> CallbackFunction;

class E2Sim {
public:
  std::unordered_map<long, OCTET_STRING_t *> getRegistered_ran_functions();

  void generate_e2apv1_subscription_response_success(E2AP_PDU *e2ap_pdu, long reqActionIdsAccepted[], long reqActionIdsRejected[], int accept_size, int reject_size, long reqRequestorId, long reqInstanceId);

  void generate_e2apv1_indication_request_parameterized(E2AP_PDU *e2ap_pdu, long requestorId, long instanceId, long ranFunctionId, long actionId, long seqNum, uint8_t *ind_header_buf, int header_length, uint8_t *ind_message_buf, int message_length);  
   
  SubscriptionCallback get_subscription_callback(long func_id);
  SmCallback get_sm_callback(long func_id);

  void register_e2sm(long func_id, OCTET_STRING_t* ostr);

  void register_subscription_callback(long func_id, SubscriptionCallback cb);
  void register_sm_callback(long func_id, SmCallback cb);

  void register_callback(long cb_id, CallbackFunction cb);
  CallbackFunction get_callback(long cb_id);

  void encode_and_send_sctp_data(E2AP_PDU_t* pdu);

  int run_loop(int argc, char* argv[]);

  int run_loop(std::string server_ip, uint16_t server_port, uint16_t local_port, std::string gnb_id, std::string plmn_id);

private:

    std::unordered_map<long, OCTET_STRING_t*> ran_functions_registered;
    std::unordered_map<long, SubscriptionCallback> subscription_callbacks;
    std::unordered_map<long, SmCallback> sm_callbacks;

    std::unordered_map<long, CallbackFunction> callbackfunctions;
    int client_fd {0};
    void wait_for_sctp_data();

};

#endif
