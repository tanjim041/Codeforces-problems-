#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int  main(void)
{
    l n,c;
    cin>>n;
    while(n!=0)
    {
        c=0;
        if(n>=100)
        {
            c+=n/100;
         n%=100;
        }
        if(n>=20)
        {
             c+=n/20;
         n%=20;
        }
         if(n>=10)
        {
             c+=n/10;
         n%=10;
        }
        if(n>=5)
        {
             c+=n/5;
         n%=5;
        }
        if(n>=1)
        {
             c+=n;
         n=0;
        }
    }
    cout<<c;
}
