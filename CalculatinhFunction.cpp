#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,sum;
    cin>>n;
    if(n%2==0)
        sum=n/2;
        else
 sum=((n-1)/2)-n;
    cout<<sum<<endl;
}
