#include<bits/stdc++.h>
typedef long long a;
using namespace std;
int main(void)
{
    a k,l,m,n,d,i=0,c=0;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++)
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        c++;
    cout<<d-c;
}
