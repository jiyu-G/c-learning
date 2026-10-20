#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,sum;
    cout << "请输入a与b的值" << endl;
    cin >> a >> b;
    sum = a+b;
    cout << setw(10) << a << endl;
    cout << setw(4) << "+" << setw(6) << b << endl;
    cout << setw(10) << "________" << endl;
    cout << setw(10) << sum << endl;

    return 0;
}