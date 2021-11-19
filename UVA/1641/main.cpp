// 1641 - ASCII Area

#include <bits/stdc++.h>
using namespace std;

const int maxn = 120;

int n, m;
char g[maxn][maxn];

void solve()
{
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        bool in = false;
        for (int j = 0; j < m; ++j)
        {
            if (g[i][j] == '/' || g[i][j] == '\\')
            {
                ++ans;
                in = true;
            }
            else if (in)
            {
                ans += 2;
            }
        }
    }
    cout << ans / 2 << endl;
}

int main()
{
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> g[i];
        }
        solve();
    }
}