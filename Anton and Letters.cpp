#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l i,c=-1;
    string s;
    getline(cin,s);
    set<char>v;
    for(char ch:s)
    {
        if(ch >= 'a' && ch <= 'z')
            v.insert(ch);
    }
    cout << v.size();
}
