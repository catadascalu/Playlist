#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DSA24.h"
#include "Playlist.h"
#include "Tests.h"

class DSA24 : public QMainWindow
{
	Q_OBJECT

public:
	DSA24(QWidget *parent = Q_NULLPTR);

private:
	Ui::DSA24Class ui;
	Tests test = Tests();
	RelationAlphabetically relation = RelationAlphabetically();
	SDLLA sdlla = SDLLA(-1, -1, 0, relation);
	Iterator it = Iterator();
	PlayList playlist = PlayList(sdlla, it);
	int index = 0;
private slots:
void populatePlaylist(PlayList p);
void populateTemp(Song s);
void add();
void removeSong();
void start();
void nextSong();
void previousSong();
void play();
};
