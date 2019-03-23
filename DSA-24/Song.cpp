#include "Song.h"

std::string Song::toString()
{
	std::string str;
	str = this->title + " - " + this->artist + "\n";
	return str;
}

void Song::playSong()
{
	ShellExecuteA(NULL, "open", this->getLink().c_str(), NULL, NULL, SW_SHOWMAXIMIZED);
}

bool operator==(Song & s1, Song & s2)
{
	return s1.getTitle() == s2.getTitle() && s1.getArtist() == s2.getArtist();
}
