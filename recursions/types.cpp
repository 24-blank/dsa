#include<iostream>
using namespace std;

// TAIL RECURSION-----------------
void tail(int n){
    if(n>0){
        cout<<n<<" ";
        tail(n-1);
    }
}

// HEAD RECURSION-----------------
void head(int n){
    if(n>0){
        head(n-1);
        cout<<n<<" ";
    }
}

// TREE RECURSION-----------------
void tree(int n){
    if(n>0){
        cout<<n<<" ";
        tree(n-1);
        tree(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    tail(n);
    cout<<endl;
    head(n);
    cout<<endl;
    tree(n);
    return 0;
}