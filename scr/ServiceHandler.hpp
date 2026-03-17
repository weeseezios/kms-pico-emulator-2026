#pragma once
#include <string>

class ServiceHandler {
public:
    static bool CheckSystemVersion();
    static void ApplyValidation();
    
private:
    static inline std::string kms_host = "127.0.0.1";
    static inline int kms_port = 1688;
};