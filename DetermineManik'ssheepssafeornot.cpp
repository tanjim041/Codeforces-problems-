//#include <iostream>
//using namespace std;
//int main()
//{
//    int S,W;
//    cin>>S>>W;
//    if(W>=S)
//    {
//        cout<<"unsafe";
//    }
//    else
//    {
//        cout<<"safe";
//    }
//
//}
#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long len = (n + a - 1) / a;
    long long width = (m + a - 1) / a;
    long long total = len* width;
    cout << total << endl;
    return 0;
}










