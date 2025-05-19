#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,s1=0,s2=0;
    cin>>t;
    while(t--)
    {
        s1=0,s2=0;
        string s;
    cin>>s;
    for(int i=0;i<3;i++)
        s1+=s[i];
    for(int i=3;i<s.size();i++)
        s2+=s[i];
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
