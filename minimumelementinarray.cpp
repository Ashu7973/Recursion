#include<iostream>
using namespace std;
int minelement(int arr[],int size,int index){
    if(index==size-1){
        return arr[index];
    }
    return min(arr[index],minelement(arr,size,index+1));
}
int main()
{
    int arr[]={7,2,4,1,6,0};
    int size=6;
    int index=0;
    int x=minelement(arr,size,index);
    cout<<"The minimum element in this arrays is: "<<x;
}