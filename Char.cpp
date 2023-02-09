#include <iostream>

int main(){
    char c1 = 'a'; //char values are inserted under single quotes ''
    char c2 = 'b';
    char c3 = 'c';

    std::cout<<"c1: "<<c1<<std::endl;
    std::cout<<"c2: "<<c2<<std::endl;
    std::cout<<"c3: "<<c3<<std::endl;

    //char data type occuppies 1 byte = 8 bits, ie. 2^8 = 256
    //According to the ASCII table, char data type can store 256 number values (0-255) that correspond to different characters
    c1 = 65;
    c2 = 66;
    std::cout<<"65 represents: "<<c1<<std::endl;
    std::cout<<"66 represents: "<<c2<<std::endl;
    std::cout<<"ASCII of char A: "<<static_cast<int>(c1)<<std::endl;
    std::cout<<"ASCII of char B: "<<static_cast<int>(c2)<<std::endl;
    
    //Arithmetic using char
    c1=65;
    c2=62;
    //char c3(c1+c2);
   // std::cout<<"Add: "<<c1<<"+"<<c2<<"="<<char(c1+62)<<std::endl; This doesnt work..will come back to it later 
    return 0;

}