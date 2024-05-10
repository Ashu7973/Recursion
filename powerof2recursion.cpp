//factorial using recursion
#include<iostream>
using namespace std;
int power(long n){
    if (n==0){
        return 1;
    }
    return 2*power(n-1);
}
 int main(){
    long n;
    cin>>n;
    long x=power(n);
        cout<<"power of n number of 2 is:"<<x;
 }