#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int f[10];
    double sum =0;
    cout << "请输入10个数字" << endl;
    for(int i = 0 ;i <= 9 ; i++){cin >> f[i];} 
    for(int i = 0;i < 9 ;i++)
    {
        for(int j =0;j < 9-i;j++)
        {
            if(f[j] > f[j+1])
            {
                int temp = f[j+1];
                f[j+1] = f[j];
                f[j] = temp;
            }
        }
    }
    for(int i=1 ;i < 9 ; i++)
    {
        sum = sum +f[i];
    }
    double p = sum/8;
    cout << "最后得分为" << fixed << setprecision(3)<< p << endl; 
    return 0;
    
}