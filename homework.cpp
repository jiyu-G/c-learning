#include<iostream>
using namespace std;
int main()
{
    int a = 0 ;
    cout << "请输入一个正整数" << endl;
    cin >> a ;
    if (97 <= a%123 <= 122)
    {
        cout << (char)(a%123) << endl;
    }
    else{
        if(65 <= a%91 <=90){cout <<(char)(a%91) << endl; }
        else{cout << "*" << endl;}
        }

    return 0;
}