#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l c=0,i,j;
     vector<int>v(4);
     for( i=0;i<4;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
      for( i=1;i<4;i++)
          if(v[i]!=v[i-1])
            c++;
            cout<<v.size()-c-1;
}
