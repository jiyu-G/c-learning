#include<iostream>
using namespace std;
int main()
{
    int number =0;
    cout << "请输入一个三位整数" << endl;
    cin >> number;
    int a =0,b =0,c =0,sum =0;
    a = number/100;
    b = (number -a*100)/10;
    c = number -a*100-b*10;
    sum =a+b+c;
    cout << "各位数之和为" << sum <<endl;
    return 0;
}