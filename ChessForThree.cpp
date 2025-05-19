#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin >> n;
    while (n--)
    {
        cin>>a>>b>>c;
        if((a+b+c)%2==1)
            cout<<"-1"<<endl;
        else
            cout<<(min(a+b ,(a+b+c)/2))<<endl;
        }
    }


