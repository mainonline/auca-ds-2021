#include <iostream>
#include <utility>

using namespace std;

void badSwap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

void goodSwap01(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void goodSwap02(int &x, int &y)
{
    int t = x;
    x = y;
    y = x;
}

template <typename T>
void auSwap(T &x, T &y)
{
    T t = x;
    x = y;
    y = t;
}

int main()
{
    auto u = 2;

    cout << "1st int: ";
    int a;
    cin >> a;

    cout << "2nd int: ";
    int b;
    cin >> b;

    cout << "std::swap:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "std::badSwap:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    badSwap(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "std::goodSwap:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    goodSwap01(&a, &b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "std::goodSwap:\n";
    cout << "Before swap a = " << a << ", b = " << b << "\n";
    goodSwap02(a, b);
    cout << "After swap a = " << a << ", b = " << b << "\n";

    cout << "general swap for doubles:\n";
    double d1 = 2.2222;
    double d2 = 3.3333;
    cout << "Before swap d1 = " << d1 << ", d2 = " << d2 << "\n";
    auSwap(d1, d2);
    cout << "After swap d2 = " << d1 << ", d2 = " << d2 << "\n";

    cout << "general swap for strings:\n";
    string s1 = "integer";
    string s2 = "double";
    cout << "Before swap s1 = " << s1 << ", s2 = " << s2 << "\n";
    auSwap(s1, s2);
    cout << "After swap s2 = " << s1 << ", s2 = " << s2 << "\n";
}