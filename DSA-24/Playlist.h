#pragma once
#include "SDLLA.h"
#include "Iterator.h"
#include "Song.h"

class PlayList
{
private:
	SDLLA playlist;
	Iterator it;
public:
	//PlayList() {}
	PlayList(SDLLA& s, Iterator& i) : it(i), playlist(s) {}
	~PlayList() {}
	SDLLA getSongs() const { return this->playlist; }
	Song getSong(int pos);
	Song find(std::string title);
	void addSong(Song s);
	void init();
	void deleteSong(Song s);
	Song getCurrentSong();
	Song playFirst();
	Song next();
	Song previous();

};
