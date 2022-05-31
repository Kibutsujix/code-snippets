// assigning values to a structure in cpp
#include<bits/stdc++.h>
using namespace std;

struct DATA
{
    int age;
    float salary;
};

int main()
{
    struct DATA d1;
    cout << "enter data : " << endl;
    cin >> d1.age >> d1.salary;
    cout << "age : " << d1.age << endl << "Salary : " << d1.salary << endl;
    return 0;
}