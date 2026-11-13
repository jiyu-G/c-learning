#include<iostream>
using namespace std;
int main()
{
    int a[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"Enter the number of a["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        int max = a[i][0];
        int maxlie =0;
        for(int j =1;j<4;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                maxlie = j;
            }
        }
        cout << "第" << i+1 << "行的最大值为: " << max << "在第" << maxlie+1 << "列" << endl;

    }
    return 0;
}