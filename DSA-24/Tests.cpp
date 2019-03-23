#include "Tests.h"

void Tests::testSong()
{
	Song s = Song("Be my baby", "The Ronettes", 3, "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	std::string string = s.getTitle();
	assert(string == "Be my baby");
	string = s.getArtist();
	assert(string == "The Ronettes");
	string = s.getLink();
	assert(string == "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	int d = 0;
	d = s.getDuration();
	assert(d == 3);
}


void Tests::testNode()
{
	Song s = Song("Be my baby", "The Ronettes", 3, "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	DLLANode node = DLLANode(s, 1, 0);
	int index = 0;
	Song test = node.getInfo();
	assert(test == s);
	index = node.getNext();
	assert(index == 1);
	index = node.getPrev();
	assert(index == 0);
	Song newSong = Song();
	node.setInfo(newSong);
	test = node.getInfo();
	assert(test == newSong);
	node.setNext(-1);
	node.setPrev(-1);
	index = node.getNext();
	assert(index == -1);
	index = node.getPrev();
	assert(index == -1);
}

void Tests::testSDLLA()
{
	RelationAlphabetically relation = RelationAlphabetically();
	SDLLA s = SDLLA(-1, -1, 0, relation);
	Song song = Song("Be my baby", "The Ronettes", 3, "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	s.removeGood(song);
	int pos = s.find(song);
	assert(pos == -1);
	s.insertGood(song);
	assert(s.getHead() == 0);
	assert(s.getTail() == 0);
	song = Song("I see fire", "Ed Sheeran", 5, "https://www.youtube.com/watch?v=2fngvQS_PmQ");
	s.insertGood(song);
	assert(s.getTail() == 1);
	assert(s.getCap() == 20);
	song = Song("La vie en rose", "Louis Armstrong", 2, "https://www.youtube.com/watch?v=qtfJj8oF6xM");
	s.insertGood(song);
	assert(s.getTail() == 2);
	song = Song("Knockin' on heaven's door", "Guns 'n roses", 5, "https://www.youtube.com/watch?v=dmNlUnsWZOQ");
	s.insertGood(song);
	song = Song("The way you look tonight", "Frank Sinatra", 3, "https://www.youtube.com/watch?v=1gab2Vuz2Nk");
	s.insertGood(song);
	song = Song("My girl", "The Temptations", 3, "https://www.youtube.com/watch?v=6bsdGo8dEoY");
	s.insertGood(song);
	song = Song("See you again", "Tyler, the creator", 4, "https://www.youtube.com/watch?v=i6atIakaGas");
	s.insertGood(song);
	song = Song("Ivy", "Frank Ocean", 4, "https://www.youtube.com/watch?v=AE005nZeF-A");
	s.insertGood(song);
	song = Song("Slide", "Calvin Harris", 5, "https://www.youtube.com/watch?v=8Ee4QjCEHHc");
	s.insertGood(song);
	song = Song("Heatstroke", "Calvin Harris", 4, "https://www.youtube.com/watch?v=ME9x1mSNv-w");
	s.insertGood(song);
	assert(s.getTail() == 4);
	
	song = Song("Be my baby", "The Ronettes", 3, "https://www.youtube.com/watch?v=ZV5tgZlTEkQ");
	s.removeGood(song);
	assert(s.getHead() == 9);
	assert(s.getFE() == 0);
	song = Song("The way you look tonight", "Frank Sinatra", 3, "https://www.youtube.com/watch?v=1gab2Vuz2Nk");
	s.removeGood(song);
	assert(s.getTail() == 8);
	song = Song("Sweet child o mine", "Guns 'n roses", 5, "https://www.youtube.com/watch?v=1w7OgIMMRc4");
	s.insertGood(song);
	song = Song("Fly me to the moon", "Frank Sinatra", 3, "https://www.youtube.com/watch?v=5hxibHJOE5E");
	s.insertGood(song);
	song = Song("This girl", "Kungs vs Cookin' on 3 burners", 3, "https://www.youtube.com/watch?v=2Y6Nne8RvaA");
	s.insertGood(song);
	song = Song("Mr. Lonely", "Tyler, the creator", 4, "https://www.youtube.com/watch?v=khMb3k-Wwvg");
	s.insertGood(song);
	song = Song("Golden girl", "Frank Ocean", 4, "https://www.youtube.com/watch?v=zkggNyE5ZoA");
	s.insertGood(song);
	song = Song("Redbone", "Childish Gambino", 5, "https://www.youtube.com/watch?v=Kp7eSUU9oy8");
	s.insertGood(song);
	song = Song("Nice for what", "Drake", 4, "https://www.youtube.com/watch?v=U9BwWKXjVaI");
	s.insertGood(song);
	song = Song("Glitter", "Tyler, the creator", 4, "https://www.youtube.com/watch?v=khMb3k-Wwvg");
	s.insertGood(song);
	song = Song("Nights", "Frank Ocean", 4, "https://www.youtube.com/watch?v=zkggNyE5ZoA");
	s.insertGood(song);
	song = Song("This is America", "Childish Gambino", 5, "https://www.youtube.com/watch?v=Kp7eSUU9oy8");
	s.insertGood(song);
	song = Song("God's plan", "Drake", 4, "https://www.youtube.com/watch?v=U9BwWKXjVaI");
	s.insertGood(song);
	song = Song("Hotline bling", "Drake", 4, "https://www.youtube.com/watch?v=U9BwWKXjVaI");
	s.insertGood(song);

	assert(s.getFE() == -1);
	//s.removeGood(song);
	//assert(s.getFE() == 19);
	Song song1 = Song("Redbone", "Childish Gambino", 5, "https://www.youtube.com/watch?v=Kp7eSUU9oy8");
	s.removeGood(song1);
	assert(s.getFE() == 13);

	SDLLA s1 = s;
	assert(s1.getHead() == s.getHead());

	song1 = Song("Somebody to love", "Queen", 4, "https://www.youtube.com/watch?v=Kp7eSUU9oy8");
	s.removeGood(song1);
}

