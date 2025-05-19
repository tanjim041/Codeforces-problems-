#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,a,b,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=0;
      if (a % b == 0)
            cout<<0<<endl;
        else {
            c = b - (a % b);
            cout << c << endl;
        }
    }
}
