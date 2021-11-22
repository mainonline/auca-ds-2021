// // #include <bits/stdc++.h>

// // template <typename C>
// // int sz(const C &c) { return static_cast<int>(c.size()); }

// // using namespace std;

// // int summingDigits(int n)
// // {
// //     int t = n;
// //     while ((t / 10) > 0)
// //     {
// //         int s = 0;
// //         while (n > 0)
// //         {
// //             s += n % 10;
// //             n /= 10;
// //         }
// //         t = s;
// //         n = t;
// //     }
// //     return t;
// // }

// // int main()
// // {
// //     int n;

// //     while (cin >> n && n != 0)
// //     {
// //         int r = summingDigits(n);
// //         cout << r << endl;
// //     }
// // }


#include <bits/stdc++.h>

using namespace std;

int computeDigits(int n)
{
    int t = n;

    while ((t / 10) > 0)
    {
        int s = 0;
        while (n > 0)
        {
            s += t % 10;
            n /= 10;
        }
        t = s;
        n = t;
        
    }
    return t;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int r = computeDigits(n);
        cout << r << endl;
    }
    
}
