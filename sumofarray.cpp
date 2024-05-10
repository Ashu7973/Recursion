#include<iostream>
using namespace std;
int print(int arr[],int size,int index){
   // int sum=0;
    if(size==index){
        return 0;
    }
   return arr[index]+print(arr,size,index+1);
    
}
int main(){
    int arr[]={3,7,6,2,10};
    int size=5;
    int sum=print(arr,size,0);
    cout<<"The sum of element in array is: "<<sum;
}