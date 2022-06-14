#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private :
    int numA;
    friend class B;
    public:
    A() : numA(10){}
};
class B{
    private : 
    int numB;
    public :
    B() : numB(4){}
    int add(){
        A objA;
        return objA.numA + numB;
    }
};

int main(){
    B objB;
    cout << "Sum : " << objB.add() <<endl;
    return 0;
}
// Sum : 14
