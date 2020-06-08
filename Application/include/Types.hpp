#ifndef TYPES_HPP
#define TYPES_HPP

#include <string>

// A songID is an int!
typedef int SongID;
// A socket is also an int - this is for easier reading
typedef int SockFD;

// Status of sysmodule playback
enum class PlaybackStatus {
    Error,      // An error occurred getting status
    Playing,    // Audio is being played
    Paused,     // Song is in middle of playback but is paused
    Stopped     // No song is playing/paused
};

// Repeat type
enum class RepeatMode {
    Off,
    One,
    All
};

// Is shuffle on?
enum class ShuffleMode {
    Off,
    On
};

// Struct storing pointer to and size of album art
// Pointer should be deleted when no longer needed
struct SongArt {
    unsigned char * data;
    size_t size;
};

// Struct storing information about song
// All strings are UTF-8 encoded!
struct SongInfo {
    SongID ID;              // unique ID
    std::string title;      // title
    std::string artist;     // artist name
    std::string album;      // album name
    unsigned int duration;  // in seconds
};

#endif