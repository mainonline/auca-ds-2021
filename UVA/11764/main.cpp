#include <iostream>

using namespace std;

int main()
{
    int n, o = 0;
    cin >> n;

    while (n--)
    {
        int e, u = 0, d = 0;
        cin >> e;
        int a[e];

        for (int i = 0; i < e; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < e - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                u++;
            }
            else if (a[j] > a[j + 1])
            {
                d++;
            }
        }
        o++;
        cout << "Case " << o << ": " << u << " " << d << endl;
    }
}