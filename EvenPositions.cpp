#include<bits/stdc++.h>
using namespace std;
int  main()
{
   long long   n,x;
    cin>>n;
    while(n--)
    {
            string v;
        cin>>x;
         vector<int>a;
    int sum=0,count=0;
    cin>>v;
        for(int i=0;i<x;i++)
        {
            if(v[i]=='(')
                count++;
           else if(v[i]==')')
                count--;
            else
                {
                if(count>0)
                {
                    v[i]=')';
                    count--;
                }
                else
                {
                     v[i]='(';
                    count++;
                }
            }
        }
        for(int i=0;i<x;i++)
        {
            if(v[i]=='(')
                a.push_back(i);
                else
                {
                    sum+=(i-a.back());
                    a.pop_back();
                }
        }
        cout<<sum<<endl;
    }
}
