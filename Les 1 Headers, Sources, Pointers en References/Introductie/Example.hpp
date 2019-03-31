#pragma once
/*
# Een class in C++ is onderverdeeld in 2 bestanden. Een HPP en een CPP bestand.
# In de HPP defineer en in de CPP implementeer je. Je kan het zien als een boek:
# de hpp is en soort index, je kan zien wat er allemaal in de class komt te staan
# in de cpp is de daadwerkelijke inhoud van het boek
*/

#include <string>

class Example
{

	//in c++ wordt de scope aangeduid in een blok, dus hoef je het niet per variable en/of functie te omschrijven
public:
	//eerst hier is de constructor. Dat is de eerste functie die wordt aangeroepen bij het aanmaken van de class
	Example();

	//dit is de deconstructor, ook wel de functie die wordt aangeroepen bij het vernietigen van de class
	~Example();

	//net als in andere talen moet de functie een return value hebben (mag ook void zijn) en kan argumenten hebben
	std::string ReturnCool(std::string wordToAppend);
private:
	//hier kunnen private variables en functies
protected:
	//en hier de protected


	//bekijk nu de cpp

};

