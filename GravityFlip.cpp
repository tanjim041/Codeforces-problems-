#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> cubes(n);
    for (int i = 0; i < n; i++)
        cin >> cubes[i];
    sort(cubes.begin(), cubes.end());
    for (int i = 0; i < n; i++)
        cout << cubes[i] << " ";
    cout << endl;
}
