#include <iostream>
#include <iomanip>

int main(){
    /* //Precision of float, double, & long double

    float n1 {123.4567890f};
    float n2 {987.65432109876543210f};
    double n3 {987.65432109876543210};
    double n4 {123.45678901234567890123};
    long double n5 {987.654321098765432109876L};
    long double n6 {123.45678901234567890123456L};

    std::cout<<std::setprecision(25); //Cotrol the precision to 20 digits
    std::cout<<"float data type: "<<n1<<"\n"<<n2<<"\nsize: "<<sizeof(n1)<<sizeof(n2)<<std::endl; //precision of 8 & 6 digits
    std::cout<<"double data type:"<<n3<<"\n"<<n4<<"\nsize: "<<sizeof(n3)<<sizeof(n4)<<std::endl; //precision of 16 digits
    std::cout<<"long double data type:"<<n5<<"\n"<<n6<<"\nsize: "<<sizeof(n5)<<sizeof(n6)<<std::endl; //precision of 18 & 20 digits
    */


   //Dividing by 0

    float num1 {5.9f};
    float num2 {}; //initialized to 0
    float num3 {}; //initialized to 0
    float num4 {-9.0f};

    double result {num1/num2};

    std::cout<<"5.9/0= "<<result<<std::endl; //infinity
    std::cout<<"5.9/0 + 5.9= "<<result+num1<<std::endl;//infinity

    result=num4/num2;
    std::cout<<"-9/0= "<<result<<std::endl; //-infinity
    std::cout<<"-9/0 + 5.9= "<<result+num1<<std::endl; //-infinity

    result = num2/num3; 
    std::cout<<"0/0= "<<result<<std::endl; //not a number - nan
    std::cout<<"0/0 + 5.9= "<<result+num1<<std::endl; //not a number - nan
    return 0;
}