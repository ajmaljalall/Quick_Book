#include "Movie.h"

Movie::Movie()
    : m_id(""),
    m_title(""),
    m_language(""),
    m_genre(""),
    m_duration(0),
    m_status(0)
{}

Movie::Movie(const std::string& id,
    const std::string& title,
    const std::string& language,
    const std::string& genre,
    int duration,
    int status)
    : m_id(id),
    m_title(title),
    m_language(language),
    m_genre(genre),
    m_duration(duration),
    m_status(status)
{}

const std::string& Movie::getId() const
{
    return m_id;
}

const std::string& Movie::getTitle() const
{
    return m_title;
}

const std::string& Movie::getLanguage() const
{
    return m_language;
}

const std::string& Movie::getGenre() const
{
    return m_genre;
}

int Movie::getDuration() const
{
    return m_duration;
}

int Movie::getStatus() const
{
    return m_status;
}

void Movie::setId(const std::string& id)
{
    m_id = id;
}

void Movie::setTitle(const std::string& title)
{
    m_title = title;
}

void Movie::setLanguage(const std::string& language)
{
    m_language = language;
}

void Movie::setGenre(const std::string& genre)
{
    m_genre = genre;
}

void Movie::setDuration(int duration)
{
    m_duration = duration;
}

void Movie::setStatus(int status)
{
    m_status = status;
}
