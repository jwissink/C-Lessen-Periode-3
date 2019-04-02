#pragma once

#include <string>
#include <list>

class ClassWithArguments
{
public:
	ClassWithArguments();
	//je kan meerdere constructors hebben (overloaded functions)
	ClassWithArguments(std::string aName, std::string& stringToWriteIn, std::list<std::string> * aListWithWords);
	//en dus ook eentje met arguments (maar ook zeker! alleen de default met arguments)
	~ClassWithArguments();

private:
	std::list<std::string>* words;
};

