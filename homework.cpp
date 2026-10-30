#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int winningnumber =rand() % 5 +1 ;
    int a = 0;
    cout << "请输入一个1~5之间的数字" << endl;
    cin >> a;
    if (a == winningnumber)
    {
        cout << "恭喜您中奖啦,商品现金券100元!! " << "中奖号码为" << winningnumber << endl;
    }
    else
    {
        cout << "非常遗憾,您没有中奖!欢迎下次再来" << "中奖号码为" << winningnumber << endl;
    }
    return 0;
    
}