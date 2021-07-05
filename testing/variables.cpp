#include <iostream>
#include "format"

using namespace std;
int main() {
    
    int uninitializedInt;
    int initializedInt { 7 };

    cout << format("{} is a random value", uninitializedInt) << endl;
    cout << format("{} was assigned an initialValue ", initializedInt) << endl;


    cout << "Numeric limits because why not" << endl; 

    cout << "int:\n";
    cout << format("Max int value {}\n", numeric_limits<int>::max());
    cout << format("Min int value {}\n", numeric_limits<int>::min());
    cout << format("Lowest int value {}\n", numeric_limits<int>::lowest());

    cout << "double:\n";
    cout << format("Max double value {}\n", numeric_limits<double>::max());
    cout << format("Min double value {}\n", numeric_limits<double>::min());
    cout << format("Lowest double value {}\n", numeric_limits<double>::lowest());

    // zero initialization 
    // float myFloat {}; 
    int myInt {};

    // casting a float to an int 
    float myFloat { 3.14f };

    int i1 { (int)myFloat };
    int i2 { int(myFloat)};
    int i3 { static_cast<int>(myFloat) };  
}