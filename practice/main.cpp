#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    while (cin >> i && i != 0)
    {
        cout << fmod(i, 3) << endl;
    }
}