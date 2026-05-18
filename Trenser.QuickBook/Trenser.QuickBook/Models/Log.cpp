#include "Log.h"

Log::Log()
    : m_id(""),
    m_description("")
{}

Log::Log(const std::string& id,
    const std::string& description)
    : m_id(id),
    m_description(description)
{}

const std::string& Log::getId() const
{
    return m_id;
}

const std::string& Log::getDescription() const
{
    return m_description;
}

void Log::setId(const std::string& id)
{
    m_id = id;
}

void Log::setDescription(const std::string& description)
{
    m_description = description;
}
