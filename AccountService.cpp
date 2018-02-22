/*
 * Copyright (C) 2018 The Cyber Geeks
 */

#include "AccountService.h"
#include "Session.h"

Service::Services::Account::Account(Session* session) : AccountService(session)
{
}

uint32 Service::Services::Account::HandleGetAccountState(account::v1::GetAccountStateRequest const* request, account::v1::GetAccountStateResponse* response, std::function<void(ServiceBase*, uint32, ::google::protobuf::Message const*)>& /*continuation*/)
{
    return _session->HandleGetAccountState(request, response);
}

uint32 Service::Services::Account::HandleGetGameAccountState(account::v1::GetGameAccountStateRequest const* request, account::v1::GetGameAccountStateResponse* response, std::function<void(ServiceBase*, uint32, ::google::protobuf::Message const*)>& /*continuation*/)
{
    return _session->HandleGetGameAccountState(request, response);
}
