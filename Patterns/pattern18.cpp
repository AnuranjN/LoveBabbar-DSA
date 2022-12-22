#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;

    while(row<=n){
        /*//space print
        int space=n- row;
        while(space){
            cout<<"*";
            space-=1;
        }*/
        //stars print karlo
        int col=1;

        while(col<=n-row+1){
            
            cout<<"*";
            col+=1;
        }
    cout<<endl;
    row+=1;    
    }
}