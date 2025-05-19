#include <bits/stdc++.h>
using namespace std;
int main(void)
 {
    long long s, n,count=0;
    cin >> s >> n;
    pair<int , int > p[1000];
   for(int i=0;i<n;i++)
    cin>>p[i].first>>p[i].second;
   sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(s<=p[i].first)
        {
            count++;
            break;
        }
        else
            s+=p[i].second;
    }
    if(count>0)
        cout<<"NO";
    else
        cout<<"YES";
}

