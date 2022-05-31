// demonstration of scope resolution operator

#include<bits/stdc++.h>
using namespace std;

class Distance{
    int ifeet;
    int inches;
    public :
        void setifeet(int feet);
        int getifeet();
        void setinches(int inch);
        int getinches();
};

void Distance :: setifeet(int feet)
{
    ifeet = feet;
}

int Distance :: getifeet()
{
    return ifeet;
}

void Distance :: setinches(int inch)
{
    inches = inch;
}

int Distance :: getinches()
{
    return inches;
}

int main()
{
    int feet,inch;
    Distance obj;
    cout << "Enter feet and inches : " << endl;
    cin >> feet >> inch;
    obj.setifeet(feet);
    obj.setinches(inch);
    cout << "Feet : " << obj.getifeet() << endl;
    cout << "Inches : " << obj.getinches() << endl;
    return 0;
}
