#include "Refund.h"

Refund::Refund()
    : m_id(""),
    m_bookedTicket(nullptr),
    m_refundAmount(0.0),
    m_time(""),
    m_status(0)
{}

Refund::Refund(const std::string& id,
    Ticket* bookedTicket,
    double refundAmount,
    const std::string& time,
    int status)
    : m_id(id),
    m_bookedTicket(bookedTicket),
    m_refundAmount(refundAmount),
    m_time(time),
    m_status(status)
{}

const std::string& Refund::getId() const
{
    return m_id;
}

Ticket* Refund::getBookedTicket() const
{
    return m_bookedTicket;
}

double Refund::getRefundAmount() const
{
    return m_refundAmount;
}

const std::string& Refund::getTime() const
{
    return m_time;
}

int Refund::getStatus() const
{
    return m_status;
}

void Refund::setId(const std::string& id)
{
    m_id = id;
}

void Refund::setBookedTicket(Ticket* bookedTicket)
{
    m_bookedTicket = bookedTicket;
}

void Refund::setRefundAmount(double refundAmount)
{
    m_refundAmount = refundAmount;
}

void Refund::setTime(const std::string& time)
{
    m_time = time;
}

void Refund::setStatus(int status)
{
    m_status = status;
}
