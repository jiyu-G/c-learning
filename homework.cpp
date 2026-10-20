#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,p,s;
    cout << "请输入三角形的三边a, b, c" << endl;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s =sqrt( (p * (p - a) * (p - b) * (p - c)));
    cout << "三角形的面积为：" << s << endl;
    return 0;
}