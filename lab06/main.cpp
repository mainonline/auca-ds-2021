#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

#include "../au/algol.hpp"

using namespace std;

struct IsEven
{
    bool operator()(int value) const
    {
        return (value % 2 == 0);
    }
};

void p0101()
{
    int a[] = {3, 1, 21, 43, 7, 0, 5};

    auto itA = find(begin(a), end(a), 7);

    if (itA != end(a))
    {
        cout << "Number 7 found at position " << itA - begin(a) << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    vector<int> v = {3, 1, 20, 4, 7, 0, 5};

    auto itV = find(begin(v), end(v), 5);

    if (itV != end(v))
    {
        cout << "Number 7 found at position " << itV - begin(v) << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }
}

void p0102()
{
    int a[] = {3, 1, 20, 4, 7, 0, 5};

    auto itA = auFind(begin(a), end(a), 7);

    if (itA != end(a))
    {
        cout << "Number 7 found at position " << itA - begin(a) << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    vector<int> v = {3, 1, 20, 4, 7, 0, 5};

    auto itV = auFind(begin(v), end(v), 5);

    if (itV != end(v))
    {
        cout << "Number 5 fond at position " << itV - begin(v) << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }
}

void p0201()
{
    vector<int> v = {3, 1, 21, 43, 70, 0, 5};

    auto it = find_if(begin(v), end(v), IsEven());

    if (it != end(v))
    {
        cout << "Position of first even number is " << it - begin(v) << endl;
        cout << "The value equal to " << *it << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }
}

int main()
{
    // p0101();
    // p0102();
    p0201();
}