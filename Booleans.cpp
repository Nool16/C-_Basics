#include <iostream>
//#include <string>

//Booleans - True/False
std::string input;
bool red_light; //While initializing mentioning data type is necessary, later on not required
bool green_light;
bool yellow_light;

int main(){
    //Traffic Light with input from user.
    std::cout<<"Red (R), Green (G), or Yellow (Y)?"<<std::endl;
    std::cin>>input;
    std::cout<<std::endl;

    if (input == "R"){
        red_light = true; //When assigning values to already initalized variables, use equal sign, not {} or ()
        green_light = false;
        yellow_light = false;
        std::cout<<"STOP!"<<std::endl;
    }
    else if (input == "G"){
        green_light = true;
        red_light = false;
        yellow_light = false;
        std::cout<<"GO!"<<std::endl;
    }
    else if (input == "Y"){
        yellow_light= true;
        green_light= false;
        red_light= false;
        std::cout<<"WAIT.."<<std::endl;
    }
    else {
        std::cout<<"Invalid input"<<std::endl;
    }
        
    //Printing out a bool; 0 - false, 1 - true
    std::cout<<std::endl; //prints empty line
    std::cout<<"Red Light: "<<red_light<<std::endl;
    std::cout<<"Green Light: "<<green_light<<std::endl;
    std::cout<<"Yellow Light: "<<yellow_light<<std::endl;

    //Printing out true/false
    std::cout<<std::endl; //prints empty line
    std::cout<<std::boolalpha;
    std::cout<<"Red Light: "<<red_light<<std::endl;
    std::cout<<"Green Light: "<<green_light<<std::endl;
    std::cout<<"Yellow Light: "<<yellow_light<<std::endl;

    return 0;
}