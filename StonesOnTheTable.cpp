//
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//    int n;
//    string s1;
//    int count=0;
//    cin>>n;
//    getline(cin,s1);
//    for(int i=0;i<n;i++)
//    {
//     for(int j=i+1;j<n;++j)
//     {
//         if(s1[i]==s1[j])
//            count++;
//     }
//}
//cout<<count;
//}
#include<iostream>
#include<string>
using namespace std;
int main(void)
 {
    int n;
    string s1;
    int count = 0;
    cin >> n;
    cin.ignore();
    getline(cin, s1);
    for(int i = 0; i < n - 1; i++)
        {
        if(s1[i] == s1[i + 1])
            count++;
    }
    cout << count;
}
