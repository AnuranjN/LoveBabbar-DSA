#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    
    while(row<=n){
        int col=1;
        char ch='A' + n -row;
        while(col<=row){
            
            cout<<ch;
            ch+=1;
        
            col+=1;
        }
    cout<<endl;
    row+=1;    
    }

}