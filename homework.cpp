#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int a[10][10];
    for (int i = 0; i < 10; i++)
    {
        a[i][0] = 1; 
        a[i][i] = 1;
        for (int j = 1; j < i; j++) 
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < 10; i++) 
    {
        for (int k = 0; k < (10 - i) * 3; k++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) 
        {
            cout << setw(6) << a[i][j]; 
        }
        cout << endl; 
    }

    return 0;
}
