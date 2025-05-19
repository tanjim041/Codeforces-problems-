#include<iostream>
using namespace std;
int main()
{
    long long int k,w,n;
    int sum=0;
    cin>>k>>w>>n;
    while(n)
    {
        sum+=k*n;
        n--;
    }
    if(sum>w)
    {
        int borrow=sum-w;
        cout<<borrow;
    }
    else
    {
        cout<<"0";
    }
}
