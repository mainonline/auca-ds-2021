// 12554 - A Special "Happy Birthday" not yet

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> names;
    string w;
    vector<string> words = {
                         "Happy",
                         "birthday",
                         "to",
                         "you",
                         "Happy",
                         "birthday",
                         "to",
                         "you",
                         "Happy",
                         "birthday",
                         "to",
                         "Rujia",
                         "Happy",
                         "birthday",
                         "to",
                         "you" 
                        };

    int n;
    cin >> n;

    for (int k = 0; k < n; k++)
    {
        cin >> w;
        names.push_back(w);
    }

    for (int i = 0, j = 0; i < words.size(); i++, j++)
    {
        if (j == n)
        {
            j = 0;
        }
        cout << names[j] << ": " << words[i] << endl;
    }
}

