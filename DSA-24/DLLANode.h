#pragma once
#include<iostream>
#include<string>
#include "Song.h"

using namespace std;

class DLLANode
{
private:
	Song info;
	int next;
	int prev;

public:
	DLLANode() {}
	DLLANode(Song s, int n, int p) : info(s), next(n), prev(p) {}
	Song getInfo() { return this->info; }
	int getNext() { return this->next; }
	int getPrev() { return this->prev; }

	void setInfo(Song newS) { this->info = newS; }
	void setNext(int newNext) { this->next = newNext; }
	void setPrev(int newPrev) { this->prev = newPrev; }
};
