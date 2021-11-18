#include <iostream>

using namespace std;

int main()
{
    int a,b;
    while (cin >> a >> b && a != -1 && b != -1)
    {
        if (a > b)
        {
            swap(a,b);
            // cout << "a = " << a << " b = " << b << endl;
        }

        int f = b - a;
        // cout << f << endl;
        int s = a + 100 - b;
        // cout << s << endl;

        cout << min(f,s) << endl;
    }
    
}