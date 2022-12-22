#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;

    while(row<=n){
        //
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col+=1;
        }
        
        //print star1
        int star1=row-1;
        while(star1){
            cout<<"*";
            star1=star1-1;
        }

        //print star2
        int star2=row-1;
        while(star2){
            cout<<"*";
            star2=star2-1;
        }



        //third triangle
        int cols=1;
        while(cols<=n-row+1){
            cout<<n-row-cols+2;
            cols+=1;
        }
    
    cout<<endl;
    row+=1;
    }    
    
}