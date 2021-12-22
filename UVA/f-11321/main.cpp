// #include <bits/stdc++.h>

// using namespace std;

// int v;

// bool ch(int a, int b)
// {
//     if (a % v != b % v)
//         return a % v < b % v;
//     if (a % 2 != 0)
//     {
//         if (b % 2 != 0)
//             return a > b;
//         return true;
//     }
//     if (b % 2 != 0)
//         return false;
//     return a < b;
// }

// int main()
// {
//     vector<int> vec;
//     int n;
//     cin >> n >> v;

//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         vec.push_back(t);
//     }

//     cout << n << " " << v << endl;

//     sort(vec.begin(), vec.begin() + n, ch);

//     for (int j = 0; j < n; j++)
//     {
//         cout << vec[j] << " " << endl;
//     }
// }

#include <bits/stdc++.h>

using namespace std;

int v;

struct IsEven
{
    bool operator()(int a, int b) const
    {
        if (a % v != b % v)
            return a % v < b % v;
        if (a % 2 != 0)
        {
            if (b % 2 != 0)
                return a > b;
            return true;
        }
        if (b % 2 != 0)
            return false;
        return a < b;
    }
};

int main()
{
    vector<int> vec;
    int n;
    cin >> n >> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        vec.push_back(t);
    }

    cout << n << " " << v << endl;

    sort(vec.begin(), vec.begin() + n, IsEven());

    for (int j = 0; j < n; j++)
    {
        cout << vec[j] << " " << endl;
    }
}
