#include<iostream>
using namespace std;

double recTaylor(int x, int n){
    static double p=1, f=1;
    int r;
    if (n==0) return 1;
    else{
        r = recTaylor(x,n-1);
        p*=x;
        f*=n;
        return r + (p/f);
    }
}

double loopTaylor(int x,int n){
    double s=1;
    for(;n>0;n--){
        s = 1 + (x/n)*s;
    }
    return s;
}

int main(){
    cout<<recTaylor(2,5);
    return 0;
}