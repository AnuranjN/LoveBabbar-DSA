//program to find max and min element in a array

#include<iostream>
using namespace std;

int getMAX(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMIN(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}
int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum element is: "<<getMAX(num,size)<<endl;
    cout<<"Minimum element is: "<<getMIN(num,size)<<endl;
}