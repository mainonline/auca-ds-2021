#include <bits/stdc++.h>

using namespace std;

int main()
{
    string keys = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";

    int ml = keys.length();

    string str;

    while (getline(cin, str, '\n'))
    {
        int nl = str.length();

        for (int i = 0; i < nl; i++)
        {
            str[i] = tolower(str[i]);
            for (int k = 0; k < ml; k++)
            {
                if(str[i] == keys[k])
                {
                    str[i] = keys[k - 2];
                }
            }
        }
        cout << str << endl;
    }
}
