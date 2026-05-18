#pragma once
#include <string>

class AuthenticationManagementService
{
public:
    AuthenticationManagementService();
    void login(const std::string& email, const std::string& password);
    void logout();
    void registerUser();
};


