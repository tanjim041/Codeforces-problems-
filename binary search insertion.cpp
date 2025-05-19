#include<bits/stdc++.h>
using namespace std;
int sortv(vector<int>&v,int n,int t)
{
    int st=0,en=n-1,mid;
    while(st<=en)
    {
        mid=st+(en-st)/2;
       if(v[mid]==t)
        return t;
       else if(v[mid]>t)
        en=mid-1;
       else
        st=mid+1;
    }
    return -t;
}

int main(void)
{
    int n=5,s,t=5;
     vector<int>v={4,3,2,1,6};
    s=sortv(v,n,t);
    cout<<s;
}
