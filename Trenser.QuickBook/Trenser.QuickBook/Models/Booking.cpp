#include "Booking.h"

Booking::Booking()
    : m_bookingId(""),
    m_customer(nullptr),
    m_show(nullptr),
    m_bookedSeats(),
    m_status(0),
    m_amount(0)
{}

Booking::Booking(const std::string& id,
    User* customer,
    Show* show,
    const std::vector<Seat*>& bookedSeats,
    int status,
    int amount)
    : m_bookingId(id),
    m_customer(customer),
    m_show(show),
    m_bookedSeats(bookedSeats),
    m_status(status),
    m_amount(amount)
{}

const std::string& Booking::getBookingId() const
{
    return m_bookingId;
}

User* Booking::getCustomer() const
{
    return m_customer;
}

Show* Booking::getShow() const
{
    return m_show;
}

const std::vector<Seat*>& Booking::getBookedSeats() const
{
    return m_bookedSeats;
}

int Booking::getStatus() const
{
    return m_status;
}

int Booking::getAmount() const
{
    return m_amount;
}

void Booking::setBookingId(const std::string& id)
{
    m_bookingId = id;
}

void Booking::setCustomer(User* customer)
{
    m_customer = customer;
}

void Booking::setShow(Show* show)
{
    m_show = show;
}

void Booking::setBookedSeats(const std::vector<Seat*>& bookedSeats)
{
    m_bookedSeats = bookedSeats;
}

void Booking::setStatus(int status)
{
    m_status = status;
}

void Booking::setAmount(int amount)
{
    m_amount = amount;
}
