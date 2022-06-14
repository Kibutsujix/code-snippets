#include<bits/stdc++.h>
using namespace std;
class exam{
    private:
    float phy,chem,math;
    public:
    void read_data(){
        cout << "Input P,C,M marks : " << endl;;
        cin >> phy >> chem >> math;
    }
    void total(exam PU,exam CT){
        phy = PU.phy + CT.phy;
        chem = PU.chem + CT.chem;
        math = PU.math + CT.math;
    }
    void display(){
        cout << "Physics : " << phy << endl;
        cout << "Chemistry : " << chem << endl;
        cout << "Mathematics : " << math << endl;
    }
};

int main(){
    exam PU,CET,PC;
    cout << "Enter PUC marks : ";
    PU.read_data();
    cout << "Enter CET marks : ";
    CET.read_data();
    PC.total(PU,CET);
    cout << "Total marks : " << endl;
    PC.display();
    return 0;
}
/*
Enter PUC marks : Input P,C,M marks : 
40 45 43
Enter CET marks : Input P,C,M marks : 
45 46 47
Total marks : 
Physics : 85
Chemistry : 91
Mathematics : 90
*/