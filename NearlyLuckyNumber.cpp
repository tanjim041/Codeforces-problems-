#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,count=0;
    cin>>n;
    while(n)
    {
        long long int temp=n%10;
        if(temp==4||temp==7)
            count++;
n/=10;
    }
    if(count==4 || count==7)
        cout<<"YES";
        else
            cout<<"NO";
}
