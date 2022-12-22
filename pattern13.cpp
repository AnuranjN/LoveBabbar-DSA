#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A' + count -1;
            cout<<ch;
            count+=1;
        
            col+=1;
        }
    cout<<endl;
    row+=1;    
    }

}