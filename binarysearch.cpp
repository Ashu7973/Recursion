#include<iostream>
using namespace std;
int bsearch(int arr[],int end,int s,int target){
    int mid=(s+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(s>end){
        return -1;
    }
    if(arr[mid]>target){
        return bsearch(arr,mid-1,s,target);
    }else{
        return bsearch(arr,end,mid+1,target);
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=5;
    int x=bsearch(arr,size,0,60);
    cout<<x;
}