
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int cp,mp;
cp=0;
mp=0;
while(n--)
{
    int ai,bi;
    cin>>ai>>bi;
    cp-=ai;
    cp+=bi;
    if(cp>mp)
        mp=cp;
}
cout<<mp;
}
