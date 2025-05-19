#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l i,s;
    vector<l>v(3);
    for(i=0;i<3;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    s=v[2]-v[1];
    s+=(v[1]-v[0]);
    cout<<s;
}
