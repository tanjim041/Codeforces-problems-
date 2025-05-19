#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, count = 1, maxc = 1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
            count++;
        else
        {
            maxc = max(maxc, count);
            count = 1;
        }
    }
    maxc = max(maxc, count);
    cout << maxc;
}

