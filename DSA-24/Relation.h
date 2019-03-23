#pragma once
#include<iostream>
using namespace std;

template<typename TComp>
class Relation
{
public:
	Relation() {}

	//takes 2 generic elements and compares them
	virtual int compare(const TComp& elem1, const TComp& elem2) = 0;

	~Relation() {}
};
