#include "pch.h"//<---Precompiled headers wordt weer geinclude in de source
#include "Example.hpp" //<- en ook de header van de class

//dan is hier de constructor
Example::Example()
{
}

//en hier de deconstructor
Example::~Example()
{
}

//bij het maken van de functie moet ook de return type worden gespecificeerd, de class namespace  (in dit geval example) en de argumenten.
std::string Example::ReturnCool(std::string wordToAppend)
{
	return "cool " + wordToAppend; //en de return values is net zoals in de andere talen
}
