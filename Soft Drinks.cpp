#include<bits/stdc++.h>
using namespace std;
typedef long long i;
int main(void)
{
    i n,k,l,c,d,p,nl,np,td,ts,lt,s;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    td=k*l;
    td=td/nl;
    ts=c*d;
    s=p/np;
    cout<<min(td,min(ts,s))/n;
}
