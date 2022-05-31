#include<bits/stdc++.h>
using namespace std;

class MyClass
{
    public :
        int MyNum;
        string MyString;
};

int main()
{
    MyClass obj1;
    obj1.MyNum = 10;
    obj1.MyString = "Aditya";
    cout << obj1.MyNum << endl;
    cout << obj1.MyString << endl;
    return 0;
}