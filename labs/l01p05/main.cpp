#include <iostream>
#include <utility>

using namespace std;

void badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void goodSwap01(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void goodSwap02(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

template <typename T>
void auSwap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;
    cout << "1st int: ";
    cin >> a;
    cout << "1st int: ";
    cin >> b;

    cout << "std:swap:" << endl;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;

    cout << "badSwap:" << endl;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    badSwap(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;

    cout << "goodSwap01:" << endl;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    goodSwap01(&a, &b);
    cout << "After swap a = " << a << ", b = " << b << endl;

    cout << "goodSwap02:" << endl;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    goodSwap02(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;

    cout << "general swap for doubles:" << endl;
    double d1 = 2.3434;
    double d2 = 34.333;
    cout << "Before swap a = " << d1 << ", b = " << d2 << endl;
    auSwap(d1, d2);
    cout << "After swap a = " << d1 << ", b = " << d2 << endl;

    cout << "general swap for strings:" << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "Before swap a = " << s1 << ", b = " << s2 << endl;
    auSwap(s1, s2);
    cout << "After swap a = " << s1 << ", b = " << s2 << endl;
}