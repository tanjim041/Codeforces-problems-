
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,t;
    cin>>n>>t;
    char a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
for(int j=0;j<t;j++)
{
    for(int i=0; i<n-1 ; i++)
    {
        if(a[i]=='B' &&a[i+1]=='G')
        {
            a[i]='G';
             a[i+1]='B';
            i++;
        }
    }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
}
