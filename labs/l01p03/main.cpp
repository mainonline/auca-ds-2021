#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << setfill('.') << fixed;
    for (string name; cin >> name;)
    {
        double sum = 0;
        int nGrades = 0;

        for (int grade; cin >> grade;)
        {
            sum += grade;
            nGrades++;
        }

        if (nGrades != 0)
        {
            cout << left << setw(30) << name << " | " << right << setw(40) << setprecision(2) << sum / nGrades << endl;
        }
        else
        {
            cout << left << setw(30) << name << " | " << right << setw(40) << "no data" << endl;
        }
        cin.clear();
    }
}