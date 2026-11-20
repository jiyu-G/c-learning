#include <iostream>
using namespace std;
void shuru(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void paixu(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]>a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
}
void shuchu(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main() 
{
    int a[1000];
    cout << "请输入数组的长度：" << endl;
    int n;
    cin>>n;
    shuru(a, n);
    paixu(a, n);
    shuchu(a, n);
    return 0;
    
}
