#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n,s1,s2;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);

        s1=0;
        s2=0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]%2==0)
                s1+=v[i];
              else  if(v[i]%2==0)
                s2+=v[i];
        }
sort (v.begin(),v.end());

        int o = 0;
        int e = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }
     if(v.size()==e || v.size()==o )
        cout<<"0"<<endl;
    }

}

