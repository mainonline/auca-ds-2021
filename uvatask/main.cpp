// #include <bits/stdc++.h>

// template <typename C>
// int sz(const C &c) { return static_cast<int>(c.size()); }

// using namespace std;

// int main()
// {
//     iostream::sync_with_stdio(false);

//     int n;
//     int a, b, c;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a >> b >> c;

//         if ((a > b && a < c) || (a < b && a > c))
//         {
//             cout << "Case " << i << ": " << a << endl;
//         }
//         else if ((b > a && b < c) || (b < a && b > c))
//         {
//             cout << "Case " << i << ": " << b << endl;
//         }
//         else
//         {
//             cout << "Case " << i << ": " << c << endl;
//         }
//     }
// }

#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int summingDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;
    cout << "enter some number: " << endl;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        int res = summingDigits(n);
        cout << res << endl;
    }
}