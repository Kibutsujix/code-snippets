#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if((a > b) && (a > c))
        cout << "Largest : " << a << endl;
    else if((b > a) && (b > c))
        cout << "Largest : " << b << endl;
    else
        cout << "Largest : " << c << endl;
    return 0;
}