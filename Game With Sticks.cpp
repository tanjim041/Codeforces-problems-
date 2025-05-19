#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l a,b,i=1,count=0;
    cin>>a>>b;
    while(1)
    {
        if(a-i== 0)
            break;
        else if(b-i==0)
            break;
            count++;
            i++;
    }
    if(count%2==0)
        cout<<"Akshat";
    else
    cout<<"Malvika";
}
