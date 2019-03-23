#include "RelationAlphabetically.h"

int RelationAlphabetically::compare(const std::string& str1, const std::string& str2)
{
	if (str1.compare(str2) < 0)
		return 1;
	else if (str1.compare(str2) == 0)
		return 0;
	else return -1;
}
