#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n, m, count = 1;

    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int nums;
            cin >> nums;
            v.push_back(nums);
        }

        sort(v.begin(), v.end());
        cout << "Case " << count++ << ":" << endl;
        cin >> m;

        while (m--)
        {
            int x;
            cin >> x;

            int a = v[0] + v[1];
            int d = abs(a - x);

            for (int j = 0; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((v[j] + v[k] - x) < d)
                    {
                        a = v[j] + v[k];
                        d = abs(v[j] + v[k] - x);
                    }
                    else if((v[j] + v[k] - x) > d)
                    {
                        break;
                    }
                }
            }
            cout << "Closest sum to " << x << " is " << a << "." << endl; 
        }
    } 
}

// #include <bits/stdc++.h>

// using namespace std;
 
// int main() {
//     vector<int> a;
//     int n, m, x, Case = 1;
//     while (cin >> n){
//         if (n == 0) break;
         
//         int t;
//         for (int i = 0; i < n; i++){
//             cin >> t;
//             a.push_back(t);
//         }
//         sort(a.begin(), a.end());
         
//         cout << "Case " << Case++ << ":\n";
//         cin >> m;
//         while (m--){
//             cin >> x;
//             cout << "cin << x ==== " << x << endl;
//             int ans = a[0] + a[1];
//             cout << "ans = a[0] + a[1] ==== " << ans << endl;
//             cout << endl;
//             cout << endl;


//             int delta = abs(ans - x);
//             cout << "delta = (ans - x) ====" << delta << endl;

//             for (int i = 0; i < n; i++){
//                 cout << "FOR LOOP : i ==== " << i << endl;

//                 for (int j = i+1; j < n; j++){
//                     cout << "FOR LOOP : j ==== " << j << endl;
//                     cout << "a[i] ==== " << a[i] << endl;
//                     cout << "a[j] ==== " << a[j] << endl;

//                     if (abs(a[i] + a[j] - x) < delta){
//                         ans = a[i] + a[j];
//                         delta = abs(a[i] + a[j] - x);
//                         cout << "FIRST IF STATEMENT DONE!!!  " << abs(a[i] + a[j] - x) << " < " << delta << endl;
//                         cout << "answer ==== " << ans << endl;
//                     } else if (a[i] + a[j] - x > delta){
//                         cout << "SECOND IF STATEMENT DONE!!!  " << abs(a[i] + a[j] - x) << " > " << delta << endl;
//                         break;
//                     }
//                 }
//             }
//             cout << "Closest sum to " << x << " is " << ans << ".\n";
//         }
//     }
//     return 0;
// }