#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
            sort(v.begin(),v.end());
        for(int i=n-1;i>0;i--)
        {
            if(v[i]-v[i-1]>1)
            {
                s=1;
                break;
            }
        }
        if(s==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
