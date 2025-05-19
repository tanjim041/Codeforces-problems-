#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int N;
    cin >> N;
    string num_str = to_string(N);
    reverse(num_str.begin(), num_str.end());
    long long int swapped_N = stoll(num_str);
    cout << swapped_N << endl;
    if (swapped_N == N)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
