#include <iostream>
using namespace std;

int main() {
    // food var
    string food = "Pilau";
    // reference for food
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    return 0;
}