#include "Product.h"

Product::Product()
{
    section = "undefined";
}

Product::Product(string name, string section) : Goods(name)
{
    this->section = section;
}

string Product::getSection() const
{
    return section;
}

void Product::setSection(string section)
{
    this->section = section;
}

void Product::show() const
{
    Goods::show();
    cout << "Section: " << section << endl;

}
