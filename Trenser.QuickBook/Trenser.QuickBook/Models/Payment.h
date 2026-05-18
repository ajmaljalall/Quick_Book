#pragma once
#include <string>
#include "Booking.h"

class Payment
{
private:
    std::string m_paymentId;
    Booking* m_booking;
    double m_amount;
    int m_paymentMethod; // enum placeholder
    int m_status;        // enum placeholder
    std::string m_timeStamp;

public:
    Payment();
    Payment(const std::string& paymentId,
        Booking* booking,
        double amount,
        int paymentMethod,
        int status,
        const std::string& timeStamp);

    const std::string& getPaymentId() const;
    Booking* getBooking() const;
    double getAmount() const;
    int getPaymentMethod() const;
    int getStatus() const;
    const std::string& getTimeStamp() const;

    void setPaymentId(const std::string& paymentId);
    void setBooking(Booking* booking);
    void setAmount(double amount);
    void setPaymentMethod(int paymentMethod);
    void setStatus(int status);
    void setTimeStamp(const std::string& timeStamp);
};

