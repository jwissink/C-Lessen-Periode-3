#pragma once
class Calculator
{
public:
	//constructor
	Calculator();

	//deconstructor
	~Calculator();

	// adds a to b and returns the value
	float Plus(float a, float b);

	// multiplies a with b and returns the result
	float Multiply(float a, float b);

	// Substracts b from a and returns the result
	float Substract(float a, float b);

	// Returns the remaining value of a % b
	int Modulo(int a, int b);

	// divides a with b and returns the result	
	float Divide(float a, float b);
};

