#pragma once
#include <string>
#include "Radio.h" 

using namespace std;

class Transistor : public Radio {
private:
    string type;   
    int number;    

public:
    Transistor();
    Transistor(string name, string purpose, string type, int number);

    string getType() const;
    void setType(string type);

    int getNumber() const;
    void setNumber(int number);

    void show() const;
};