#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l n,k,c=0,i;
    cin>>n>>k;
    vector<l> v(n);
    set<l>s;
    for(i=0; i<n; i++)
        cin>>v[i];
    for(i=0; i<n; i++)
    {
        if(s.find(v[i]+k)!=s.end())
            c++;
        if(s.find(v[i]-k)!=s.end())
        c++;
        s.insert(v[i]);
    }
    cout<<c<<endl;
}
