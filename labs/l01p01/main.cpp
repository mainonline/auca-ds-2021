#include <iostream>

using namespace std;

int main()
{
#ifdef AUCA_DEBUG
    cout << "Author: Zhoomart Akimov" << endl;
#endif
    cout << "Hello, dear C++ " << __cplusplus << "!!!\n";
}