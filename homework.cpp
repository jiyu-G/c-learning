#include <iostream>
using namespace std;
int main() 
{
    int a[15];
    for(int i=0; i<15; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> a[i];
    }
    for(int i =0;i<14;i++)
    {
        for(int j=0;j<14-i;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int m =0;
    cout <<"请输入m的值" << endl;
    cin >> m;
    int left = 0;
    int right = 14;
    int pos = -1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(a[mid] == m)
        {
            pos = mid;
            break;
        }
        else if(a[mid] > m)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(pos != -1)
    {
        cout << "找到了，在第" << pos+1 << "个位置" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
