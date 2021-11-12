// 11547 - Automatic Answer

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int e = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498);
        e /= 10;
        int r = e % 10;
        cout << abs(r) << endl;
    }
}