#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2,count=0,sun=0,slav=0,s1,s2,sl1,sl2;
        cin >> a1 >> a2 >> b1 >> b2;
        int s[4][4] = {{a1, a2, b1, b2},{a1, a2, b2, b1},{a2, a1, b1, b2},{a2, a1, b2, b1}};
        for (int i = 0; i < 4; ++i)
        {
            sun=0;
            slav=0;
             s1=s[i][0];
             s2=s[i][1];
             sl1 = s[i][2];
             sl2 = s[i][3];
            if (s1 > sl1)
                sun++;
            else if (s1 < sl1)
                slav++;
            if (s2 > sl2)
                sun++;
            else if (s2 < sl2)
                slav++;
            if (sun > slav)
                count++;
        }
        cout<<count<<endl;
    }
}
