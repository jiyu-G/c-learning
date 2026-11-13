#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    char str[100];
    while (true)
    {
        cin.getline(str, 100);
        if (strlen(str) == 0) 
        {
            cout << "End!" << endl;
            break;
        }
        int len = strlen(str);
        int left = 0;
        int right = len - 1;
        bool isPalin = true;
        while (left < right) 
        {
            if (str[left] != str[right]) 
            {
                isPalin = false;
                break;
            }
            left++;
            right--;
        }
        if (isPalin) 
        {
            cout << "Yes" << endl;
        } 
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
