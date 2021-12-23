#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <tuple>

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

void p0401()
{
    vector<int> v;
    for (int n; cin >> n;)
    {
        v.push_back(n);
    }

    auto it = min_element(begin(v), end(v));

    if (it != end(v))
    {
        cout << "Index position of min element is " << it - begin(v) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void p0402()
{
    vector<int> v;
    for (int n; cin >> n;)
    {
        v.push_back(n);
    }

    auto it = auMinElement(begin(v), end(v));

    if (it != end(v))
    {
        cout << "Index position of min element is " << it - begin(v) << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void p0501()
{
    string name;
    double gpa;
    vector<Student> stud;
    while (cin >> name >> gpa)
    {
        stud.emplace_back(name, gpa);
    }

    auto itMinGpa = min_element(begin(stud), end(stud), [](const Student &s1, const Student &s2)
                                { return s1.mGpa < s2.mGpa; });

    if (itMinGpa != end(stud))
    {
        cout << "{ " << itMinGpa->mName << ", " << itMinGpa->mGpa << " }" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    auto itMinName = min_element(begin(stud), end(stud), [](const Student &s1, const Student &s2)
                                 { return s1.mName < s2.mName; });

    if (itMinName != end(stud))
    {
        cout << "{ " << itMinName->mName << ", " << itMinName->mGpa << " }" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void p0502()
{
    string name;
    double gpa;
    vector<Student> stud;
    while (cin >> name >> gpa)
    {
        stud.emplace_back(name, gpa);
    }

    auto itMinGpa = auMinElement(begin(stud), end(stud));

    if (itMinGpa != end(stud))
    {
        cout << "{ " << itMinGpa->mName << ", " << itMinGpa->mGpa << " }" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}

void p07()
{
    vector<Student> students = {
        {"D", 2.7},
        {"A", 4.0},
        {"X", 3.2},
        {"C", 4.0},
        {"K", 4.0},
        {"E", 2.0},
        {"R", 4.0},
        {"D", 2.7},
        {"A", 4.0},
        {"X", 3.2},
        {"C", 4.0},
        {"K", 4.0},
        {"E", 2.0},
        {"R", 4.0},
        {"D", 2.7},
        {"A", 4.0},
        {"X", 3.2},
        {"C", 4.0},
        {"K", 4.0},
        {"E", 2.0},
        {"R", 4.0}};

    cout << "------- Regular sort -------" << endl;

    sort(begin(students), end(students), [](const Student &s1, const Student &s2)
         { return s1.mName < s2.mName; });

    for (const auto s : students)
    {
        cout << s.mName << ", " << s.mGpa << endl;
    }

    cout << "-- sort by gpa --" << endl;

    sort(begin(students), end(students), [](const Student &s1, const Student &s2)
         { return s1.mGpa < s2.mGpa; });

    for (const auto s : students)
    {
        cout << s.mName << ", " << s.mGpa << endl;
    }

    cout << "------- Stable sort -------" << endl;

    stable_sort(begin(students), end(students), [](const Student &s1, const Student &s2)
                { return s1.mName < s2.mName; });

    for (const auto s : students)
    {
        cout << s.mName << ", " << s.mGpa << endl;
    }

    cout << "-- sort by gpa --" << endl;

    stable_sort(begin(students), end(students), [](const Student &s1, const Student &s2)
                { return s1.mGpa < s2.mGpa; });

    for (const auto s : students)
    {
        cout << s.mName << ", " << s.mGpa << endl;
    }
}

void p08()
{
    vector<pair<string, double>> students;
    string name;
    double gpa;

    while (cin >> name >> gpa)
    {
        students.emplace_back(name, gpa);
    }

    sort(begin(students), end(students));

    for (const auto s : students)
    {
        cout << s.first << ", " << s.second << endl;
    }
}

void p09()
{
    using Employee = tuple<string, int, double>;
    vector<Employee> employees;
    string name;
    int age;
    double salary;

    while (cin >> name >> age >> salary)
    {
        employees.emplace_back(name, age, salary);
    }

    sort(begin(employees), end(employees), [](const Employee &e1, const Employee &e2)
         { return get<1>(e1) < get<1>(e2); });

    for (const auto &e : employees)
    {
        cout << get<0>(e) << ", " << get<1>(e) << ", " << get<2>(e) << endl;
    }
}

void p10()
{
    vector<int> v = {0, 4, 5, 10, 12, 20, 25, 40};
    for (int n; cin >> n;)
    {
        cout << (binary_search(begin(v), end(v), n) ? "Yes" : "No") << endl;
    }
}

void p11()
{
    vector<int> v = {0, 4, 5, 10, 12, 20, 25, 40};
    for (int n; cin >> n;)
    {
        auto it = lower_bound(begin(v), end(v), n);
        if (it == end(v))
        {
            cout << "no elements equal or greater than " << n << endl;
        }
        else if (*it == n)
        {
            cout << "index of " << n << " is " << it - begin(v) << endl;
        }
        else
        {
            cout << "index of first element greater than " << n << " is " << it - begin(v) << endl;
        }
    }
}

void p12()
{
    vector<int> v = {0, 0, 4, 5, 10, 10, 10, 12, 20, 25, 25, 25, 25, 40};

    for (int n; cin >> n;)
    {
        auto p = equal_range(begin(v), end(v), n);
        cout << "number of occurences of " << n << " is " << p.second - p.first << endl;
    }
}

int main()
{
    // p0101();
    // p0102();
    // p0201();
    // p0202();
    // p06();
    // p03();
    // p0401();
    // p0402();
    // p0501();
    p0502();
    // p07();
    // p08();
    // p09();
    // p10();
    // p11();
    // p12();
}