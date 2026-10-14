#include "Dairy.h"

Dairy::Dairy()
{
    string type = "undefined";
    string date = "undefined";
}

Dairy::Dairy(string name, string section, string type, string date) : Product(name, section)
{
    this->type = type;
    this->date = date;
}

string Dairy::getType() const
{
    return type;
}

void Dairy::setType(string type)
{
    this->type = type;
}

string Dairy::getDate() const
{
    return date;
}

void Dairy::setDate(string date)
{
    this->date = date;
}

void Dairy::show() const
{
    Product::show();
    cout << "Type: " << type << endl
        << "Date: " << date << endl;

}
