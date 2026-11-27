#include<iostream>
using namespace std;
void zhuanhuan(int n,int a[])
{
    if(n==0)
    {
        cout << "二进制为0" << endl;
        return ;
    }
    int b=0;
    while(n!=0)
    {
        a[b]=n%2;
        n=n/2;
        b++;
    }
    for(int i =b-1;i>=0;i--)
    {
        cout << a[i];
    }
}
int main()
{
   int n=0;
   cout << "请输入一个整数" << endl;
   cin >> n;
   int a[99];
   zhuanhuan(n,a);
    return 0;
}