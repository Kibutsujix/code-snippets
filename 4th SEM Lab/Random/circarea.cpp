// calculating area of circle using class
#include<bits/stdc++.h>
using namespace std;

class circle{
    public:
        int radius;
        float area()
        {
            return (3.14*radius*radius);
        }
};
int main()
{
    circle dot;
    cout << "Enter radius : ";
    cin  >> dot.radius;
    cout << "Area : " << dot.area() << endl;
    return 0;
}