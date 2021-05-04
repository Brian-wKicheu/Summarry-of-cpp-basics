#include <iostream>
#include <string>
using namespace std;

int main() {
    /* You don't have to specify the size of the array. But if you don't, 
    it will only be as big as the elements that are inserted into it:*/

    string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"}; // the size or arr is 5

    for(int i = 0; i < 5; i++) {
        cout << i << ": " << cars[i] << "\n";
    }

    string colors[4] = {"red", "blue"};
    colors[2] = "yellow";
    colors[3] = "pink";

    for(int i = 0; i < 4; i++) {
        cout << i << ": " << colors[i] << "\n";
    }

    // Omit Elements on Declaration
    string names[3];
    
    names[0] = "Jones";
    names[1] = "Kilonzo";
    names[2] = "Mbindyo";

    for (int i = 0; i < 3; i++) {
        cout << i << " : " << names[i] << ".\n";
    }

    return 0;
}