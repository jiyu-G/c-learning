#include<iostream>
using namespace std;
int main()
{
    int a =0,c = 0;
    cout << "Enter a number: ";
    cin >> a;
    if(a==0)
    {
        cout << "转换为二进制为0" << endl;
    }
    int b[32];
    while(a != 0)
    {
        b[c] = a % 2;
        a = a/2;
        c++;

    }
    for(int i =c-1 ;i>=0;i--)
    {
        cout << b[i];
    }
    return 0;
}
