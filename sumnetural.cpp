#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a posotive number:";
    cin>>n;

    if(n>0){
        int sum = n * (n+1)/2;
        cout<< "The sum of all the natural from 1 to " <<n<<" is:" <<sum << endl;
        }else{
            cout<< "Please enter a positive integer."<<endl;
        }
        return 0;
    }
