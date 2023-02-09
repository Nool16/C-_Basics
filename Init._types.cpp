/*
Initialization types: Braced initialization, Functional Initialization, Assignment initialization

syntax:
data_type variable_name {value} //Braced
data_type variable_name (value) //Functional
data_type variable_name = value //Assignment
*/

#include <iostream>

int main(){
    int num1 {5};
    int num2 (6);
    int num3 = 7;
    
    //Narrowing conversion 
    //int num4 {5.5}; - Compile error 
    int num5 (5.7); // num5 = 5
    int num6 = 5.8; // num6 = 5
    

    int sum {num1+num2+num3};
    std::cout<<sum<<std::endl;
    //std::cout<<num4<<std::endl;
    std::cout<<num5<<std::endl;
    std::cout<<num6<<std::endl;
    
    std::cout<<"size of sum: "<<sizeof(sum)<<std::endl;
    std::cout<<"size of int: "<<sizeof(int)<<std::endl;
    std::cout<<"size of num1: "<<sizeof(num1)<<std::endl;
    std::cout<<"size of num2: "<<sizeof(num2)<<std::endl;
    std::cout<<"size of num3: "<<sizeof(num3)<<std::endl;
    //std::cout<<"size of num4: "<<sizeof(num4)<<std::endl;
    std::cout<<"size of num5: "<<sizeof(num5)<<std::endl;
    std::cout<<"size of num6: "<<sizeof(num6)<<std::endl;

    return 0;
}