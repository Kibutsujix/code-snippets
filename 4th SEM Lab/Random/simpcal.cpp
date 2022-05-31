#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout << "Enter expression : ";
    cin >> a >> op >> b;
    switch(op)
    {
        case '+' :
        cout << "sum : " << (a+b) << endl;
        break;
        case '-' :
        cout << "difference : " << (a-b) << endl;
        break;
        case '*' :
        cout << "product : " << (a*b) << endl;
        break;
        case '/' :
        if(b!=0){
            cout << "quotient : " << (a/b) << endl;
            break;
        }
        else{
            cout << "divide by zero error! " << endl;
            break;
        }
    }
    return 0;
}