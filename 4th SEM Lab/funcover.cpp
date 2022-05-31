#include<bits/stdc++.h>
using namespace std;

void print(int a){
    cout << "Integer number : " << a << endl;
}

void print(float b)
{
    cout << "Floating number : " << b << endl;
}

void print(const char c)
{
    cout << "character : " << c << endl; 
}

int main()
{
    int a;
    float b;
    char c;
    cout << "enter value of a,b,c : " << endl;
    cin >> a >> b >> c;
    print(a);
    print(b);
    print(c);
    return 0;
}