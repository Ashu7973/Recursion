//factorial using recursion
#include<iostream>
using namespace std;
int factorial(long n){
    if (n==1){
        return 1;
    }
    return n*factorial(n-1);
}
 int main(){
    long n;
    cin>>n;
    long x=factorial(n);
        cout<<"Factorial of given number is:"<<x;
 }