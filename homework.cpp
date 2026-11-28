#include <iostream>
using namespace std;
int maxyue(int a,int b)
{
    int max =a>b?a:b;
    for(int i = max;i>0;i--)
    {
        if(a%i==0&&b%i==0){return i;}
    }
}
int minbei(int a,int b)
{
    int max=a>b?a:b;
    for(int i =max;i>0;i++)
    {
        if(i%a==0&&i%b==0){return i;}
    }
}
int main() 
{
    int a=0,b=0;
    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    cout << "最大公约数为" << maxyue(a,b) << endl;
    cout << "最小公倍数为" << minbei(a,b) << endl;
    return 0;
}
