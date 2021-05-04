#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // outputs all elements in the cars array
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    // outputs the index of each element together with its value
    for(int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << "\n";
    }

    return 0;
}