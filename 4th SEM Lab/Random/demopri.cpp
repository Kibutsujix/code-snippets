// demonstration of private and public access specifiers

#include<bits/stdc++.h>
using namespace std;

class room{
    int l,b,h;
    public:
        void initdata(int len,int bread,int height)
        {
            l = len;
            b = bread;
            h = height;
        }
        int cal_area()
        {
            return (l*b);
        }
        int cal_vol()
        {
            return (l*b*h);
        }
};

int main()
{
    room dim;
    int len,bread,height;
    cout << "Enter dimensions : " << endl;
    cin >> len >> bread >> height;
    dim.initdata(len,bread,height);
    cout << "Area  : " << dim.cal_area() << endl;
    cout << "Volume : " << dim.cal_vol() << endl;
    return 0; 
}