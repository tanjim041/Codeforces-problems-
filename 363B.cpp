#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l n,k,x,a=0,b=0,c=0,j;
    cin>>n>>k;
    vector<l>v(n);
    for(auto &x:v)
    cin>>x;
 for(l i=0;i<k;i++)
    a+=v[i];
    b=a;
 for(l i=k;i<n;i++){
    a=a-v[i-k]+v[i];
    if(a<b){
        b=a;
    c=i-k+1;}
     }
 cout<<c+1;
}
