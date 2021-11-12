#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int e,d,t,r = 0;
        cin >> e;
        int a[e];

        for (int i = 0; i < e; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < e; j++)
        {
            for (int k = j + 1; k < e; k++)
            {
                if (a[j] > a[k])
                {
                    t = a[j];
                    a[j] = a[k];
                    a[k] = t;
                }
            }
        }

        for (int l = 0; l < e - 1; l++)
        {
            d = abs(a[l] - a[l + 1]);
            r = r + d;
        }

        cout << r*2 << endl;
    }
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     while (n--)
//     {
//         int s, d, t, r = 0;
//         cin >> s;
//         vector<int> a;

//         for (int i = 0; i < s; i++)
//         {
//             cin >> t;
//             a.push_back(t);
//         }

//         sort(a.begin(), a.end());

//         for (int j = 0; j < a.size() - 1; j++)
//         {
//             d = abs(a[j] - a[j + 1]);
//             r = r + d;
//             cout << d << " ... ";
//         }

//         cout << r * 2 << endl;
//     }
// }