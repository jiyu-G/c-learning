#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a ;
    for (a = 100 ; a <= 999; a++)
    {
        bool answer = true;
        for(int b =2 ;b <= sqrt(a) ;b++)
        {
            if(a%b==0){answer = false; break;}
        }
        if(answer){cout << a << endl;}
    }
    return 0;
    
}