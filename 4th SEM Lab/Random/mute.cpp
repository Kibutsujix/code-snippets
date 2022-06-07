#include<bits/stdc++.h>
using namespace std;
class A{
    int x=0;
    mutable int y=10;
    public :
        void alter(){
        x++;
        y++;
        cout << " " << x << " " << y << endl;
        }
};

int main(){
    A d1;
    d1.alter();
    return 0;
}
/*
output
mute.cpp: In member function ‘void A::alter() const’:
mute.cpp:8:9: error: increment of member ‘A::x’ in read-only object
    8 |         x++;
      |         ^

*/