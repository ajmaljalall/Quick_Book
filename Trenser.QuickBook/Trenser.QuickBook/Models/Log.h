#pragma once
#include <string>

class Log
{
private:
    std::string m_logId;
    std::string m_description;
public:
    Log();
    Log(const std::string& logId, const std::string& description);
    const std::string& getLogId() const;
    const std::string& getDescription() const;
    void setLogId(const std::string& id);
    void setDescription(const std::string& description);
};


