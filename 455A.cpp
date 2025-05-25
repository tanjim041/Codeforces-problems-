#include<bits/stdc++.h>
using namespace std;
typedef long long l;
l d[100005]={};
l d1[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    l n,m,i,j;
    cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>j;
       d[j]++;
   }
   d1[0]=0;
   d1[1]=d[1];
   for(i=2;i<=100000;i++)
    d1[i]=max(d1[i-1],d1[i-2]+i*d[i]);
   cout<<d1[100000];
}
