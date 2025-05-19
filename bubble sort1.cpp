#include<bits/stdc++.h>
using namespace std;
void  bubble_sort(vector<int> &v,int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(v[j]>v[j+1])
        swap(v[j],v[j+1]);
}
int main()
{
    vector<int>v;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    bubble_sort(v,n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<' ';
}
