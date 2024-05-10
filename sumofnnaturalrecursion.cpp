//factorial using recursion
#include<iostream>
using namespace std;
int sum(long n){
    if (n==1){
        return 1;
    }
    return n+sum(n-1);
}
 int main(){
    long n;
    cin>>n;
    long x=sum(n);
        cout<<"sum of n number is:"<<x;
 }