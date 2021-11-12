#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int URL_NUMBER = 10;

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i)
    {
        vector<string> urls;
        int maxRelevance = INT_MIN;

        string url;
        int relevance;
        for (int j = 0; j < URL_NUMBER; ++j)
        {
            cin >> url;
            cin >> relevance;

            if (relevance > maxRelevance)
            {
                maxRelevance = relevance;
                urls.clear();
                urls.push_back(url);
            }
            else if (relevance == maxRelevance)
            {
                urls.push_back(url);
            }
        }

        cout << i << endl;
        for (int j = 0; j < urls.size(); ++j)
        {
            cout << urls[j].c_str() << endl;
        }
    }
}