#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        int ans=a+b;
        cout<<ans<<" ";
        a=b;
        b=ans;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}