// student record
#include<bits/stdc++.h>
using namespace std;
class student{
    int id;
    string name;
    float pc;
    public :
        void set(int i,string n,float f){
            this->id = i;
            this->name = n;
            this->pc = f;
        }
        float per(){
            return this->pc;
        }
        string st_name(){
            return this->name;
        }
};

int main()
{
    student st[5];
    int a;
    string c;
    float n;
    for(int i =0 ;i<5;i++){
        cin >> a >> c >> n;
        st[i].set(a,c,n);
    }
    int m = st[0].per();
    for(int i=0 ;i<5;i++){
        if(st[i].per() > m)
            m = st[i].per();
            a=i;
    }
    cout << "Student name : " << st[a].st_name() << " with " << st[a].per() << " %" << endl;
    return 0;
}
/*
output
1
Aditya
92.4
21
Aditya
92.4
2
SwaroopKS
95
3
SwaroopRaj
97
4
Tejas
99
5
Tanmay
100
Student name : Tanmay with 100 %
5
3
SwaroopRaj
97
4
Tejas
99
5
Tanmay
100
Student name : Tanmay with 100 %
*/