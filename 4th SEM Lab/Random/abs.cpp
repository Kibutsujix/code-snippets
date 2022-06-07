#include<bits/stdc++.h>
using namespace std;
/*
USING HEADER FILES
int main()
{
    int a;
    cout << "Enter number : ";
    cin >> a;
    cout << "Result : " << pow(a,2) << endl;
    return 0;
}
*/

// using classes

class c1{
    int x,y;
    public : 
        void add()
        {
            int z;
            cout << "Enter x and y" << endl; cin >> x >> y;
            z = x+y;
            cout << "Sum : " << z << endl;
        }
};

int main(){
    c1 sum;
    sum.add();
    return 0;
}