#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[],int n){
    int i=0,j=n,k=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }

}
int main(){
    int arr[6]={0,1,1,0,0,1};
    sortArray(arr,6);
    printArray(arr,6);
}