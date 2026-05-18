#include "Notification.h"

Notification::Notification()
    : m_id(""),
    m_receiver(nullptr),
    m_message(""),
    m_status(0),
    m_time("")
{}

Notification::Notification(const std::string& id,
    User* receiver,
    const std::string& message,
    int status,
    const std::string& time)
    : m_id(id),
    m_receiver(receiver),
    m_message(message),
    m_status(status),
    m_time(time)
{}

const std::string& Notification::getId() const
{
    return m_id;
}

User* Notification::getReceiver() const
{
    return m_receiver;
}

const std::string& Notification::getMessage() const
{
    return m_message;
}

int Notification::getStatus() const
{
    return m_status;
}

const std::string& Notification::getTime() const
{
    return m_time;
}

void Notification::setId(const std::string& id)
{
    m_id = id;
}

void Notification::setReceiver(User* receiver)
{
    m_receiver = receiver;
}

void Notification::setMessage(const std::string& message)
{
    m_message = message;
}

void Notification::setStatus(int status)
{
    m_status = status;
}

void Notification::setTime(const std::string& time)
{
    m_time = time;
}
