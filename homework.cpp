#include<iostream>
using namespace std;
int main()
{
    int zimu = 0;
    int shuzi = 0;
    int kongge = 0;
    int qita = 0;
    char ch;
    cout << "请输入一行字符,以换行符结束" << endl;
    while((ch = cin.get()) != '\n')
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            zimu++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            shuzi++;
        }
        else if( ch == ' ')
        {
            kongge++;
        }
        else
        {
            qita++;
        }
    }
    cout << "字母个数为:" << zimu << endl;
    cout << "数字个数为:" << shuzi << endl;
    cout << "空格个数为:" << kongge << endl;
    cout << "其他字符个数为:" << qita << endl;
    return 0;
}
