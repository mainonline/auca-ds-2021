#include <iostream>

using namespace std;

int main()
{
    string name;
    int grade;

    while (cin >> name >> grade)
    {
        // for (int i = 0; i < grade; i++)
        // {

        // }
        cout << name << " = " << grade * 2;
    }
}