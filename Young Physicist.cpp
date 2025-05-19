#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,i,j,s1=0,s2=0,s3=0;
    cin>>n;
    int v[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        cin>>v[i][j];
        s1+=v[i][0];
        s2+=v[i][1];
        s3+=v[i][2];
    }
    if(s1==0 && s2==0 &&s3==0)
        cout<<"YES";
    else
        cout<<"NO";
}
