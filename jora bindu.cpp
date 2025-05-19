#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main()
{
    l x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    l x3,y3,x4,y4;
    if(x1==x2)
    {
        x3=x1+(y2-y1);
        x4=x2+(y2-y1);
        y3=y1;
        y4=y2;
    }
    else if(y1==y2)
    {
        x3=x1;
        x4=x2;
        y3=y1+(x2-x1);
        y4=y2+(x2-x1);
    }
    else
    {
        x3=x1;
        x4=x2;
        y3=y2;
        y4=y1;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
}
