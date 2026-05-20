#include "Log.h"

Log::Log()
    : m_logId(""),
    m_description("")
{}

Log::Log(const std::string& logId,
    const std::string& description)
    : m_logId(logId),
    m_description(description)
{}

const std::string& Log::getLogId() const
{
    return m_logId;
}

const std::string& Log::getDescription() const
{
    return m_description;
}

void Log::setLogId(const std::string& id)
{
    m_logId = id;
}

void Log::setDescription(const std::string& description)
{
    m_description = description;
}
