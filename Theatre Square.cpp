#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    if (n == 0 || m == 0 || a == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    long long flags_needed_length = ceil(double(n) / a);
    long long flags_needed_width = ceil(double(m) / a);
    long long total_flags_needed = flags_needed_length * flags_needed_width;
    cout << total_flags_needed << endl;
    return 0;
}

