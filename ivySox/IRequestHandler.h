#pragma once

#include <string>

class InboundRequest;

using namespace std;

class IRequestHandler {
    public:
    virtual bool ShouldHandle(const string& path) = 0;
    virtual bool Handle(InboundRequest* request) = 0;
};
