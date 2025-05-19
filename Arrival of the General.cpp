#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
    l n,i,c=0,maxp,mini=101,minp;
    cin>>n;
    vector<l>v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    maxp=max_element(v.begin(),v.end())-v.begin();
    for(i=0;i<n;i++)
        if(v[i]<=mini)
        {
            mini=v[i];
            minp=i;
        }
        if(maxp>minp)
            minp++;
         cout << maxp+(n - 1) -minp;
}
