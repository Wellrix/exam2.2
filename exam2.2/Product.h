#pragma once
#include "Goods.h"
class Product :
    public Goods
{

    string section;

public:
    Product();
    Product(string name,string section);

    string getSection()const;

    void setSection(string section);

    void show()const;

};

