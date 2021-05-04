#include <iostream>
using namespace std;

int main() {
    // A pointer however, is a variable that stores the memory address as its value.

    string food = "Pilau";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // output
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    //Output the memory address of food with the pointer
    cout << ptr << "\n";
    
    return 0;
}