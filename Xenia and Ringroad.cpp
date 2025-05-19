#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,m,i,s;
    cin>>n>>m;
    vector<int> v(m);
    for( i=0;i<m;i++)
        cin>>v[i];
        s=v[0]-1;
    for( i=0;i<m-1;i++)
    {
        if(v[i]>v[i+1])
            s+=n-(v[i]-v[i+1]);
        else if((v[i]<v[i+1]))
            s+=v[i+1]-v[i];
    }
    cout<<s;
}
