#include<iostream>
#include<string>

using namespace std;

int main() {
    string firstName; ///< First name of person
    string lastName; ///< Last name of person
    string address; ///< Home address of person
    string city; ///< City or town in which the person lives
    string zipCode; ///< ZIP code of person's home address

    // Gather values of declared variables from user from prompts and user input
    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter ZIP code: ";
    getline(cin, zipCode);

    cout << "\nPerson Information:\n"
            "\nFirst Name: " << firstName <<
            "\nLast Name: " << lastName <<
            "\nAddress: " << address <<
            "\nCity: " << city <<
            "\nZIP Code: " << zipCode << endl;

    return 0;
}


