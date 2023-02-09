#include <iostream>

//Function declaration
int add_num(int num1, int num2){ //what is 'int'?
    int add = num1 + num2;
    return add;
}

int main(){
    //Variables
    int first_num {3};
    int second_num {7};
    
    std::cout<<"First number: "<<first_num<<std::endl; //3
    std::cout<<"First number: "<<second_num<<std::endl; //7

    //Addition of two integers
    int sum = first_num + second_num; //10

    std::cout<<"Sum: "<<sum<<std::endl; //statement

    sum = add_num(5,2); //variable storing 'add' returned from add_num function
    std::cout<<"Sum of add_num function: "<<sum<<std::endl; //statement
    
    std::cout<<"Now, sum of add_num function: "<<add_num(121,212)<<std::endl; //statement without variable insertion
    
    return 0;
}