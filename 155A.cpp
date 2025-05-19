#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,i,c=0,ma,mi;
    cin>>n;
    vector<l>v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    ma=v[0];
    mi=v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]>ma)
        {
            ma=v[i];
            c++;
        }
          if(v[i]<mi)
        {
            mi=v[i];
            c++;
        }
    }
    cout<<c;
}
