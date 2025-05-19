#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,sum=0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
    double v=(double)sum/n;
    cout<<v;
}
