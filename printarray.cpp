#include<iostream>
using namespace std;
void print(int arr[],int size){
    if(size==-1){
        return;
    }
    print(arr,size-1);
    cout<<arr[size]<<" ";
}
int main(){
    int arr[]={3,7,6,2,8};
    int size=5;
    print(arr,size-1);
}