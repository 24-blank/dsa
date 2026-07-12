#include<iostream>
using namespace std;

int fibo(int n){
    if (n<=1) return n;
    return fibo(n-2)+fibo(n-1);
}
// execessive recursion... TC = 2^n (expo)------------

int F[10];
int fib(int n){
    if (n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        }
        return F[n-2] + F[n-1];
    }
}
// memoization... TC = n (linear)------------------------

int main(){

    return 0;
}