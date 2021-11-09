// #include <iostream>
// #include <vector>

// using namespace std;

// bool isInc(vector<int> v)
// {
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] > v[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
//     cout << endl;
// }

// bool isDec(vector<int> v)
// {
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] < v[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
//     cout << endl;
// }

// int main()
// {
//     int n, in;
//     cin >> n;
//     vector<int> v;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             cin >> in;
//             v.push_back(in);
//         }
//         if (isInc(v) || isDec(v))
//         {
//             cout << "ordered\n";
//         }
//         else
//         {
//             cout << "unordered\n";
//         }
//     }
// }

// #include <bits/stdc++.h>
// #define pp push_back
// using namespace std;
// main()
// {
//     int n, i, p, j, k, l = 0;
//     vector<int> awan, awan1;
//     while (cin >> n)
//     {
//         l = 0;
//         while (n--)
//         {
//             for (i = 1; i <= 10; i++)
//             {
//                 cin >> p;
//                 awan.pp(p);
//                 awan1.pp(p);
//             }
//             if (l == 0)
//                 cout << "Lumberjacks:" << endl;
//             l = 1;
//             sort(awan1.begin(), awan1.end());
//             for (j = 0; j < 10; j++)
//             {
//                 if (awan[j] != awan1[j])
//                     break;
//             }
//             if (j == 10)
//                 cout << "Ordered" << endl;
//             else
//             {
//                 reverse(awan1.begin(), awan1.end());

//                 for (k = 0; k < 10; k++)
//                 {
//                     if (awan[k] != awan1[k])
//                         break;
//                 }
//                 if (k == 10)
//                     cout << "Ordered" << endl;
//                 else
//                     cout << "Unordered" << endl;
//             }
//             awan1.erase(awan1.begin(), awan1.end());
//             awan.erase(awan.begin(), awan.end());
//         }
//     }
// }

// #include <iostream>
// #include <cstdio>
// #include <vector>
// using namespace std;
// int main()
// {
//     int a[100001], t, n, c;
//     cout << "Lumberjacks:" << endl;
//     cin >> t;
//     while (t--)
//     {
//         for (int i = 0; i < 10; i++)
//             cin >> a[i];
//         if (a[0] > a[1])
//         {
//             c = 1;
//             for (int i = 0; i < 9; i++)
//                 if (a[i] > a[i + 1])
//                 {
//                     c++;
//                 }
//         }
//         else if (a[0] < a[1])
//         {
//             c = 1;
//             for (int i = 0; i < 9; i++)
//                 if (a[i] < a[i + 1])
//                 {
//                     c++;
//                 }
//         }
//         if (c == 10)
//             cout << "Ordered" << endl;
//         else
//             cout << "Unordered" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

// bool isInc(vector<int> v)
// {
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] > v[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
//     cout << endl;
// }

// bool isDec(vector<int> v)
// {
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] < v[i + 1])
//         {
//             return false;
//         }
//     }
//     return true;
//     cout << endl;
// }

int main()
{
    int n, in, c = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> in;
            v.push_back(in);
        }
        // if (isInc(v) || isDec(v))
        // {
        //     cout << "ordered\n";
        // }
        // else
        // {
        //     cout << "unordered\n";
        // }
        for (int k = 0; k < v.size() - 1; k++)
        {
            if (v[k] < v[k + 1])
            {
                c++;
            }
            else if (v[k] > v[k + 1])
            {
                c++;
            }
        }
    }

    if (c == 10)
    {
        cout << "orderred\n";
    }
    else
    {
        cout << "unordered\n";
    }
}