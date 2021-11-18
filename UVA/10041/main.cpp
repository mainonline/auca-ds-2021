//10041 - Vito's Family

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<int> V;
        int rel;
        cin >> rel;

        for (int i = 0; i < rel; i++)
        {
            int num;
            cin >> num;
            V.push_back(num);
        }

        sort(V.begin(), V.end());
        int med = V[rel / 2];

        // cout << "-----------------" << endl;
        // cout << "V[len / 2] = " << V[rel / 2] << endl;
        // cout << "-----------------" << endl;

        int ans = 0;

        for (int j = 0; j < rel; j++)
        {
            ans += abs(med - V[j]);
        }

        cout << ans << endl;
    }
}