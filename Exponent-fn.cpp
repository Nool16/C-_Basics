#include<iostream>
using namespace std;

//This fn cant be used to find decimal exponents or negative integers of number, ie. x^2.33434, y^-0.2323, etc.)
//Will try to make a function like that once I understand more
//Gives result upto precision of upto 6 digits.
double expo(double basenum, int powernum){
    double result=1;
    for(int i=0; i<powernum; i++){
        result = result*basenum;
    }
    return result;
}
int main(){
    double basenum;
    int powernum;
    cout<<"Enter base number: ";
    cin>>basenum; 
    cout<<"Enter power number: ";
    cin>>powernum;
    cout<<expo(basenum,powernum); 
    return 0;
}
 /*
if you input a decimal power number; the power number will get rounded off to the closest smaller integer, ie 3.998 => 3
 If you input negative umbers, they get converted to 0
 */