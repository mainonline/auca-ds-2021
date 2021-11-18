//12015 Google is feeling lucky

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int k = 1; k <= T; k++)
    {
        vector<string> path;
        vector<int> number;
        int n, best = 0;
        string s;

        for (int i = 0; i < 10; i++)
        {
            cin >> s >> n;
            path.push_back(s);
            number.push_back(n);
            best = max(number[i], best);
        }

        cout << "Case #" << k << ":" << endl;
        for (int j = 0; j < 10; j++)
        {
            if (number[j] == best)
            {
                cout << path[j] << endl;
            }
        }
    }
}