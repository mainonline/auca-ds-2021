#include <iostream>
#include "../../au/algol.hpp"
#include "VecInt.hpp"
#include <algorithm>
using namespace std;

void printVecInt(const VecInt &v)
{
    // for (int e : v)
    // {
    //     cout << e << " ";
    // }
    // cout << "\n";
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    VecInt v;
    for (int x; cin >> x;)
    {
        v.pushBack(x);
    }

    VecInt w;
    w = v;
    reverse(w.begin(), w.end());

    cout << (w == v ? "palindrome" : "not a palindrome") << endl;
}