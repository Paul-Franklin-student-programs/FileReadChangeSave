#include<iostream>

using namespace std;

int main() {
    string firstName;
    string lastName;
    string address;
    string city;
    string zipCode;
    cout << "Enter first name: " << endl;
    getline(cin,firstName);
    cout << "Enter last name: " << endl;
    getline(cin, lastName);
    cout << "Enter address: " << endl;
    getline(cin, address);
    cout << "Enter city: " << endl;
    getline(cin, city);
    cout << "Enter ZIP code: " << endl;
    getline(cin, zipCode);

    cout << "Person Information: " << "\n\nFirst Name: " << firstName << "\nLast Name: " <<
        lastName << "\nAddress: " << address << "\nCity: " << city << "\nZIP Code: " <<
            zipCode << endl;
}


