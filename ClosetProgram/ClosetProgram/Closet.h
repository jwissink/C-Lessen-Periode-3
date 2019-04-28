#pragma once
#include "Object.h"
#include "Drawer.h"
#include <list>
#include <iostream>
class Closet :
	public Object //als je hier voor het eerst komt, kijk dan eerst naar de object class!
{
public:
	Closet(std::string aName = "", Vector3 theDimensions = { 0.0f, 0.0f, 0.0f }, int aCapacity = 0);
	~Closet();
	void AddDrawer(Drawer aDrawer);
	std::list<Drawer>* GetDrawers();
	void ListContents();
private:
	Vector3 dimensions;
	int capacity;
	std::list<Drawer> drawers;
};

