#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    string c;
    l i,a,d;
    cin>>c;
    for(i=0;i<c.size();i++)
    {
        a=c[i]-'0';
        d=9-a;
        if(a>=d)
          c[i]=d+'0';
    }
    cout<<c;
}
