#include <bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l t, a, b, s;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
       if(a==b)
        cout<<"0"<<endl;
       else
       {
           if(abs(a-b)%10==0)
            cout<<abs(a-b)/10<<endl;
           else
            cout<<(abs(a-b)/10)+1<<endl;
       }
    }
}

