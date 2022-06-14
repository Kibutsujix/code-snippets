#include<bits/stdc++.h>
using namespace std;
class number{
    private :
    int a;
    public :
    void read_data(){
        cout << "Enter a number : ";
        cin >> a;
    }
    friend int even(number n);
};

int even(number n){
    if(n.a%2==0)
        return 1;
    else 
        return 0;
}
int main(){
    number n1;
    n1.read_data();
    if(even(n1))
        cout << "Even number!" << endl;
    else cout << "Odd number!" << endl;

}
/*
Enter a number : 5
Odd number!
*/