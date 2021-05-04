#include <iostream>
using namespace std;

int main() {
    string fname = "John";
    string mname = "Doe";
    string lname = " Lenon";
    string txt = "TRXCTYVBYUNMSDDDFGVA";

    string full_name = fname + " " + mname;
    cout << full_name << "\n";

    // using append() method for the last name
    cout << full_name.append(lname) << "\n";

    // check string length/size
    cout << "The length of the txt string is: " << txt.length() << "\n";

    // access value in a string
    cout << fname[2] << "\n";

    // set new string value[2]- NOTE use single quatation '' not double
    fname[2] = 'n';
    cout << fname << "\n";

    return 0;
}