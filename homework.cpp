#include<iostream>
using namespace std;
void print(int n)
{
    if(n>=10){print(n/10);}
    cout<<n%10<<" ";
}
int main()
{
    int n;
    cout << "请输入一个整数" << endl;
    cin>>n;
    print(n);
    cout<<endl;
    return 0;
}