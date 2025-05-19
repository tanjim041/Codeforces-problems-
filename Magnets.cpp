#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,s1=0,c=0;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=2;
    sort(arr,arr+n);
      for(int i=n-1;i>=0;i--)
    {
       s1+=arr[i];
       c++;
       if(sum<s1)
        break;
    }
    cout<<c;
}

