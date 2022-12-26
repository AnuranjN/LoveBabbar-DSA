//Sample Program of using functions with array

#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int animal[15]={1,2,3};
    printArray(animal,15);
}