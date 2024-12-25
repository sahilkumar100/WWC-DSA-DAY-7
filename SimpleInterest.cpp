#include<iostream>
using namespace std;

int main(){
    float principal, rate, time, SimpleInterest;

    cout<< "Enter the principal: ";
    cin>>principal;

    cout<< "Enter the Rate: ";
    cin>>rate;

    cout<< "Enter the Time: ";
    cin>>time;

    SimpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << SimpleInterest << endl;

    return 0;
}







