#include <iostream>

int main(){

// Standard arithmetic operations (+,-,*,/,%)
int n1 {31};
int n2 {21};
float n3 {11};
float n4 {7};
std::cout<<"Standard Arithmetic Operations"<<std::endl;
std::cout<<std::endl;
std::cout<<"Add: "<<n1+n2<<std::endl;
std::cout<<"Subtract: "<<n1-n2<<std::endl;
std::cout<<"Multiply: "<<n1*n2<<std::endl;
std::cout<<"Divide: "<<n1/n2<<std::endl; //when doing integer division, no decimals are shown
std::cout<<"Modulus: "<<n1%n2<<std::endl; //gives out remainder when done with integers
std::cout<<std::endl;
std::cout<<"Fractional number division: "<<n3/n4<<std::endl;

//Relational Operators (<,>,==,!=)
std::cout<<std::endl;
std::cout<<"-----------------------------------------------------------------"<<std::endl;

std::cout<<std::endl;
std::cout<<"Relational Operators"<<std::endl;
std::cout<<std::endl;

std::cout<<std::boolalpha;
std::cout<<"Is n1<n2? "<<(n1<n2)<<std::endl;
std::cout<<"Is n1<=n2? "<<(n1<=n2)<<std::endl;
std::cout<<"Is n1>n2? "<<(n1>n2)<<std::endl;
std::cout<<"Is n1>=n2? "<<(n1>=n2)<<std::endl;
std::cout<<"Is n1==n2 (ie. equal to)? "<<(n1==n2)<<std::endl;
std::cout<<"Is n1!=n2 (ie. not equal to)? "<<(n1!=n2)<<std::endl;

std::cout<<std::endl;
std::cout<<"Comparing and storing the result for later use"<<std::endl;
bool tof {n1<n2};
std::cout<<"Is n1<=n2? "<<tof<<std::endl;

//Precedence & Associativity

/*Precedence - which operatio has more precedence, ie. more priority?
Associativity - used when two operators of same precedence appear in an expression; left to right or right to left?
All operators of same precedence have same direction of associativity (eg: 3*5/2, here * and / have same precedence but * has higher associativity (L to R); hence ans is 15/2 = 7.5)
*/
std::cout<<std::endl;
std::cout<<"-----------------------------------------------------------------"<<std::endl;
std::cout<<std::endl;
std::cout<<"Precedence & Association"<<std::endl;
std::cout<<"Result= "<<(100+200)/10*3/((2-3)*10)-2<<std::endl; 
/*  #1- 300/10*3/((2-3)*10)-2
    #2- 300/10*3/(-1*10)-2
    #3- 300/10*3/(-10)-2
    #4- 30*3/(-10)-2 
    #5- 90/(-10)-2
    #6- -9-2
    #7- -11
    */

//Regular/pre/postfix increment/decrement
std::cout<<std::endl;
std::cout<<"-----------------------------------------------------------------"<<std::endl;
std::cout<<std::endl;
std::cout<<"Increment & Decrement"<<std::endl;

//Regular

int val = 5;
val = val + 1;
std::cout<<std::endl;
std::cout<<"Initial value = 5"<<std::endl;
std::cout<<"Regular operation (+1)"<<std::endl;
std::cout<<val<<std::endl;

val = 5;
val = val - 1;
std::cout<<"Regular operation (-1)"<<std::endl;
std::cout<<val<<std::endl;

//Postfix
val = 5;
std::cout<<std::endl;
std::cout<<"Postfix operation (+1)"<<std::endl;
std::cout<<val++<<std::endl;
std::cout<<val<<std::endl;

val = 5;
std::cout<<"Postfix operation (-1)"<<std::endl;
std::cout<<val--<<std::endl;
std::cout<<val<<std::endl;

//Prefix

val = 5;
std::cout<<std::endl;
std::cout<<"Prefix operation (+1)"<<std::endl;
std::cout<<++val<<std::endl;

val = 5;
std::cout<<"Prefix operation (-1)"<<std::endl;
std::cout<<--val<<std::endl;


//Compound Operations

val= 5;
std::cout<<std::endl;
std::cout<<"-----------------------------------------------------------------"<<std::endl;

std::cout<<"Compound Operations"<<std::endl;
std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl;//have to put up brakets to avoid precedence related errors with <</>>
std::cout<<"5+2="<<(val+=2)<<std::endl;

std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl; 
std::cout<<"7-3= "<<(val-=3)<<std::endl;

std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl; 
std::cout<<"4*2= "<<(val*=2)<<std::endl;

std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl; 
std::cout<<"8/3= "<<(val/=3)<<std::endl;

std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl;
std::cout<<"2 % 2= "<<(val%=2)<<std::endl;

std::cout<<std::endl;
std::cout<<"val is now: "<<val<<std::endl;

//Logical Operators - &&-->AND, !-->NOT, ||-->OR
std::cout<<std::endl;
std::cout<<"-----------------------------------------------------------------"<<std::endl;

std::cout<<std::endl;
std::cout<<"Logical Operators"<<std::endl;
std::cout<<std::endl;

bool a{true};
bool b{false};
bool c{true};
std::cout<<std::boolalpha;
std::cout<<"a: "<<a<<std::endl;
std::cout<<"b: "<<a<<std::endl;  
std::cout<<"c: "<<a<<std::endl; 

std::cout<<std::endl;
std::cout<<"AND"<<std::endl;
std::cout<<"a && b: "<<(a&&b)<<std::endl;
std::cout<<"a && c: "<<(a&&c)<<std::endl;
std::cout<<"b && c: "<<(b&&c)<<std::endl;
std::cout<<"a && b && c: "<<(a&&b&&c)<<std::endl;

std::cout<<std::endl;
std::cout<<"OR"<<std::endl;
std::cout<<"a || b: "<<(a||b)<<std::endl;
std::cout<<"a || c: "<<(a||c)<<std::endl;
std::cout<<"b || c: "<<(b||c)<<std::endl;
std::cout<<"a || b || c: "<<(a||b||c)<<std::endl;

std::cout<<std::endl;
std::cout<<"NOT"<<std::endl;
std::cout<<"!a: "<<(!a)<<std::endl;
std::cout<<"!b: "<<(!b)<<std::endl;
std::cout<<"!c: "<<(!c)<<std::endl;

std::cout<<std::endl;
std::cout<<"Combining AND, NOT, & OR"<<std::endl;
std::cout<<"(!(!(a&&b)||c)&&(!b)): "<<(!(!(a&&b)||c)&&(!b))<<std::endl; //False
return 0;
}