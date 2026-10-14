#include "Radio.h"

Radio::Radio()
{
    purpose = "undefined";
}

Radio::Radio(string name, string purpose) : Goods(name)
{
    this->purpose = purpose;
}

string Radio::getPurpose() const
{
    return purpose;
}

void Radio::setPurpose(string purpose)
{
    this->purpose = purpose;
}

void Radio::show() const
{
    Goods::show();
    cout << "Purpose: " << purpose << endl;
}
