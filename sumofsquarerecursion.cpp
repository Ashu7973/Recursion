//factorial using recursion
#include<iostream>
using namespace std;
int sumSquare(long n){
    if (n==1){
        return 1;
    }
    return (n*n)+sumSquare(n-1);
}
 int main(){
    long n;
    cin>>n;
    long x=sumSquare(n);
        cout<<"sum of square of  n number is:"<<x;
 }