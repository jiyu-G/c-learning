#include<iostream>
using namespace std;
double poly(double x,int n)
{
    double y =0;
    if(n==0)
    {
        y=1;
        return y;
    }
    else if(n==1)
    {
        y=x;
        return y;
    }
    else
    {
        y=((2*n-1)*x*poly(x,n-1)-(n-1)*poly(x,n-2))/n;
        return y;
    }
}
int main()
{
    double x=0;
    int n =0;
    cout << "请输入x和n的值" << endl;
    cin >> x >> n;
    cout << "函数poly的值为" << poly(x,n) << endl;

    return 0;
}