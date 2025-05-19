
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,x;
    cin>>n;
    int c=n;
    while(n--)
    {
        cin>>x;
        if(x==0)
            s++;
    }
    if(c==s)
        cout<<"EASY";
    else
        cout<<"HARD";
}
