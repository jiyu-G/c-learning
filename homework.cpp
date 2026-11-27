#include<iostream>
using namespace std;
int maxgongyue(int a,int b)
{
    return b==0?a:maxgongyue(b,a%b);
}
int main()
{
    int a,b;
    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    cout << "最大公约数为：" << maxgongyue(a,b) << endl;
    return 0;
}