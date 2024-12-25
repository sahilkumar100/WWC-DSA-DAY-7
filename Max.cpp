#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<< "Enter Two number: ";
    cin>>n >>i;

    if(n>i){
        cout<< n <<"The number is greater than "<<i<<endl;
    }
    else if(n<i){
        cout<< n <<"The number is less than "<<i<<endl;
        }
        else{
            cout<< n << "is equal to "<<i<< endl;
        }
    return 0;
}