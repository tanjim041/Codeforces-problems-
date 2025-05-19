#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
     l n;
     cin >> n;
     string s;
     cin>>s;
   set<char> v;
    for (char c : s)
        v.insert(tolower(c));

    if (v.size()==26)
       cout<<"YES";
     else
        cout <<"NO";
}
