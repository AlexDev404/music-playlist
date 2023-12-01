#include "Track.cpp"
#include "Playlist.cpp"
#include <iostream>

int main()
{
    // Create a new playlist
    Playlist myPlaylist;

    // Create some tracks
    Track track1("Song 1", "Artist 1");
    Track track2("Song 2", "Artist 2");
    Track track3("Song 3", "Artist 3");

    // Add tracks to the playlist
    myPlaylist.addTrack(&track1);
    myPlaylist.addTrack(&track2);
    myPlaylist.addTrack(&track3);

    // Play the first track
    myPlaylist.playFirst();
    std::cout << "Now playing: " << myPlaylist.getCurrentTrack()->getTitle() << " by " << myPlaylist.getCurrentTrack()->getArtist() << std::endl;

    std::string userInput;
    while (true) {
        std::cout << "Enter 'n' to play the next track, 'p' to play the previous track, or 'q' to quit: ";
        std::cin >> userInput;

        if (userInput == "n") {
            myPlaylist.playNext();
        } else if (userInput == "p") {
            myPlaylist.playPrev();
        } else if (userInput == "q") {
            break;
        } else {
            std::cout << "Invalid input. Please try again." << std::endl;
        }

        std::cout << "Now playing: " << myPlaylist.getCurrentTrack()->getTitle() << " by " << myPlaylist.getCurrentTrack()->getArtist() << std::endl;
    }

    // Remove a track from the playlist
    // myPlaylist.removeTrack(&track2);

    return 0;
}