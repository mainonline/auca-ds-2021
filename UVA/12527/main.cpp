// #include <bits/stdc++.h>

// using namespace std;

// bool countMe(int n)
// {
//     vector<int> temp;
//     int count = 0;
//     bool isR = false;
//         while (n > 0)
//         {
//             temp.push_back(n % 10);
//             n /= 10;
//         }
//         reverse(temp.begin(), temp.end());

//         // for (int k = 0; k < temp.size(); k++)
//         // {
            
//         //     if (temp[k] == temp[k+1])
//         //     {
//         //         count++;
//         //     }

//         //     cout << temp[k] << " ";
//         // }
//         for (int k = 0; k < temp.size() - 1; k++)
//         {
            
//             for (int z = k + 1; z < temp.size(); z++)
//             {
//                 if (temp[k] == temp[z])
//                 {
//                     count++;
//                 }
//             }

//             cout << temp[k] << " ";
//         }
//         cout << endl;

//     if (count > 0)
//     {
//         isR = true;
//     }
//     else
//     {
//         isR = false;
//     }

//     return isR;
// }

// int main()
// {
//     int a, b, c;
//     vector<int> v;

//     while (cin >> a >> b)
//     {
//         c = 0;
//         for (int i = a; i <= b; i++)
//         {
//             v.push_back(i);
//             if (!countMe(i))
//             {
//                 c++;
//                 cout << "counter =  " << c << endl;
//             }
//         }
//         cout << setw(55) << c << endl;
//     }
// }





#include <bits/stdc++.h>

using namespace std;

bool countMe(int n)
{
    vector<int> temp;
    int count = 0;
    bool isR = false;
    while (n > 0)
    {
        temp.push_back(n % 10);
        n /= 10;
    }
    reverse(temp.begin(), temp.end());

    for (int k = 0; k < temp.size() - 1; k++)
    {
        for (int z = k + 1; z < temp.size(); z++)
        {
            if (temp[k] == temp[z])
            {
                count++;
            }
        }
    }

    if (count > 0)
    {
        isR = true;
    }
    else
    {
        isR = false;
    }

    return isR;
}

int main()
{
    int a, b, c;
    vector<int> v;

    while (cin >> a >> b)
    {
        c = 0;
        for (int i = a; i <= b; i++)
        {
            v.push_back(i);
            if (!countMe(i))
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
