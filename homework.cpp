#include<iostream>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    int length = 0;
    while(a[length] != '\0')
    {length++;}
    for(int i = 0;i < length - 1;i++)
    {
        for(int j = 0;j< length -i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int k = 0;k < length ;k++)
    {
        cout << a[k] << endl;
    }
    return 0;
}
