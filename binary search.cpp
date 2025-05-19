#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int> &v, int tar)
{
    int mid,st =0;
    int en=v.size()-1;
      while(st<=en)
        {
            mid=st+(en-st)/2;
               if(v[mid]==tar)
            {
                return mid;
            }

            if(v[mid]<tar)
                st=mid+1;
            else
            en=mid-1;
        }
        return  -1;
}
int main(void)
{
    vector<int>v;
    int n,x,mid,st,en,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
       v. push_back(x);
    }
    cin>>t;
  int result =binary_Search(v,t);
  cout<<result ;
}
