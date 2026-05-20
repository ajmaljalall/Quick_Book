#pragma once
#include <string>

class User
{
private:
    std::string m_userId;
    std::string m_userName;
    std::string m_email;
    std::string m_password;
    long int m_phoneNumber;
    int m_userType; // enum placeholder
    int m_status;   // enum placeholder
public:
    User();
    User(const std::string& userId,
        const std::string& userName,
        const std::string& email,
        const std::string& password,
        long int phoneNumber,
        int userType,
        int status);
    const std::string& getUserId() const;
    const std::string& getUserName() const;
    const std::string& getEmail() const;
    const std::string& getPassword() const;
    long int getPhoneNumber() const;
    int getUserType() const;
    int getStatus() const;
    void setUserId(const std::string& userId);
    void setUserName(const std::string& userName);
    void setEmail(const std::string& email);
    void setPassword(const std::string& password);
    void setPhoneNumber(long int phoneNumber);
    void setUserType(int userType);
    void setStatus(int status);
};


