#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l n,a,b,s=0,d=0,p,e=0;
    cin>>n;
    vector<l>v(n);
    for(l i=0;i<n;i++)
        cin>>v[i];
a=0;
b=n-1;
while(a<=b)
{
    if(v[a]>v[b])
        p=v[a++];
        else
            p=v[b--];
    if(e==0){
            s+=p;
            e=1;
    }
    else{
        d+=p;
        e=0;
    }
}
cout<<s<<" "<<d;
}
