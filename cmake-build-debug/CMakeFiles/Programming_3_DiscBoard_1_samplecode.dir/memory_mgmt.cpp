#include<iostream>

int main() {
    using namespace std;
    int a, b, c;

    cout << "Enter first integer for variable \"a\": " << endl;
    cin >> a;
    cout << "Enter second integer for variable \"b\": " << endl;
    cin >> b;
    cout << "Enter third integer for variable \"c\": " << endl;
    cin >> c;

    int* pointerA = new int(a);
    int* pointerB = new int(b);
    int* pointerC = new int(c);

    cout << "Value of variable a: " << a << endl;
    cout << "Value of variable b: " << b << endl;
    cout << "Value of variable c: " << c << endl;

    cout << "Address stored in pointerA: " << pointerA << endl;
    cout << "Address stored in pointerB: " << pointerB << endl;
    cout << "Address stored in pointerC: " << pointerC << endl;

    cout << "Value that pointerA points to: " << *pointerA << endl;
    cout << "Value that pointerB points to: " << *pointerB << endl;
    cout << "Value that pointerC points to: " << *pointerC << endl;

    delete pointerA;
    delete pointerB;
    delete pointerC;
    pointerA = nullptr;
    pointerB = nullptr;
    pointerC = nullptr;

    return 0;
}
