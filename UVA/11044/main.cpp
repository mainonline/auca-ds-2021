// 11044 - Searching for Nessy

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r, c;
        cin >> r >> c;
        cout << (r / 3) * (c / 3) << endl; 
    }
}