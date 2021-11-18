// 102 - Ecological Bin Packing
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b1, g1, c1, b2, g2, c2, b3, g3, c3;

    while (cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3)
    {

        vector<string> s = {"BCG ", "BGC ", "CBG ", "CGB ", "GBC ", "GCB "};
        vector<int> v = {
            (b2 + b3) + (c1 + c3) + (g1 + g2),
            (b2 + b3) + (g2 + g3) + (c1 + c2),
            (c2 + c3) + (b1 + b3) + (g1 + g2),
            (c2 + c3) + (g1 + g3) + (b1 + b2),
            (g2 + g3) + (b1 + b3) + (c1 + c2),
            (g2 + g3) + (c1 + c3) + (b1 + b2)
        };
        int m = v[0];
        string t = s[0];

        for (int i = 0, k = 0;  i < v.size(); i++, k++)
        {

            m = min(m,v[i]);
            t = s[k];
            
        }

        cout << t << m << endl;
    }
}









// #include <bits/stdc++.h>

// using namespace std;


// int main()
// {
//     long long a,b,c,d,e,f,g,h,i,s,t[7],BGC,BCG,CBG,CGB,GCB,GBC;
//     while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i)
//     {

//         t[0]=BGC=d+g+b+h+c+f;
//         t[1]=BCG=d+g+c+i+e+b;
//         t[2]=CBG=f+i+a+g+e+b;
//         t[3]=CGB=f+i+b+h+a+d;
//         t[4]=GCB=e+h+c+i+a+d;
//         t[5]=GBC=e+h+a+g+c+f;
  
//         s=pow(2,31);
//         for(int i=0; i<6; i++)
//         {
//             s=min(s,t[i]);
//         }

//         if(s==BCG)
//         {
//             cout <<"BCG "<<s<< endl;
//         }
//         else if(s==BGC)
//         {
//             cout <<"BGC "<<s<< endl;
//         }

//         else if(s==CBG)
//         {
//             cout <<"CBG "<<s<< endl;
//         }
//         else if(s==CGB)
//         {
//             cout <<"CGB "<<s<< endl;
//         }
//         else if(s==GBC)
//         {
//             cout <<"GBC "<<s<< endl;
//         }
//         else if(s==GCB)
//         {
//             cout <<"GCB "<<s<< endl;
//         }
//     }
//     return 0;
// }