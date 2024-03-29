#pragma once
#include "DLLANode.h"
#include "RelationAlphabetically.h"
#include "Song.h"



class SDLLA
{
private:
	DLLANode nodes[20];
	int cap;
	int head;
	int tail;
	int firstEmpty;
	RelationAlphabetically relation;

public:
	//DLLANode nodes[20];
	SDLLA(int h, int t, int fe, RelationAlphabetically rel) : head(h), tail(t), firstEmpty(fe), relation(rel) {
		for (int i = 0; i < 20; i++)
		{
			this->nodes[i].setNext(-1);
			this->nodes[i].setPrev(-1);
			this->nodes[i].setInfo(Song());
		}
		this->cap = 20;
	}

	DLLANode& getNode(int pos) { return this->nodes[pos]; }
	int getCap() { return cap; }
	int getHead() { return head; }
	int getTail() { return tail; }
	int getFE() { return firstEmpty; }
	SDLLA& operator=(SDLLA& sdlla1)
	{
		for (int i = 0; i < sdlla1.cap; i++)
			this->nodes[i] = sdlla1.nodes[i];
		this->cap = sdlla1.getCap();
		this->head = sdlla1.getHead();
		this->tail = sdlla1.getTail();
		this->firstEmpty = sdlla1.getFE();


		return *this;
	}

	//allocates space for a new node
	int allocate()
	{
		if (this->head == -1 && this->tail == -1)
		{
			this->firstEmpty = 1;
			this->getNode(this->firstEmpty).setPrev(-1);
			this->getNode(0).setNext(-1);
			this->getNode(0).setPrev(-1);
			return 0;
		}
		int newElem = this->firstEmpty;
		if (newElem != -1)
		{
			this->firstEmpty = this->getNode(this->firstEmpty).getNext();
			this->getNode(this->firstEmpty).setPrev(-1);
			this->getNode(newElem).setNext(-1);
			this->getNode(newElem).setPrev(-1);
		}
		return newElem;
	}

	//frees the position of the node that is being removed
	void free(int pos)
	{
		this->getNode(pos).setNext(this->firstEmpty);
		this->getNode(pos).setPrev(-1);
		this->getNode(this->firstEmpty).setPrev(pos);
		this->firstEmpty = pos;
	}


	//returns the position(in the array) of an element, given by its info
	//searches in a more efficient way: divides the search in two possibilities(starting from the head or from the tail, depending on the half of the alphabet in which the title is situated)
	//pre : elem is the song we want to access
	//post : its position in the array is returned
	//special cases: empty list, the element is "smaller" than the head or "greater" than the tail, therefore, not in the list
	int find(Song elem)
	{
		if (this->getHead() == -1)
			return -1;
		if (this->relation.compare(elem.getTitle(), this->nodes[this->head].getInfo().getTitle()) == 1)
			return -1;
		if (this->relation.compare(elem.getTitle(), this->nodes[this->tail].getInfo().getTitle()) == -1)
			return -1;
		int current = -1;
		if (this->relation.compare(elem.getTitle(), "L") >= 0)
		{
			current = this->head;
			while (this->relation.compare(elem.getTitle(), this->nodes[current].getInfo().getTitle()) != 0 && this->relation.compare(this->nodes[current].getInfo().getTitle(), "L") >= 0)
			{
				current = this->nodes[current].getNext();
			}
			if (this->relation.compare(elem.getTitle(), this->nodes[current].getInfo().getTitle()) == 0)
				return current;
			else return -1;
		}
		else if(this->relation.compare(elem.getTitle(), "L") < 0)
		{
			current = this->tail;
			while (this->relation.compare(elem.getTitle(), this->nodes[current].getInfo().getTitle()) != 0 && this->relation.compare(this->nodes[current].getInfo().getTitle(), "L") < 0)
			{
				current = this->nodes[current].getPrev();
			}
			if (this->relation.compare(elem.getTitle(), this->nodes[current].getInfo().getTitle()) == 0)
				return current;
			else return -1;
		}
	}

	//pre : elem is a Song
	//post : it will be inserted where it belongs
	//special cases: empty list, inserting before the head, inserting after the tail
	void insertGood(Song elem)
	{
		DLLANode newNode = DLLANode();
		newNode.setInfo(elem);
		newNode.setNext(-1);
		newNode.setPrev(-1);
		if (this->firstEmpty == -1)
		{
			//cout << "List is full." << endl;
			return;
		}
		if (this->getHead() == -1)
		{
			this->head = 0;
			this->nodes[this->head] = newNode;
			this->firstEmpty++;
			
			this->t  �'���                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           