#include <bits/stdc++.h>
using namespace std;
typedef long long l;
int main() {
    l n,x,y;
    cin >> n;
    x=4;
    y=n-4;
    while(1)
    {
        if(( x%2==0 || x%3==0)&& (( y%2==0 || y%3==0))){

           cout<<x<<' '<<y;
           break;
    }
    x++;
    y--;
    }
}
