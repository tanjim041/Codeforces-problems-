#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,a,b,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a<(b-1))
            sum++;
    }
    cout<<sum;
}
