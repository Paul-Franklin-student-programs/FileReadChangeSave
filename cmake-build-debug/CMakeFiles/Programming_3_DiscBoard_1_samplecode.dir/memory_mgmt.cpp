#include<iostream>
#include<string>
using namespace std;

int main() {
    int firstInt;
    int secondInt;
    int thirdInt;

    cout << "Enter first integer: " << endl;
    cin >> firstInt;
    cout << "Enter second integer: " << endl;
    cin >> secondInt;
    cout << "Enter third integer: " << endl;
    cin >> thirdInt;

    int* pointerOne = new int;
    *pointerOne = firstInt;
    int* pointerTwo = new int;
    *pointerTwo = secondInt;
    int* pointerThree = new int;
    *pointerThree = thirdInt;


}
