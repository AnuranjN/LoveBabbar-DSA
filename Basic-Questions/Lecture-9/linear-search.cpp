#include<iostream>
using namespace std;

bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
        
    }
    return 0;

}

int main(){
    int arr[10]={2,4,6,8,10,1,5,3,11,12};
    //Enter element to check
    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if(found){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is absent"<<endl;
    }
    
}