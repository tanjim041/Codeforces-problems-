#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    string s1="hello";
    int sum=0;
    for(int i=0;i<s.size();i++)
        {
        if(s[i]==s1[sum])
            sum++;
        else if(sum==s1.size())
          {
              break;
          }
    }
     if(sum==s1.size())
          cout<<"YES";
          else
          cout<<"NO";

}
