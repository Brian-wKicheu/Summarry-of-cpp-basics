#include <iostream>
using namespace std;

int main() {
    string fullname;

    cout << "Type your 3 full names: ";
    getline(cin, fullname);
    cout << "Your name is: " << fullname << "\n";

    return 0;
}