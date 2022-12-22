#include<iostream>
using namespace std;

int main(){
    int row=1;
    int n;
    cin>>n;

    while(row<=n){
        //space print
        int space=n- row;
        while(space){
            cout<<" ";
            space-=1;
        }
        // print 1st triangle karlo
        int col=1;

        while(col<=row){
            
            cout<<col;
            col+=1;
        }
        //third triangle
        int start=row-1;
        while(start){
            cout<<start;
            start=start-1;
    }
    
        cout<<endl;
        row+=1;    
    }
}