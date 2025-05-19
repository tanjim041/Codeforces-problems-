#include<bits/stdc++.h>
typedef long long l;
using namespace std;

int main(void)
{
    l i;
    string a,b,c;
    cin>>a>>b;
    c.resize(a.size());
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1' )
            c[i]='1';
           if(a[i]=='0' && b[i]=='0'  )
            c[i]='0';
              if(a[i]=='1' && b[i]=='1'  )
                c[i]='0';
    }
    cout<<c;
}
