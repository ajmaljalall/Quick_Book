#pragma once
#include <string>
#include "User.h"

class Notification
{
private:
    std::string m_notificationId;
    User* m_receiver;
    std::string m_message;
    int m_status;   // enum placeholder
    std::string m_time;
public:
    Notification();
    Notification(const std::string& notificationId,
        User* receiver,
        const std::string& message,
        int status,
        const std::string& time);

    const std::string& getNotificationId() const;
    User* getReceiver() const;
    const std::string& getMessage() const;
    int getStatus() const;
    const std::string& getTime() const;
    void setNotificationId(const std::string& id);
    void setReceiver(User* receiver);
    void setMessage(const std::string& message);
    void setStatus(int status);
    void setTime(const std::string& time);
};

