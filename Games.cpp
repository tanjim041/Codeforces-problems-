#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
    l n,i,c=0,j;
    cin>>n;
    vector<int> v(n),s(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        cin>>s[i];
    }
     for(i=0;i<n;i++)
         for(j=0;j<n;j++)
            if(v[i]==s[j])
            c++;
         cout<<c;
}
