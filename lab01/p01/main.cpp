#include <iostream>

using namespace std;

int main()
{
#ifdef AUCA_DEBUG
    cout << "Author: Zhoomart Akimov" << endl;
#endif
    cout << "Hello C++ " <<  __cplusplus << "!!!" << endl;
}