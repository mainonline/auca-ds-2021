#include <iostream>
#include <iterator>
#include <vector>
#include <string>
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
    // vector<int> v = {3, 1, 21, 43, 70, 0, 5};

    //// IsEven functor;
    //// auto it = find_if(begin(v), end(v), functor);
    // auto it = find_if(begin(v), end(v), IsEven());

    // if (it != end(v))
    // {
    //     cout << "Position of first even number is " << it - begin(v) << endl;
    //     cout << "The value equal to " << *it << endl;
    // }
    // else
    // {
    //     cout << "Not found!" << endl;
    // }
    vector<int> v = {3, 1, 21, 43, 70, 0, 5};

    auto it = find_if(begin(v), end(v), [](int value)
                      { return (value % 2 == 0); });

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

void p0202()
{
    vector<int> v = {3, 1, 21, 43, 70, 0, 5};

    auto itE = auFindIf(begin(v), end(v), IsEven());

    if (itE != end(v))
    {
        cout << "Position of first even number is " << itE - begin(v) << endl;
        cout << "The value equal to " << *itE << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }

    auto it = auFindIf(begin(v), end(v), [](int value)
                       { return (value % 2 == 0); });

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

struct Student
{
    string mName;
    double mGpa;
    Student(const string &name, double gpa)
        : mName(name), mGpa(gpa)
    {
    }
};

struct ComByGpa
{
    bool operator()(const Student &s1, const Student &s2) const
    {
        return s1.mGpa < s2.mGpa;
    }
};

void p06()
{
    vector<Student> stud;
    string name;
    double gpa;
    while (cin >> name >> gpa)
    {
        // stud.push_back(Student(name,gpa));
        stud.emplace_back(name, gpa);
    }

    sort(begin(stud), end(stud), [](const Student &s1, const Student s2)
         { return s1.mName < s2.mName; });

    for (const auto &s : stud)
    {
        cout << "{" << s.mName << ", " << s.mGpa << "}" << endl;
    }

    cout << "-------------------" << endl;
    sort(begin(stud), end(stud), ComByGpa());

    for (const auto &s : stud)
    {
        cout << "{" << s.mName << ", " << s.mGpa << "}" << endl;
    }
}

struct GreaterThan
{
    int mData;
    GreaterThan(int data)
        : mData(data)
    {
    }
    bool operator()(int value) const
    {
        return value > mData;
    }
};

void p03()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> v = {3, 1, 2, 4, 7, 0, 15};

    auto it = find_if(begin(v), end(v), GreaterThan(n));

    if (it != end(v))
    {
        cout << "The index of the value: " << it - begin(v) << endl;
        cout << "The value: " << *it << endl;
    }
    else
    {
        cout << "The value greater than " << n << " not found!" << endl;
    }

    // with lambda expression
    cout << "with lambda expression" << endl;

    auto itL = find_if(begin(v), end(v), [n](int value)
                       { return value > n; });

    if (itL != end(v))
    {
        cout << "The index of the value: " << itL - begin(v) << endl;
        cout << "The value: " << *itL << endl;
    }
    else
    {
        cout << "The value greater than " << n << " not found!" << endl;
    }
}

int main()
{
    // p0101();
    // p0102();
    // p0201();
    // p0202();
    // p06();
    p03();
}