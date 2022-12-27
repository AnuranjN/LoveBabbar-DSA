#include<iostream>
using namespace std;

int arrSUM(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Sum of the elements are: "<<arrSUM(num,size);
}