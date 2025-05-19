#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,n,k,x,s=0,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        a=(k*(k+1))/2;
        b=(n*(n+1))/2;
        b=b-((n-k)*(n-k+1))/2;
        if(b>=x  && x>=a)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
