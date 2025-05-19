#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    string s,s1,s2,s3;
    cin>>s>>s1>>s2;
    s3=s+s1;
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    cout<<endl;
    if(s2==s3)
        cout<<"YES";
    else
        cout<<"NO";
}
