#include "Drawer.h"

Drawer::Drawer(std::string aName, Vector3 theDimenions, int aCapacity) : Object(aName), dimensions(theDimenions), aCapacity(aCapacity)
{

}


Drawer::~Drawer()
{
}

void Drawer::AddItem(Object anObject) {
	content.push_back(anObject);
}

void Drawer::AddItem(Object* anObject)
{
	content.push_back(*anObject);
}

std::list<Object>* Drawer::GetContent()
{
	return &content;
}
