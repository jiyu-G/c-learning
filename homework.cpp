#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "请输入甲的糖果数x,乙的糖果数y,丙的糖果数z" << endl;
    cin >> x >> y >> z;
    int ox = x, oy = y, oz = z;

    int give = x / 3;
    x = give;
    y = y + give;
    z = z + give;

    give = y / 3;
    y = give;
    x = x + give;
    z = z + give;

    give = z / 3;
    z = give;
    x = x + give;
    y = y + give;

    cout << "甲开始的糖果数为: " << ox << endl;
    cout << "乙开始的糖果数为: " << oy << endl;
    cout << "丙开始的糖果数为: " << oz << endl;
    cout << "最后甲的糖果数为: " << x << endl;
    cout << "最后乙的糖果数为: " << y << endl;
    cout << "最后丙的糖果数为: " << z << endl;
    return 0;
}