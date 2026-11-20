#include <iostream>
#include <cstring>
using namespace std;
void lixu(char a[])
{
    int n = strlen(a),b=0,m=0;
    m=n-1;
   while(b<m)
   {
    char temp=a[b];
    a[b]=a[m];
    a[m]=temp;
    b++;
    m--;
   }
    return;
}
int main() 
{
    char a[100];
    cin.getline(a, 100);
    lixu(a);
    cout<<a<<endl;
    return 0;
}
