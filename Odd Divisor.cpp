#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
    int n,t;
    cin>>n;
    vector<int> v(n);
    int f=0;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>t;
    for(int i=0;i<n;i++)
        if(v[i]==t)
    {
     cout<<i;
     return 0;}
     cout<<-1;
}

