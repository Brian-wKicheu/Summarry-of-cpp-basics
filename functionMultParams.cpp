#include <iostream>
using namespace std;

void user(int age, string fname, string lname) {
    cout << "Hello! my name is " << fname << " " << lname << " and I'm " << age << " years old.\n";
}

int main() {
    user(24, "Jones", "Mbindyo");
    user(21, "Joyce", "Mutinda");
    
    return 0;
}