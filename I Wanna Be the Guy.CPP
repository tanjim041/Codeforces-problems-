#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l x, a, b, i,c=0;
    cin>>x>>a;
    int v[200];
    for(i=0;i<a;i++)
        cin>>v[i];
    cin>>b;
    for(i=a;i<a+b;i++)
        cin>>v[i];
    sort(v,v+a+b);
    for(i=0;i<a+b;i++)
        if(v[i]!=v[i+1])
    c++;
    if(c==x)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
