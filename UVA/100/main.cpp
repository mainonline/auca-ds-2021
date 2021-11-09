// 100 - 3n + 1

#include <iostream>

using namespace std;

int cycleLength(int a, int b)
{
    int maxLength = 0;
    int cLength;

    if (a > b)
    {
        swap(a, b);
    
    }
    for (int i = a; i <= b; i++)
    {
        int j = i;
        cLength = 1;
        while (j != 1)
        {
            
            if (j % 2 != 0)
            {
                j = j * 3 + 1;
            }
            else
            {
                j = j / 2;
            }
            cLength++;
        }

        if (maxLength < cLength)
        {
            maxLength = cLength;
        }
    }
    return maxLength;
}

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        int r = cycleLength(i, j);
        cout << i << " " << j << " " << r << endl;
    }
}

// int aligo(int a)
// {
//     int counter = 1;
//     while (a != 1)
//     {

//         if (a % 2 != 0)
//         {
//             a = a * 3 + 1;
//         }
//         else
//         {
//             a = a / 2;
//         }
//         counter++;
//     }
//     return counter;
// }

// int solito(int a, int b)
// {
//     int c = 0;
//     int max = 0;
//     while (a <= b)
//     {
//         c = aligo(a);
//         if (max < c)
//         {
//             max = c;
//         }
//         a++;
//     }

//     return max;
// }

// int main()
// {
//     int i, j;
//     while (cin >> i >> j)
//     {
//         int r = solito(i, j);
//         cout << i << " " << j << " " << r << endl;
//     }
// }
