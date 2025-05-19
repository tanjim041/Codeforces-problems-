#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main()
{
    l t,i;
    cin>>t;
    vector<int>v(t);
    for( i=0;i<t;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
    for( i=1;i<=3001;i++)
    {
        if(find(v.begin(),v.end(),i)==v.end())
        {
            cout<<i<<endl;
            break;
        }
    }
}

