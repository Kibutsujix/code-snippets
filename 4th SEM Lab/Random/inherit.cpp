#include<bits/stdc++.h>
using namespace std;

class Animal{
    public :
        void eat(){
            cout << "I can eat" << endl;
        }
};

class dog : public Animal
{
    public :
        void bark(){
            cout << "I can bark" << endl;
        }
};

int main()
{
    dog golden;
    golden.bark();
    golden.eat();
    return 0;
}