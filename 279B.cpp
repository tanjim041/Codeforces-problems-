#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l n,t,s=0,i,a=0,j=0;
    cin>>n>>t;
    vector<l>v(n);
    for(auto &x:v)
        cin>>x;
    for( i=0;i<n;i++)
        {
            s+=v[i];
            while(s>t)
            {
                s-=v[j];
                j++;
            }
            a=max(a,i-j+1);
        }
        cout<<a;
}
