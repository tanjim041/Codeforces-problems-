#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l t,c;
    cin>>t;
    while(t--)
    {
        c=0;
       vector<int>v(4);
        for(int i=0;i<4;i++)
        cin>>v[i];
        for(int i=1;i<4;i++)
            if(v[0]<v[i])
                c++;
        cout<<c<<endl;
    }
}
