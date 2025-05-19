#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l i;
    vector<int>v(4);
   for(i=0;i<4;i++)
    cin>>v[i];
   sort(v.begin(),v.end());
   cout<<v[3]-v[2]<<" ";
    cout<<v[3]-v[1]<<" ";
     cout<<v[3]-v[0]<<" ";
}
