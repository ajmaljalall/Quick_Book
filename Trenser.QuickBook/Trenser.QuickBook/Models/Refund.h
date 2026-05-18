#pragma once
#include <string>
#include "Ticket.h"

class Refund
{
private:
    std::string m_id;
    Ticket* m_bookedTicket;
    double m_refundAmount;
    std::string m_time;
    int m_status; // enum placeholder

public:
    Refund();
    Refund(const std::string& id,
        Ticket* bookedTicket,
        double refundAmount,
        const std::string& time,
        int status);

    const std::string& getId() const;
    Ticket* getBookedTicket() const;
    double getRefundAmount() const;
    const std::string& getTime() const;
    int getStatus() const;

    void setId(const std::string& id);
    void setBookedTicket(Ticket* bookedTicket);
    void setRefundAmount(double refundAmount);
    void setTime(const std::string& time);
    void setStatus(int status);
};

