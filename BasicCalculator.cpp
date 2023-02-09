#include <iostream>
#include <cmath>
using namespace std;

double num1,num2;
char op;

int main(){
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter operator (+,-,x,/,^,remainder(r)): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;

    if(op=='+'){
        cout<<num1+num2;
    }
    else if(op=='-'){
        cout<<num1-num2;
    }
    else if(op=='x'){
        cout<<num1*num2;
    }
    else if(op=='/'){
        cout<<num1/num2;
    }
    else if(op=='^'){
        cout<<pow(num1,num2);
    }
    else{
        cout<<"Not possible";
    }
    return 0;
}