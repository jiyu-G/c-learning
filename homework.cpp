#include<iostream>
using namespace std;
int main()
{
    int n = 0 , y =0 , r = 0 ;
    cout << "请输入今天的年，月，日" << endl;
    cin >> n >> y >> r;
    if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12 && r <= 30)
    {
        cout << "明天是" << n << "年" << y << "月" << r + 1<< "日" << endl;
    }
    else if (y == 4 || y == 6 || y == 9 || y == 11 && r <= 29)
    {
        cout << "明天是" << n << "年" << y << "月" << r + 1<< "日" << endl;
    }
    else if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10  && r ==31 )
    {
        cout << "明天是" << n << "年" << y + 1 << "月" << 1<< "日" << endl;
    }
    else if (y == 4 || y == 6 || y == 9 || y == 11 && r ==30 )
    {
        cout << "明天是" << n << "年" << y + 1 << "月" << 1<< "日" << endl;
    }
    else if (y == 12 && r == 31)
    {
        cout << "明天是" << n + 1 << "年" << 1 << "月" << 1<< "日" << endl;
    }
    else if (y == 2 && n%4 !=0 && r <= 27)
    {
        cout << "明天是" << n << "年" << y << "月" << r + 1<< "日" << endl;
    }
    else if (y == 2 && n%4 !=0 && r == 28)
    {
        cout << "明天是" << n << "年" << y + 1<< "月" << 1<< "日" << endl;
    }
    else if (y == 2 && n%4 ==0 && r <= 28)
    {
        cout << "明天是" << n << "年" << y << "月" << r + 1<< "日" << endl;
    }
    else if (y == 2 && n%4 ==0 && r == 29)
    {
        cout << "明天是" << n << "年" << y + 1<< "月" << 1<< "日" << endl;
    }
    else
    {
        cout << "输入错误" << endl;
    }
   
    return 0;
}