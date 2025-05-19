#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l t,r;
    cin>>t;
    while(t--)
    {
        cin>>r;
         if(r<=1399)
            cout<<"Division 4"<<endl;
        if(1900<=r)
            cout<<"Division 1"<<endl;
           if(1600<=r && r<=1899)
            cout<<"Division 2"<<endl;
               if(1400<=r && r<=1599)
            cout<<"Division 3"<<endl;
    }
}
