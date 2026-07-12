#include<iostream>
using namespace std;

int sumOfN(int n){
    static int sum{};
    if(n>0){
        sum+=n;
        sumOfN(n-1);
    }
    return sum;
}

int sumofn(int n){
    if(n==0) return 0;
    else return sumofn(n-1)+n;
}

int fact(int n){
    if (n==0) return 1;
    else return fact(n-1)*n;
}

int pow(int m, int n){
    if (n==0) return 1;
    return pow(m,n-1)*m;
}

int main(){
    // int r=pow(2,3);
    cout<<pow(2,6);
    return 0;
}