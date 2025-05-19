#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a+b)==c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
}
