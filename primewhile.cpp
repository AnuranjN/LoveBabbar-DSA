#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;

    while(i<n){
        if(n%i==0){
            cout<<"Is not prime for:"<< i << endl;
        }
        else{
            cout<<"Is prime for:"<<i<<endl;
        }
        i=i+1;
    }
    
}