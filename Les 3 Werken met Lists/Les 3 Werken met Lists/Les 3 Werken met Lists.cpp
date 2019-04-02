// Les 3 Werken met Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//eerst list includen
#include <list>

//include string om output te genereren met strings
#include <string>

int main()
{
	//we maken een lijst met daarin bij het aanmaken al het woord "nul"
	std::list<std::string> words{ "nul" };
	
	//daarna stoppen we er wat meer woorden in
	words.push_back("een");
	words.push_back("twee");
	words.push_back("drie");
	words.push_back("etc.");

	//om erdoorheen te gaan (en dit is C++ specifiek) een itterator
	std::list<std::string>::iterator it;
	//en dan loopen we erdoorheen
	//dit leest als volgt:
	//de iterator is een pointer naar het eerste element in de array (words.begin())
	//de iterator gaat door zolang hij niet gelijk is aan het eind van de array
	//dan gaan we naar het volgende element
	for (it = words.begin(); it != words.end(); ++it) {
		//en dan is de iterator een pointer die wijst naar het object
		//als we dereferences krijgen we de daadwerkelijke waarde:
		std::cout << *it << std::endl;
	}
	//deze loop met C++ is even doorhebben. Er zijn ook andere varianten van loops, vanaf C++ 11 kan je bijv:
	for (std::string theWord : words) {
		std::cout << theWord << std::endl;
	}

	std::cin.get();
}


