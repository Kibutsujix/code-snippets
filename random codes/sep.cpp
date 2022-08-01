#include<bits/stdc++.h>
using namespace std;
#define size 20
int main(){
    int arr[size],neg=0,zero=0,pos=0,n,ch;
    cout << "Enter number of elements : "; cin >> n;
    cout << "Enter array elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> ch;
        if(ch > 0){
            pos += 1;
            arr[i] = ch;
            continue;
        }
        else if(ch < 0){
            neg += 1;
            arr[i] = ch;
            continue;
        } 
        else{
            zero += 1;
            arr[i] = ch;
            continue;
        }
    }
    // built in sort function T(N) = N log(N)
    sort(arr,arr + n);

    // displaying the numbers separately
    if(neg > 0)
    {
        cout << "Negative numbers : " << endl;
        for(int i=0;i<neg;i++){
            cout << "" << arr[i] << " ";
        }
        cout << endl;
    }
    if(zero > 0){
        cout << "Zeroes : " << endl;
        for(int i=neg;i< neg+zero;i++){
            cout << "" << arr[i] << " ";
        }
        cout <<endl;
    }

    if(pos > 0){
        cout << "Positive numbers : " << endl;
        for(int i=neg+zero;i<n;i++){
            cout << "" << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}