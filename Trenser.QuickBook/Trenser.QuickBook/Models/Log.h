#pragma once
#include <string>

class Log
{
private:
    std::string m_id;
    std::string m_description;

public:
    Log();
    Log(const std::string& id,
        const std::string& description);

    const std::string& getId() const;
    const std::string& getDescription() const;

    void setId(const std::string& id);
    void setDescription(const std::string& description);
};


