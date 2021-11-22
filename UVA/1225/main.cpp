
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    cin >> T;


    for (int t = 0; t < T; t++)
    {
        cin >> n;
        vector<int> c(10);
        for (int i = 1; i <= n; i++)
        {
            int temp = i;
            while (temp != 0)
            {
                c[temp % 10]++;
                temp /= 10;
            }
        }

        for (int k = 0; k <= 9; k++)
        {
            cout << c[k];
            if (k < 9)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}