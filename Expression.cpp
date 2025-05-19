#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c,s1,s2,s3,s4,s5;
    cin>>a>>b>>c;
    s1=a+b*c;
    s2=a*(b+c);
    s3=a*b*c;
    s4=(a+b)*c;
    s5=a+b+c;
    int m=max({s1,s2,s3,s4,s5});
    cout<<m;
}
