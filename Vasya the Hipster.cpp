
#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(){
    l a,b,c;
    cin>>a>>b;
    if(a>b)
        cout<<b<<" ";
    else
        cout<<a<<" ";
    c=abs(a-b);
    cout<<c/2;
}
