#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);

    int n;
    int a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        if ((a > b && a < c) || (a < b && a > c))
        {
            cout << "Case " << i << ": " << a << endl;
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            cout << "Case " << i << ": " << b << endl;
        }
        else
        {
            cout << "Case " << i << ": " << c << endl;
        }
    }
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, count = 0;
//     cin >> n;
//     while (n--)
//     {
//         int a,b,c,r;
//         cin >> a >> b >> c;
        
//         if (a >= b && a <= c || a >= c && a <= b)
//         {
//             r = a;            
//         }
//         else if (b >= a && b <= c || b >= c && b <= a)
//         {
//             r = b;
//         }
//         else
//         {
//             r = c;
//         }
//         count++;
//         cout << "Case " << count << ": " << r << endl;
//     }
// }
