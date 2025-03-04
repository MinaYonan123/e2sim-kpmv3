/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
# Copyright 2019 Nokia                                                       *
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
#ifndef E2AP_MESSAGE_HANDLER_HPP
#define E2AP_MESSAGE_HANDLER_HPP

#include "e2sim.hpp"
#include "e2sim_sctp.hpp"


extern "C" {
  #include "e2sim_defs.h"
  #include "e2ap_asn1c_codec.h"
}

bool e2ap_handle_sctp_data(int &socket_fd, sctp_buffer_t &data, E2Sim *e2sim);

void e2ap_handle_X2SetupRequest(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_X2SetupResponse(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_ENDCX2SetupRequest(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_E2SetupRequest(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_RICSubscriptionRequest(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_RICSubscriptionRequest_securityDemo(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_ResourceStatusRequest(E2AP_PDU_t* pdu, int &socket_fd);

void e2ap_handle_E2SeviceRequest(E2AP_PDU_t* pdu, int &socket_fd, E2Sim *e2sim);

void e2ap_handle_RICControlRequest(E2AP_PDU_t *pPdu, int &fd, E2Sim *e2sim);

// TODO: Mostafa
void e2ap_handle_RICSubscriptionDeleteRequest(E2AP_PDU_t* pdu, int &socket_fd, E2Sim *e2sim);

#endif
