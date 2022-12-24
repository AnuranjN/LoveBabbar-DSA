#include<iostream>
#include<math.h>
using namespace std;

int bitconverter(int n){
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans=ans+bit*pow(10,i);
        n=n>>1;
        i=i+1;
        
    }
    return ans;
}
int bitcounter(int n){
    int ans=0;
    int num=bitconverter(n);
    while(num!=0){
        int digit=num%10;
        if(digit==1){
            ans=ans+digit;
        }
        num=num/10;
    }
    return ans;

    return num;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans=bitcounter(a) + bitcounter(b);
    cout<<"answer is "<<ans;
    
    
}