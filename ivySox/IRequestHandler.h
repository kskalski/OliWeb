#pragma once

#include <string>

class InboundRequest;

using namespace std;

class IRequestHandler {
    public:
    // Returns true if handler is responsible for handling given request path.
    virtual bool ShouldHandle(const string& path) = 0;
    // Returns full response for the given request including HTTP header fields.
    // Note: request is readonly, since writing data to socket needs synchronization.
    virtual string Handle(const InboundRequest* request) = 0;
};
