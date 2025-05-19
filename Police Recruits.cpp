#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,p=0,c=0,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
            p+=x;
        else
        {
            if(p<1)
                c++;
            else
                p--;
        }
    }
    cout<<c;
}
