// 11044 - Searching for Nessy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int n, s;
    // bool a;

    // cout << "PERFECTION OUTPUT" << endl;
    // while (cin >> n && n != 0)
    // {
    //     a = false;
    //     s = 0;
    //     for (int i = 1; i < n; i++)

    //     {
    //         if (n % i == 0)
    //         {
    //             s += i;
    //         }
    //         if (s > n)
    //         {
    //             a = true;
    //             break;
    //         }
    //     }

    //     if (n == s)
    //     {
    //         cout << setw(5) << n << "  PERFECT" << endl;
    //     }
    //     else if (a)
    //     {
    //         cout << setw(5) << n << "  ABUNDANT" << endl;
    //     }
    //     else
    //     {
    //         cout << setw(5) << n << "  DEFICIENT" << endl;
    //     }

    // }
    // cout << "END OF OUTPUT" << endl;

    vector<int> v;
    int n;
    while (cin >> n && n != 0)
    {
        v.push_back(n);
    }

    cout << "PERFECTION OUTPUT" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        
        for (int k = 1; k < v[i]; k++)
        {
            if (v[i] % k == 0)
            {
                sum += k;
            }
        }

        if (v[i] == sum)
        {
            cout << setw(5) << v[i] << "  PERFECT" << endl;
        }
        else if (v[i] > sum)
        {
            cout << setw(5) << v[i] << "  DEFICIENT" << endl;
        }
        else
        {
            cout << setw(5) << v[i] << "  ABUNDANT" << endl;
        }

    }
    cout << "END OF OUTPUT" << endl;
}