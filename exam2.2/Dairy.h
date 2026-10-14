#pragma once
#include <string>
#include "Product.h"

using namespace std;

class Dairy : public Product {
private:
    string type; 
    string date;

public:
    Dairy();
    Dairy(string name, string section, string type, string date);

    string getType() const;
    void setType(string type);

    string getDate() const;
    void setDate(string date);

    void show() const;
};