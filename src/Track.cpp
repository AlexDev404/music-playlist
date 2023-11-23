#include "../include/Track.h"

Track::Track(std::string title, std::string artist)
{
    this->title = title;
    this->artist = artist;
    this->next = nullptr;
    this->prev = nullptr;
}

std::string Track::getTitle()
{
    return this->title;
}

std::string Track::getArtist()
{
    return this->artist;
}

Track *Track::getNext()
{
    return this->next;
}

Track *Track::getPrev()
{
    return this->prev;
}

void Track::setTitle(std::string title)
{
    this->title = title;
}

void Track::setArtist(std::string artist)
{
    this->artist = artist;
}

void Track::setNext(Track *next)
{
    this->next = next;
}

void Track::setPrev(Track *prev)
{
    this->prev = prev;
}