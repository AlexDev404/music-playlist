#include "../include/Playlist.h"
#include <iostream>

Playlist::Playlist()
{
    head = nullptr;
    tail = nullptr;
}

void Playlist::addTrack(Track *track)
{
    if (head == nullptr)
    {
        head = track;
        tail = track;
    }
    else
    {
        tail->setNext(track);
        track->setPrev(tail);
        tail = track;
        currentTrack = tail;
    }
}

void Playlist::removeTrack(Track *track)
{
    if (head == track)
    {
        head = track->getNext();
        if (head != nullptr)
        {
            head->setPrev(nullptr);
        }
    }
    else if (tail == track)
    {
        tail = track->getPrev();
        if (tail != nullptr)
        {
            tail->setNext(nullptr);
        }
    }
    else
    {
        Track *prevTrack = track->getPrev();
        Track *nextTrack = track->getNext();
        prevTrack->setNext(nextTrack);
        nextTrack->setPrev(prevTrack);
        currentTrack = nextTrack;
    }
    delete track;
}

void Playlist::playNext()
{
    if (currentTrack->getNext() != nullptr)
    {
        currentTrack = currentTrack->getNext();
        std::cout << "Playing next track: " << currentTrack->getTitle() << " by " << currentTrack->getArtist() << std::endl;
    }
    else
    {
        std::cout << "\nThis is the last track in the playlist.\n" << std::endl;
    }
}

void Playlist::playPrev()
{
    if (currentTrack->getPrev() != nullptr)
    {
        currentTrack = currentTrack->getPrev();
        std::cout << "Playing previous track: " << currentTrack->getTitle() << " by " << currentTrack->getArtist() << std::endl;
    }
    else
    {
        std::cout << "\nThis is the first track in the playlist.\n" << std::endl;
    }
}

void Playlist::playFirst()
{
    if (head != nullptr)
    {
        currentTrack = head;
        std::cout << "Playing first track: " << head->getTitle() << " by " << head->getArtist() << std::endl;
    }
    else
    {
        std::cout << "The playlist is empty." << std::endl;
    }
}

void Playlist::playLast()
{
    if (tail != nullptr)
    {
        currentTrack = tail;
        std::cout << "Playing last track: " << tail->getTitle() << " by " << tail->getArtist() << std::endl;
    }
    else
    {
        std::cout << "The playlist is empty." << std::endl;
    }
}

Track *Playlist::getCurrentTrack()
{
    return currentTrack;
}