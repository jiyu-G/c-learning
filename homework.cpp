#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,weishu = 0,pinfanghe = 0,lixu = 0;
    cout << "请输入一个任意整数" << endl;
    cin >> a;
    b = abs(a);
    if(b == 0){weishu = 1;}
    else
    {
    while(b > 0)
     {
        int number = b % 10;
        pinfanghe += number * number;
        weishu++;
        lixu = lixu*10 + number;
        b = b / 10;

     }
    }
    if(a <0){lixu = -lixu;}
    cout << "该整数的位数为" << weishu << endl;
    cout << "该整数的各位数字平方和为" << pinfanghe << endl;
    cout << "该整数的逆序数为" << lixu << endl;
    return 0;
}
