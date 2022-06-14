#include<bits/stdc++.h>
using namespace std;
class box{
    private :
    int length;
    public :
    box() : length(10){}
    friend void print_length(box b);
};

void print_length(box b){
    cout << "length : " << b.length << endl;
}

int main(){
    box b;
    print_length(b);
}
// length : 10
