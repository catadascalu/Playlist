#pragma once
#include<string>
#include<Windows.h>
#include<shellapi.h>

class Song
{
private:
	std::string title;
	std::string artist;
	int duration;
	std::string play;
public:
	Song() {}
	Song(std::string t, std::string a, int d, std::string p) : title(t), artist(a), duration(d), play(p) {}
	std::string getTitle() const { return this->title; }
	std::string getArtist() const { return this->artist; }
	int getDuration() const { return this->duration; }
	std::string getLink() const { return this->play; }
	std::string toString();
	friend bool operator==(Song& s1, Song& s2);
	void playSong();
};
