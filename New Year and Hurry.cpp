#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,k,s=0,i;
    cin>>n>>k;
     for(i=1;i<=n;i++)
     {
      s+=(i*5);
      if((s>(240-k)))
      {
          i--;
          break;
      }
     }
     if(i>n)
     cout<<n;
     else
        cout<<i;
}
