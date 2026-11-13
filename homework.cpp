#include <iostream>
using namespace std;
int main() 
{
   int t;
   cout << "Enter the number c(55<=t<=9999)" << endl;
    cin >> t;
    int f[999];
    f[0] = 1;
    f[1] = 1;
    int count =2;
    while(1)
    {
        int next = f[count-1] + f[count-2];
        if(next > t)
        {
            break;
        }
        f[count] = next;
        count++;
    }
    int start = 0;
    if(count > 10)
    {
        start = count - 10;
    }
    int line = 0;
    for(int i = start; i < count; i++)
    {
        cout << f[i] << " ";
        line++;
        if(line == 5)
        {
            cout << endl;
        }
    }
    return 0;
}
