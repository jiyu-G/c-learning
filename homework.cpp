#include<iostream>
using namespace std;
int main()
{
    double t = 0 ,s = 0 ,BMI = 0;
    cout << "请输入你的体重(kg)和身高(m)" << endl;
    cin >> t >> s;
    BMI = t / (s * s);
    if(BMI < 18.5)
    {
        cout  << "BMI为" << BMI << "，体重偏瘦" << endl;
    }
    else if(18.5 <= BMI < 24)
    {
        cout << "BMI为" << BMI << "，体重正常" << endl;
    }
    else if(24 <= BMI < 28)
    {
        cout << "BMI为" << BMI << "，体重偏胖" << endl;
    }
    else if(28 <= BMI < 40)
    {
        cout << "BMI为" << BMI << "，肥胖" << endl;
    }
    else if(40 <= BMI)
    {
        cout << "BMI为" << BMI << "，极重度肥胖" << endl;
    }
    return 0;
}