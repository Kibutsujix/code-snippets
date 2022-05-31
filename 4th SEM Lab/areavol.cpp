#include<bits/stdc++.h>
using namespace std;

class room{
    public : 
        int l,b,h;
};

int cal_area(int l,int b)
{
    return (l*b);
}

int cal_vol(int l,int b,int h)
{
    return (l*b*h);
}

int main()
{
    room dim;
    cout << "enter dimensions : " << endl;
    cin >> dim.l >> dim.b >> dim.h;
    cout << "Area : " << cal_area(dim.l,dim.b) << endl;
    cout << "Volume : " << cal_vol(dim.l,dim.b,dim.h) << endl;
}