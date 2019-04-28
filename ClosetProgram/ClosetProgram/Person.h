#pragma once
#include "Object.h"
class Person :
	public Object
{
public:
	Person(std::string aName);
	~Person();
};

