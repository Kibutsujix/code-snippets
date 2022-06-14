// friends as bridges
#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    int x;
    public:
    void set_data(int i){
        x = i;
    }
    friend void min(A,B);
};
class B{
    int y;
    public :
    void set_data(int i){
        y=i;
    }
    friend void min(A,B);
};
void min(A a, B b){
    if(a.x <= b.y)
        cout << a.x <<endl;
    else cout << b.y << endl;
}

int main(){
    A a;
    B b;
    a.set_data(10);
    b.set_data(20);
    min(a,b);
    return 0;
}
//10
