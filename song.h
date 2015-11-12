#ifndef SONG_H
#define SONG_H

#include <string>
#include <vector>

class song
{
private:
    std::string title_;
    std::string artist_;
    std::vector<section> sections_;
public:
    song();

    // getters & setters
    std::string title() const;
    void title(std::string);

    std::string artist() const;
    void artist(std::string);
};

#endif // SONG_H
