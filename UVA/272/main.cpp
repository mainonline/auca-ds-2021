#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    char ch;
    while (cin.get(ch))
    {
        if (ch == '"')
        {
            t++;
            if (t % 2 == 0)
            {
                cout << "''";
            }
            else
            {
                cout << "``";
            }
        }
        else
        {
            cout << ch;
        }
    }
}