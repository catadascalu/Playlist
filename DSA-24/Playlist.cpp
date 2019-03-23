#include "PlayList.h"

Song  PlayList::getSong(int pos)
{
	Song s = this->playlist.getNode(pos).getInfo();
	return s;
}

Song PlayList::find(std::string title)
{
	Song s = Song(title, "", 0, "");
	int pos = this->playlist.find(s);
	Song sNew = this->getSong(pos);
	return sNew;
}

void PlayList::addSong(Song s)
{
	if (this->playlist.find(s) == -1)
		this->playlist.insertGood(s);
	else return;
}

void PlayList::init()
{
	
	Song s1 = Song("La vie en rose", "Louis Armstrong", 2, "https://www.youtube.com/watch?v=qtfJj8oF6xM");
	Song s2 = Song("I see fire", "Ed Sheeran", 3, "https://www.youtube.com/watch?v=2fngvQS_PmQ");
	Song s3 = Song("Knockin' on heaven's door", "Guns 'n roses", 5, "https://www.youtube.com/watch?v=dmNlUnsWZOQ");
	Song s4 = Song("The way you look tonight", "Frank Sinatra", 3, "https://www.youtube.com/watch?v=1gab2Vuz2Nk");
	Song s5 = Song("My girl", "The Temptations", 3, "https://www.youtube.com/watch?v=6bsdGo8dEoY");
	Song s6 = Song("See you again", "Tyler, the creator", 4, "https://www.youtube.com/watch?v=i6atIakaGas");
	Song s7 = Song("Be my baby", "The Ronettes", 3, "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	Song s8 = Song("Ivy", "Frank Ocean", 4, "https://www.youtube.com/watch?v=AE005nZeF-A");
	Song s9 = Song("Slide", "Calvin Harris", 5, "https://www.youtube.com/watch?v=8Ee4QjCEHHc");
	Song s10 = Song("Heatstroke", "Calvin Harris", 4, "https://www.youtube.com/watch?v=ME9x1mSNv-w");
	this->addSong(s1);
	this->addSong(s2);
	this->addSong(s3);
	this->addSong(s4);
	this->addSong(s5);
	this->addSong(s6);
	this->addSong(s7);
	this->addSong(s8);
	this->addSong(s9);
	this->addSong(s10);
}

void PlayList::deleteSong(Song s)
{
	int pos;
	if (this->playlist.getHead() != -1)
		pos = this->playlist.find(s);
	else
		pos = -1;
	this->playlist.removeGood(s);
	if (this->it.getCurrent() == pos)
		this->it.setCnt(this->playlist.getHead());
}

Song PlayList::getCurrentSong()
{
	Song song = this->getSong(this->it.getCurrent());
	return song;
}

Song PlayList::playFirst()
{
	//this->it.setCnt(this->playlist.getHead());
	//int pos = this->it.getCurrent();
	//Iterator it = Iterator();
	if (this->playlist.getHead() == -1)
		return Song();
	this->it.setCnt(this->playlist.getHead());
	int pos = this->it.getCurrent();
	Song s = this->getSong(pos);
	//s.playSong();
	return s;

}

Song PlayList::next()
{
	if (this->playlist.getNode(this->it.getCurrent()).getNext() == -1)
		return Song();
	this->it.setCnt(this->playlist.getNode(this->it.getCurrent()).getNext());
	//this->it.next();
	int pos = this->it.getCurrent();
	Song s = this->getSong(pos);
	//s.playSong();
	return s;
}

Song PlayList::previous()
{
	if (this->playlist.getNode(this->it.getCurrent()).getPrev() == -1)
		return Song();
	this->it.setCnt(this->playlist.getNode(this->it.getCurrent()).getPrev());
	//this->it.previous();
	int pos = this->it.getCurrent();
	Song s = this->getSong(pos);
	//s.playSong();
	return s;
}


