#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(void)
{
   l i=1,k,r,sum=0;
   cin>>k>>r;
   while(i++)
   {
       sum+=k;
     if(sum%10==0 || sum%10==r)
     {
         cout<<i-1;
         break;
     }
   }
}
