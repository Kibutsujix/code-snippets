// friendship isn't transitive
#include<bits/stdc++.h>
using namespace std;
class A;
class B;
class C{
    friend class B;
    int a;
};

class B{
    friend class A;

};

class A{
    void fun(C *p){
        p->a = p->a +1;
    }
};

// error highlighted