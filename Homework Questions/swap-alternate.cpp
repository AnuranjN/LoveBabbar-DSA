#include<iostream>
using namespace std;

void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    swap(arr,size);
    print(arr,size);
}