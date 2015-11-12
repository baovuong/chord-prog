#ifndef SONG_H
#define SONG_H

#include <string>

class song
{
private:
    std::string title_;
    std::string artist_;
public:
    song();

    // getters & setters
    std::string title() const;
    void title(std::string);

    std::string artist() const;
    void artist(std::string);
};

#endif // SONG_H
