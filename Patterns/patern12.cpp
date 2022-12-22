#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char row=1;
    
    int count=0;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch= 'A' + count;
            cout<<ch;
            count=count+1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}