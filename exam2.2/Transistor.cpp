#include "Transistor.h"

Transistor::Transistor()
{
	string type = "undefined";
	int number = 0;
}

Transistor::Transistor(string name, string purpose, string type, int number)
{
	this->type = type;
	this->number = number;
}

string Transistor::getType() const
{
	return type;
}

void Transistor::setType(string type)
{
	this->type = type;
}

int Transistor::getNumber() const
{
	return number;
}

void Transistor::setNumber(int number)
{
	this->number = number;
}

void Transistor::show() const
{
	Radio::show(); 
	cout << "Type: " << type << endl;
	cout << "Number: " << number << endl;
}
