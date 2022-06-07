#include<bits/stdc++.h>
using namespace std;
class c1{
    int x;
    char y;
    public :
        void set(int m,char n)
        {
            this->x = m;
            this->y = n;
        }
        void get()
        {
            cout << "x : " << x << endl << "y : " <<  y << endl;
        }
};

int main()
{
    c1 d;
    d.set(100,'A');
    d.get();
    return 0;
}


