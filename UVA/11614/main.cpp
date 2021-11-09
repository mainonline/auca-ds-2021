// 11614 - Etruscan Warriors Never Play Chess

#include <iostream>
#include <math.h>

    using namespace std;

int main()
{
    int n;
    cin >> n;
    long long w;
    while (n--)
    {
        cin >> w;
        int row = (sqrt(1 + 8 * w) - 1) / 2;
        cout << row << endl;
    }
}