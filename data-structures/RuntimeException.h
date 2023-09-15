//
// Created by huseyin on 9/15/23.
//

#ifndef CPP_ALGODS_RUNTIMEEXCEPTION_H
#define CPP_ALGODS_RUNTIMEEXCEPTION_H
#include<string>

class RuntimeException {
private:
    std::string errorMsg;
public:
    RuntimeException(const std::string& err) {errorMsg = err;}
    std::string getMessage() const {return errorMsg;}
};


#endif //CPP_ALGODS_RUNTIMEEXCEPTION_H
