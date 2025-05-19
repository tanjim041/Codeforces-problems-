#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,l,sum=0;
    cin>>n>>l;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i]>sum)
            sum=v[i+1]-v[i];
    }
    double a=v[0];
    double b=(double)sum/2;
    double c=max(a,b);
    double   d=l-v[n-1];
    c=max(c,d);
    cout<<fixed<<setprecision(9)<<c;
}
