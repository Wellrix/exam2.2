#include "Goods.h"

Goods::Goods()
{
	name = "undefined";
}

Goods::Goods(string name)
{
	this->name = name;
}

string Goods::getName() const
{
	return name;
}

void Goods::setName(string name)
{
	this->name = name;

}

void Goods::show() const
{
	cout << "Name: " << name << endl;
}
