#pragma once
#include "SDLLA.h"


class Iterator
{
private:
	//SDLLA list;
	int current;
public:

	Iterator() {}
	~Iterator() {}
	//SDLLA& getList() { return this->list; }
	void setCnt(int value) { this->current = value; }
	int getCurrent()
	{
		//Song e = this->list.getNode(this->current).getInfo();
		//int pos = this->list.find(e);
		return this->current;
	}
	/*
	void next()
	{
	this->current = this->list.getNode(this->current).getNext();
	}

	void previous()
	{
	this->current = this->list.getNode(this->current).getPrev();
	}
	*/
	bool valid()
	{
		if (this->current == -1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};
