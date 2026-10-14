#include <iostream>
#include "Goods.h"
#include "Radio.h"
#include "Transistor.h"
#include "Product.h"
#include "Dairy.h"

using namespace std;

int main() {
    cout << "=== 1. Base Goods ===" << endl;
    Goods item1("Universal Item");
    item1.show();
    cout << endl;

    cout << "=== 2. Radio Goods ===" << endl;
    Radio item2("Resistor", "Resistance control");
    item2.show();
    cout << endl;

    cout << "=== 3. Transistor ===" << endl;
    Transistor item3("Bipolar Transistor", "Signal amplification", "NPN", 104);
    item3.show();
    cout << endl;

    cout << "=== 4. Product ===" << endl;
    Product item4("Bread", "Grocery section");
    item4.show();
    cout << endl;

    cout << "=== 5. Dairy Product ===" << endl;
    Dairy item5("Milk 2.5%", "Dairy section", "Pasteurized", "14.10.2026");
    item5.show();
    cout << endl;

    return 0;
}