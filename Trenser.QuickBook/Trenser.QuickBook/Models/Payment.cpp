#include "Payment.h"

Payment::Payment()
    : m_paymentId(""),
    m_booking(nullptr),
    m_amount(0.0),
    m_paymentMethod(0),
    m_status(0),
    m_timeStamp("")
{}

Payment::Payment(const std::string& paymentId,
    Booking* booking,
    double amount,
    int paymentMethod,
    int status,
    const std::string& timeStamp)
    : m_paymentId(paymentId),
    m_booking(booking),
    m_amount(amount),
    m_paymentMethod(paymentMethod),
    m_status(status),
    m_timeStamp(timeStamp)
{}

const std::string& Payment::getPaymentId() const
{
    return m_paymentId;
}

Booking* Payment::getBooking() const
{
    return m_booking;
}

double Payment::getAmount() const
{
    return m_amount;
}

int Payment::getPaymentMethod() const
{
    return m_paymentMethod;
}

int Payment::getStatus() const
{
    return m_status;
}

const std::string& Payment::getTimeStamp() const
{
    return m_timeStamp;
}

void Payment::setPaymentId(const std::string& paymentId)
{
    m_paymentId = paymentId;
}

void Payment::setBooking(Booking* booking)
{
    m_booking = booking;
}

void Payment::setAmount(double amount)
{
    m_amount = amount;
}

void Payment::setPaymentMethod(int paymentMethod)
{
    m_paymentMethod = paymentMethod;
}

void Payment::setStatus(int status)
{
    m_status = status;
}

void Payment::setTimeStamp(const std::string& timeStamp)
{
    m_timeStamp = timeStamp;
}
