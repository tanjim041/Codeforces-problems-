#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(){
    l t,j=1;
    cin>>t;
    vector<l>v(t);
    for(l i=0;i<t;i++) cin>>v[i];

    for(l n : v){
        l c=0;
        if(n==2) c=1;
        else{
            if(n%2==0 || n%3==0) c++;
            for(l i=5;i*i<=n;i+=6){
                if(n%i==0 || n%(i+2)==0) c++;
            }
        }
        cout<<"Case "<<j++<<": "<<c<<endl;
    }
}
