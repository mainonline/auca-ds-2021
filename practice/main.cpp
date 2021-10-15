#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    a[1] = 12;

    cout << a[1] << endl;
}
