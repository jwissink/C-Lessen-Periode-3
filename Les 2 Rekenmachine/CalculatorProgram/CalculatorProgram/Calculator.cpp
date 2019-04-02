#include "pch.h"
#include "Calculator.hpp"

//constructor
Calculator::Calculator()
{
}

//deconstructor
Calculator::~Calculator()
{
}


// adds a to b and returns the value
float Calculator::Plus(float a, float b)
{
	return a + b;
}


// multiplies a with b and returns the result
float Calculator::Multiply(float a, float b)
{
	return a * b;
}


// Substracts b from a and returns the result
float Calculator::Substract(float a, float b)
{
	return a - b;
}


// Returns the remaining value of a % b
int Calculator::Modulo(int a, int b)
{
	return a % b;
}

// divides a with b and returns the result
float Calculator::Divide(float a, float b)
{
	return a / b;
}
