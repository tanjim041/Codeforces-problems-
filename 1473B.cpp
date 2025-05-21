#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l q;
    cin>>q;
    cin.ignore();
    while(q--)
        {
    string s,t,r="";
    getline(cin,s);
    getline(cin,t);
    if(s+t!=t+s){
        cout<<-1<<endl;
        continue;
    }
    l gcd=__gcd(s.size(),t.size());
    l lcm=(s.size()*t.size())/gcd;
    for (l i=0;i<lcm/s.size();i++)
        r+=s;
  cout<<r<<endl;
}
}
