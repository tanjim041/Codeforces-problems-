#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
            cout<<"0";
         if(s[i]=='-'&&s[i+1]=='.' )
        {
            cout<<"1";
            i++;
        }
        if(s[i]=='-'&&s[i+1]=='-' )
        {
            cout<<"2";
            i++;

        }
    }
}
