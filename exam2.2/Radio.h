#pragma once
#include "Goods.h"
class Radio :
    public Goods
{
    string purpose;
public:
    Radio();
    Radio(string name,string purpose);

    string getPurpose()const;
    void setPurpose(string purpose);

    void show()const;

};

