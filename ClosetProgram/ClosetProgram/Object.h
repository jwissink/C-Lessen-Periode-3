#pragma once
#include <list>
#include <string>
#include "Vector3.h"
#include "Color.h"

//dit is de godclass zegmaar, maakt het leven een stuk makkelijker aangezien we het toch hebben over objecten
//vooral bij arrays kan je er dan vanalles in gooien :3
//en gezien de formuleren van de opdarcht is dit zeker mogelijk
class Object
{
public:
	Object(std::string aName,Vector3 aColor = Color::red, Vector3 aLocation = { 0.0f, 0.0f, 0.0f });
	~Object();
	std::string GetName();
protected:
	Vector3 color;
	Vector3 location;
public:
	Vector3 GetColor();
	Vector3	GetLocation();
	void SetLocation(Vector3 aLocation);
	void SetColor(Vector3 aColor);
	std::string name;
};

