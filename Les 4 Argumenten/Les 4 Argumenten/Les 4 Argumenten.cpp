// Les 4 Argumenten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//include de class met argumenten
#include "ClassWithArguments.hpp"

int main()
{
	//een lege string die gevult gaat worden door de constructor van "ClassWithArguments"
	std::string emptyString;

	//een lijst aan woorden die we mee geven aan de constructor
	std::list<std::string> words{ "zero", "one", "two", "three", "four" };
	
	//en dan maken we een nieuwe instance van deze class en geven we het volgende mee:
	ClassWithArguments theClass{ "your name", emptyString, &words };
	//m'n naam als string, de lege aangemaakte string, en een referentie naar de lijst

	//dan outputten we de gevulde string
	std::cout << emptyString;


	std::cin.get();
}


