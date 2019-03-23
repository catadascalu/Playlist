#pragma once
#include "Relation.h"
#include "Song.h"
using namespace std;
class RelationAlphabetically : public Relation<std::string>
{
public:
	RelationAlphabetically() {}

	int compare(const std::string& str1, const std::string& str2) override;

	~RelationAlphabetically() {}

};