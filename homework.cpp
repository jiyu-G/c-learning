#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i =100 ;
    for(i = 100;i<1000;i++)
    {
        int a,b,c;
        a = i/100;
        b = (i/10)%10;
        c = i%10;
        if((a*a*a + b*b*b + c*c*c) == i)
        {
            cout<<i<< " ";
        }
    }
    return 0;
}