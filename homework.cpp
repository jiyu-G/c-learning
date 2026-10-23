#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	cout << "请输入一个三位数" << endl;
	cin >> x;
	int a = 0, b = 0, c = 0 ,y = 0 ;
	double z = 0;
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x - a * 100 - b * 10;
	y = a * 100000 + b * 10000 + c * 1000 + x;
	z = y / 7 / 11 / 13;
    cout << "最后的商为" << z << endl;
	return 0;
}