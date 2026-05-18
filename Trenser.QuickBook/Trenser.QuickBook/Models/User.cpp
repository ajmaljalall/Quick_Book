#include "User.h"

User::User()
    : m_userId(""),
    m_userName(""),
    m_email(""),
    m_password(""),
    m_phoneNumber(0),
    m_userType(0),
    m_status(0)
{}

User::User(const std::string& userId,
    const std::string& userName,
    const std::string& email,
    const std::string& password,
    long int phoneNumber,
    int userType,
    int status)
    : m_userId(userId),
    m_userName(userName),
    m_email(email),
    m_password(password),
    m_phoneNumber(phoneNumber),
    m_userType(userType),
    m_status(status)
{}

const std::string& User::getUserId() const
{
    return m_userId;
}

const std::string& User::getUserName() const
{
    return m_userName;
}

const std::string& User::getEmail() const
{
    return m_email;
}

const std::string& User::getPassword() const
{
    return m_password;
}

long int User::getPhoneNumber() const
{
    return m_phoneNumber;
}

int User::getUserType() const
{
    return m_userType;
}

int User::getStatus() const
{
    return m_status;
}

void User::setUserId(const std::string& userId)
{
    m_userId = userId;
}

void User::setUserName(const std::string& userName)
{
    m_userName = userName;
}

void User::setEmail(const std::string& email)
{
    m_email = email;
}

void User::setPassword(const std::string& password)
{
    m_password = password;
}

void User::setPhoneNumber(long int phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

void User::setUserType(int userType)
{
    m_userType = userType;
}

void User::setStatus(int status)
{
    m_status = status;
}
