#include<iostream>

using namespace std;

int main() {
    string firstName;
    string lastName;
    string address;
    string city;
    string zipCode;

    cout << "Enter first name:";
    getline(cin,firstName);
    cout << "Enter last name:";
    getline(cin, lastName);
    cout << "Enter address:";
    getline(cin, address);
    cout << "Enter city:";
    getline(cin, city);
    cout << "Enter ZIP code:" << endl;
    getline(cin, zipCode);

    cout << "\nPerson Information: " << "\n\nFirst Name: " << firstName << "\nLast Name: " <<
        lastName << "\nAddress: " << address << "\nCity: " << city << "\nZIP Code: " <<
            zipCode << endl;
}


