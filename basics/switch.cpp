#include <iostream>
using namespace std;
int main(){
    cout<<"Achhhhaaaaaaaaaaaa"<<endl;
    //------------infinte loop me switch hai, bina break use kiye bahar kaise aaye??
    //switch me continue trialllllllllll
    char operation;
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Operation to perform: ";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    case '%':
        cout<<num1%num2;
        break;
    default:
        cout<<"Brrruuuhhhhh.";
        break;
    }
}