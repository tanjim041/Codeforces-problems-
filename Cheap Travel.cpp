#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
    l n,m,a,b,s,c;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        {
            n*=a;
            cout<<n;
        }
        else
        {
            s=(n/m)*b;
            s+=min((n%m)*a,b);
            cout<<s;
        }
}
