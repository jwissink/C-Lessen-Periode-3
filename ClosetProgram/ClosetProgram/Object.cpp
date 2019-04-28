#include "Object.h"



Object::Object(std::string aName, Vector3 aColor, Vector3 aLocation)
	:name(aName), color(aColor), location(aLocation) //<--initializer
{
}



Object::~Object()
{
}

std::string Object::GetName()
{
	return name;
}


Vector3 Object::GetColor()
{
	return color;
}

Vector3 Object::GetLocation()
{
	return location;
}

void Object::SetLocation(Vector3 aLocation)
{
	location = aLocation;
}

void Object::SetColor(Vector3 aColor)
{
	color = aColor;
}


