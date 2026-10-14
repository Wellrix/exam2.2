#pragma once
#include <iostream>
#include<string>
using namespace std;

class Goods
{
protected:

	string name;
public:
	Goods();
	Goods(string name);

	string getName() const;
	void setName(string name);

	void show()const;

};

