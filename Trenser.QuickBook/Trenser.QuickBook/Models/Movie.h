#pragma once

#include <string>

class Movie
{
private:
    std::string m_movieId;
    std::string m_title;
    std::string m_language;
    std::string m_genre;
    int m_duration;
    int m_status; // enum placeholder
public:
    Movie();
    Movie(const std::string& movieId,
        const std::string& title,
        const std::string& language,
        const std::string& genre,
        int duration,
        int status);
    const std::string& getMovieId() const;
    const std::string& getTitle() const;
    const std::string& getLanguage() const;
    const std::string& getGenre() const;
    int getDuration() const;
    int getStatus() const;
    void setMovieId(const std::string& id);
    void setTitle(const std::string& title);
    void setLanguage(const std::string& language);
    void setGenre(const std::string& genre);
    void setDuration(int duration);
    void setStatus(int status);
};



