#include<iostream>
using namespace std;
int main()
{
	long int a = 0;
    int b = 0;
    char c = 'A';
    bool d = true;
    float e = 0.0;
    double f = 0.0;
    long double g = 0.0;
    cout <<"long int的字节长度为"<< sizeof(a) <<"\t" <<"long int的位长为" << sizeof(a)*8 << endl;
    cout <<"int的字节长度为"<< sizeof(b) <<"\t" <<"int的位长为" << sizeof(b)*8 << endl;
    cout <<"char的字节长度为"<< sizeof(c) <<"\t" <<"char的位长为" << sizeof(c)*8 << endl;
    cout <<"bool的字节长度为"<< sizeof(d) <<"\t" <<"bool的位长为" << sizeof(d)*8 << endl;
    cout <<"float的字节长度为"<< sizeof(e) <<"\t" <<"float的位长为" << sizeof(e)*8 << endl;
    cout <<"double的字节长度为"<< sizeof(f) <<"\t" <<"double的位长为" << sizeof(f)*8 << endl;
    cout <<"long double的字节长度为"<< sizeof(g) <<"\t" <<"long double的位长为" << sizeof(g)*8 << endl;
    return 0;
}