#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m,mini=0,sum=0;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    mini=v[m-1]-v[0];
     for(int i=n;i<=m;i++)
     {
         if(v[i-1]>v[i-n])
             sum=v[i-1]-v[i-n];
          else
            sum=v[i-n]-v[i-1];
          mini=min(mini,sum);
     }
     cout<<mini;
}
