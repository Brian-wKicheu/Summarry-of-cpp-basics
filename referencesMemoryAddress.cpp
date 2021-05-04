#include <iostream>
using namespace std;

int main() {
    // '&' operator was used to create a reference variable. But it can also be used to get the memory address 
    // of a variable; which is the location of where the variable is stored on the computer.
    string food = "Wali";
    cout << &food << "\n"; 
    // Note: The memory address is in hexadecimal form (0x..)

    return 0;
}