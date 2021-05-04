#include <iostream>
using namespace std;

void myFunction(string country = "Kenya") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction();
    myFunction("India");

    return 0;
}