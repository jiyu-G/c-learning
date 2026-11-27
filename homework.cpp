#include<iostream>
using namespace std;
double mianji(int r,double pai =3.14)
{
    return pai*r*r;
}
int main()
{
    int r =0;
    cout << "请输入圆的半径" << endl;
    cin >> r;
    cout << "圆的面积为：" << mianji(r) << endl;
    return 0;
}