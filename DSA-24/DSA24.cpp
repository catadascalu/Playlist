#include "DSA24.h"


DSA24::DSA24(QWidget *parent)
	: QMainWindow(parent)
{
	this->test.testSong();
	this->test.testNode();
	this->test.testSDLLA();
	this->playlist.init();
	ui.setupUi(this);

	populatePlaylist(playlist);

	//SLOTS
	connect(ui.addButton, SIGNAL(clicked()), this, SLOT(add()));
	connect(ui.removeButton, SIGNAL(clicked()), this, SLOT(removeSong()));
	connect(ui.startButton, SIGNAL(clicked()), this, SLOT(start()));
	connect(ui.nextButton, SIGNAL(clicked()), this, SLOT(nextSong()));
	connect(ui.prevButton, SIGNAL(clicked()), this, SLOT(previousSong()));
	connect(ui.playButton, SIGNAL(clicked()), this, SLOT(play()));
}

void DSA24::populatePlaylist(PlayList p)
{
	int index;
	ui.playListTable->setRowCount(20);
	index = 0;
	int i = p.getSongs().getHead();
	while (i != p.getSongs().getTail())
	{
		ui.playListTable->setItem(index, 0, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getTitle())));
		ui.playListTable->setItem(index, 1, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getArtist())));
		ui.playListTable->setItem(index, 2, new QTableWidgetItem(QString::fromStdString(std::to_string(p.getSong(i).getDuration()))));
		ui.playListTable->setItem(index, 3, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getLink())));

		index++;

		i = p.getSongs().getNode(i).getNext();
	}

	i = p.getSongs().getTail();
	ui.playListTable->setItem(index, 0, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getTitle())));
	ui.playListTable->setItem(index, 1, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getArtist())));
	ui.playListTable->setItem(index, 2, new QTableWidgetItem(QString::fromStdString(std::to_string(p.getSong(i).getDuration()))));
	ui.playListTable->setItem(index, 3, new QTableWidgetItem(QString::fromStdString(p.getSong(i).getLink())));
}

void DSA24::populateTemp(Song s)
{
	ui.songList->clear();
	//Song s = p.playFirst();
	ui.songList->insertItem(0, QString::fromStdString(s.toString()));
}

void DSA24::add()
{
	QString title = ui.titleBox->toPlainText();
	QString artist = ui.artistBox->toPlainText();
	QString duration = ui.durationBox->toPlainText();
	QString link = ui.linkBox->toPlainText();

	Song song = Song(title.toStdString(), artist.toStdString(), duration.toInt(), link.toStdString());
	playlist.addSong(song);
	populatePlaylist(playlist);
}

void DSA24::removeSong()
{
	QString title = ui.titleBox->toPlainText();
	Song song = Song(title.toStdString(), "", 0, "");
	playlist.deleteSong(song);
	populatePlaylist(playlist);
}

void DSA24::start()
{
	Song song = playlist.playFirst();
	populateTemp(song);
}

void DSA24::nextSong()
{
	Song song = playlist.next();
	populateTemp(song);
}

void DSA24::previousSong()
{
	Song song = playlist.previous();
	populateTemp(song);
}

void DSA24::play()
{
	Song song = playlist.getCurrentSong();
	song.playSong();
}