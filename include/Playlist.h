#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Track.h"
#include <vector> // Add this line

class Playlist
{
private:
    Track *head;
    Track *tail;
    Track *currentTrack;

public:
    Playlist();
    void addTrack(Track *track);
    void removeTrack(Track *track);
    void playNext();
    void playPrev();
    Track *getCurrentTrack();
    void playFirst();
    void playLast();
};

#endif // PLAYLIST_H