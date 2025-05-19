#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& v, int low, int high) {
    int p = v[low];
    int i = low + 1;
    int j = high;
    int temp;
    while (true) {
        while (i <= high && v[i] <= p)
            i++;
        while (j >= low && v[j] > p)
            j--;
        if (i < j) {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        } else {
            temp = v[low];
            v[low] = v[j];
            v[j] = temp;
            return j;
        }
    }
}

void quick(vector<int>& v, int low, int high) {
    int pi;
    if (low < high) {
        pi = partition(v, low, high);
        quick(v, low, pi - 1);
        quick(v, pi + 1, high);
    }
}
int main() {
    vector<int> v = {3, 5, 2, 13, 12,3,2,13,45};
    int n = v.size();
    quick(v, 0, n - 1);
    for (int x : v)
        cout << x << " ";
}
