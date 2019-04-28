#include "Closet.h"


//als je hier voor het eerst komt, kijk dan eerst naar de object class!
Closet::Closet(std::string aName, Vector3 theDimensions , int aCapacity ) : Object(aName), dimensions(theDimensions), capacity(aCapacity)
{
	//als je hier voor het eerst komt, kijk dan eerst naar de object class!
}
//als je hier voor het eerst komt, kijk dan eerst naar de object class!


Closet::~Closet()
{
}

void Closet::AddDrawer(Drawer aDrawer)
{
	drawers.push_back(aDrawer);
}

std::list<Drawer>* Closet::GetDrawers()
{
	return &drawers;
}

void Closet::ListContents()
{
	std::cout << "Closet: " + name << std::endl;
	for (Drawer drawer : drawers) {
		std::cout << "|\tDrawer: " + drawer.GetName() << std::endl;
		for (Object obj : (*drawer.GetContent())) {
			std::cout << "|\t|\t" + obj.GetName() << std::endl;
		}
		std::cout << "|\t|\n|\tEnd of Drawer " + drawer.name << std::endl;
		std::cout << "-------------------------------------------" << std::endl ;
	}
	std::cout << "End of closet: " + name << std::endl << std::endl;
	
}
