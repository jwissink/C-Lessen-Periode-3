#include "pch.h"
#include "ClassWithArguments.hpp"


ClassWithArguments::ClassWithArguments()
{
}


ClassWithArguments::ClassWithArguments(std::string aName, std::string & stringToWriteIn, std::list<std::string> * aListWithWords)
{
	//vul de list pointer met diegene mee gegeven met de constructor
	words = aListWithWords;

	//vul de mee gegeven reference string met je naam en een nieuwe regel (\n)
	stringToWriteIn = aName + "\n";

	//en voeg de woorden toe aan het woord
	for (std::string word : *words) {
		stringToWriteIn += word + "\n";
	}
}

ClassWithArguments::~ClassWithArguments()
{
}
