// Introductie.cpp : This file contains the 'main' function. Program execution begins and ends there.

//wanneer je een nieuw C++ Console project start zul je de volgende includes zien:

#include "pch.h" //<- Deze staat voor precompiled headers en moet altijd bovenaan staan. Hier kan je headers indoen die bijvoorbeeld van te voren gecompiled moeten worden
#include <iostream>//<- deze library zorgt voor input en output in je project

#include "Example.hpp" //<- Eigen gemaakte classes doe je met "" (quotes), libraries van de omgeving zelf (zoals iostream) doe je met <> (groter en kleiner dan)
int main()
{
    std::cout << "Hello World!\n"; //<- van de standard library (std) wordt de functie cout gevult met de waarden achter de << (in dit geval "hello world")
	//en wordt dat geprint op het scherm.

	int* myIntPntr; //pointers kan je herkennen door het asterisk teken (* (sterretje)). Dit is een variabele die wijst naar een integer in het geheugen.
	//Dus de variabele is zelf niet een int maar een int pointer!

	int myInt = 5;
	int& myIntRef = myInt; //een reference kan je herkennen met een empecent teken (& (het "en" teken)). Deze variabel wijst naar een andere variabel.
	//deze is dus bijvoorbeeld om mee te geven aan functies om in te schrijven.

	myIntPntr = &myInt; //het is mogelijk om de pointer toe te wijzen aan de referentie van de integer
	
	std::cout << *myIntPntr << std::endl; //en om de waarde van een pointer aan te vragen (de-referencing)
	
	//zo worden classes geinstantieerd op de stack
	Example anExample;
	//die kan je dan gebruiken met de . (punt)
	std::cout << anExample.ReturnCool("beans") << std::endl;

	//zo worden classes geinstantieerd op de heap
	Example* anotherExample = new Example();

	//die kan je dan gebruiken met de -> (arrow)
	std::cout << anotherExample->ReturnCool("Feet") << std::endl;

	//en cin.get() wacht op antwoord
	std::cin.get();

	//Bekijk nu de example classes die erbij zitten
	//Example.hpp
	//Example.cpp

}

