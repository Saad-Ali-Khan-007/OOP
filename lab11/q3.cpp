#include <iostream>
#include <vector>
#include <string>
using namespace std;

int startlab11()
{
    cout << "Name: Saad Ali Khan(SE-23083)" << endl;
    cout << "Lab 11" << endl;
    return 0;
}
class Song
{
private:
    string title;
    string artist;
    int duration; // duration in seconds

public:
    Song(const string &t, const string &a, int d) : title(t), artist(a), duration(d) {}

    void display() const
    {
        cout << "Title: " << title << "\nArtist: " << artist << "\nDuration: " << duration << " seconds" << endl;
    }
};

class Playlist
{
private:
    vector<Song> songs;

public:
    void addSong(const Song &song)
    {
        songs.push_back(song);
    }

    void displayPlaylist() const
    {
        for (const auto &song : songs)
        {
            song.display();
            cout << endl;
        }
    }
};

int l11q3()
{
    Playlist playlist;
    Song song1("Shape of You", "Ed Sheeran", 263);
    Song song2("Blinding Lights", "The Weeknd", 200);

    playlist.addSong(song1);
    playlist.addSong(song2);

    playlist.displayPlaylist();
    return 0;
}

int main()
{
    startlab11();
    l11q3();
    return 0;
}
