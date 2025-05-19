#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v;
    cin >> v;
      int a=0,b=0;
      for(int i=0;i<v.size();i++)
    {
        if(isupper(v[i]))
            b++;
    }

    for(int i=1;i<v.size();i++)
    {
        if(islower(v[i]))
            a++;
    }
    if(islower(v[0]) && a==0)
{
    v[0]=toupper(v[0]);
     for(int i=1;i<v.size();i++)
         v[i]=tolower(v[i]);
cout<<v;
}
else if(v.size()==b)
{
    for(int i=0;i<v.size();i++)
        v[i]=tolower(v[i]);
    cout<<v;
}
else
    cout<<v;
}

