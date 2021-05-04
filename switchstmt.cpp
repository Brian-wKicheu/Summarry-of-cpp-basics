#include <iostream>
using namespace std;

int main() {

    int day = 5;

    switch(day) {
        case 1:
            cout << "Monday! \n";
            break;

        case 3:
            cout << "Wednesday! \n";
            break;
        
        default:
            cout << "Looking forward to the Weekend. \n";
    }

    return 0;
}