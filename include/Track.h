#ifndef TRACK_H
#define TRACK_H

#include <string>
using std::string;

class Track
{
public:
    Track(string title = "", string artist = "");

    string getTitle();
    string getArtist();
    Track *getNext();
    Track *getPrev();

    void setTitle(string title);
    void setArtist(string artist);
    void setNext(Track *next);
    void setPrev(Track *prev);

private:
    string title;
    string artist;
    Track *next;
    Track *prev;
};

#endif // TRACK_H