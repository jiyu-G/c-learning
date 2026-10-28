#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "请输入三个整数" << endl;
    cin >> a>> b>> c;
    if(a>b)
    {
        if(a>c){cout << "max为" << a <<"  "<< "min为" << (b > c ? c :b ) <<endl;}
        else{cout << "max为" << c <<"  " << "min为" << b <<endl;}
    }
    else
    {
        if(b>c){cout << "max为" << b << "  " << "min为" << (a > c ? c : a) << endl;}
     else{cout << "max为" << c <<"  " << "min为" << a << endl;}
    }

    return 0;
}