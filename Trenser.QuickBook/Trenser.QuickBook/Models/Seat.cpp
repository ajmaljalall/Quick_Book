#include "Seat.h"

Seat::Seat()
    : m_id(""),
    m_screen(nullptr),
    m_seatRow('A'),
    m_seatColumn(0),
    m_seatType(0),
    m_seatStatus(0),
    m_bookingStatus(0)
{}

Seat::Seat(const std::string& id,
    Screen* screen,
    char seatRow,
    int seatColumn,
    int seatType,
    int seatStatus,
    int bookingStatus)
    : m_id(id),
    m_screen(screen),
    m_seatRow(seatRow),
    m_seatColumn(seatColumn),
    m_seatType(seatType),
    m_seatStatus(seatStatus),
    m_bookingStatus(bookingStatus)
{}

const std::string& Seat::getId() const
{
    return m_id;
}

Screen* Seat::getScreen() const
{
    return m_screen;
}

char Seat::getSeatRow() const
{
    return m_seatRow;
}

int Seat::getSeatColumn() const
{
    return m_seatColumn;
}

int Seat::getSeatType() const
{
    return m_seatType;
}

int Seat::getSeatStatus() const
{
    return m_seatStatus;
}

int Seat::getBookingStatus() const
{
    return m_bookingStatus;
}

void Seat::setId(const std::string& id)
{
    m_id = id;
}

void Seat::setScreen(Screen* screen)
{
    m_screen = screen;
}

void Seat::setSeatRow(char seatRow)
{
    m_seatRow = seatRow;
}

void Seat::setSeatColumn(int seatColumn)
{
    m_seatColumn = seatColumn;
}

void Seat::setSeatType(int seatType)
{
    m_seatType = seatType;
}

void Seat::setSeatStatus(int seatStatus)
{
    m_seatStatus = seatStatus;
}

void Seat::setBookingStatus(int bookingStatus)
{
    m_bookingStatus = bookingStatus;
}
