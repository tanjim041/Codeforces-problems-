#include<bits/stdc++.h>
typedef long long l;
using namespace std;
int main(void)
{
    l n,s=0,i;
    cin>>n;
    vector<string>v(n);
   for(i=0;i<n;i++)
   {
       cin>>v[i];
        if (v[i] == "Icosahedron")
            s += 20;
        else if (v[i] == "Cube")
            s += 6;
        else if (v[i] == "Octahedron")
            s += 8;
            else if (v[i] == "Dodecahedron")
            s +=12;
        else
            s += 4;
   }
   cout<<s;
}
