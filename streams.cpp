//cout vs cerr vs clog
#include <iostream>

int age;
std::string name;
std::string full_name;

int main(){
    /*
    //Printing to the console
    std::cout<<"Enter name: "<<std::endl;
    std::cin>> name;

    std::cout<<"Enter age: "<<std::endl;
    std::cin>> age;
    
    std::cout<<"Hello "<< name <<". You are "<< age <<" years old."<<std::endl;
    
    //Error
    std::cerr<<"std::cerr output: Something went wrong"<<std::endl;

    //Log message
    std::clog<<"std::clog output: This is a log message"<<std::endl;

    */

   std::cout<<"Enter full name and age: "<<std::endl;

   std::getline(std::cin,full_name);
   std::cin>>age;

   std::cout<<"Hello "<<full_name<<". You are "<<age<< " years old."<<std::endl;
   return 0;
}   
