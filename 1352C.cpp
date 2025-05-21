#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l t,n,k,s;
    cin>>t;
   while(t--){
    cin>>n>>k;
    s=(k-1)/(n-1);
    cout<<k+s<<endl;
   }
}
