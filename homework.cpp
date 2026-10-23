#include<iostream>
using namespace std;
int main()
{
    char _1 = 'A';
    char _2 = 'B';
    char _3 = 'C';
    char _4 = 'D';
    char _5 = 'E';
    cout << "请输入五个字符" <<endl;
    cin >> _1 >> _2 >> _3 >> _4 >> _5;
    _1 =_1 +4;
    _2 =_2 +4;
    _3 =_3 +4;
    _4 =_4 +4;
    _5 =_5 +4;
    cout << "转换后的密码字符为: " << _1 << " " << _2 << " " << _3 << " " << _4 << " " << _5 << endl;   
    return 0;
}