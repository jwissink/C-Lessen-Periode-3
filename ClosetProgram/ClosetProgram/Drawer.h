#pragma once
#include "Object.h"
class Drawer :
	public Object
{
public:
	Drawer(std::string aName, Vector3 theDimensions = { 0.0f, 0.0f, 0.0f }, int aCapcity = 0);
	~Drawer();
	void AddItem(Object anObject);
	void AddItem(Object* anObject);
	std::list<Object>* GetContent();
private:
	Vector3 dimensions;
	std::list<Object> content;
	int aCapacity;
};

