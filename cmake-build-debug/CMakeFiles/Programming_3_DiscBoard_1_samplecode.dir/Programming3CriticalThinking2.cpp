#include<iostream>
#include<string>

using namespace std;

/**
 * Main function to collect, manipulate, and display user input.
 */
int main() {
 //declare all string variables
 string firstString;
 string secondString;
 string concatString = firstString + secondString;
 string thirdString;
 string fourthString;
 string concatString2 = thirdString + fourthString;
 string fifthString;
 string sixthString;
 string concatString3;
 string concatAllStrings;

 //take user input to define and concatenate firstString, secondString; print concatString
 cout << "Enter first string." << endl;
 cin >> firstString;
 cout << "Enter second string." << endl;
 cin >> secondString;
 concatString = firstString + secondString;
 cout << "First concatenated string: " << concatString << endl;

 //take user input to define and concatenate thirdString, fourthString; print concatString2
 cout << "Enter third string." << endl;
 cin >> thirdString;
 cout << "Enter fourth string." << endl;
 cin >> fourthString;
 concatString2 = thirdString + fourthString;
 cout << "Second concatenated string: " << concatString2 << endl;

 //take user input to define and concatenate fifthString, sixthString; print concatString3
 cout << "Enter fifth string." << endl;
 cin >> fifthString;
 cout << "Enter sixth string." << endl;
 cin >> sixthString;
 concatString3 = fifthString + sixthString;
 cout << "Third concatenated string: " << concatString3 << endl;}

 

