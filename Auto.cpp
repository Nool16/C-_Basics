#include <iostream>

int main(){
    auto v1 {10};
    auto v2 {2.9};
    auto v3 {2.9f};
    auto v4 {2.9l};
    auto v5 {2.9e10};
    auto v6 {123u};
    //auto v7 {-12s}; suffix for unsigned?
    auto v8 {-12};
    //auto v9 {12.3uf};
    auto v10 {123ul};
    auto v11 {123ll};

    std::cout<<sizeof(v1)<<std::endl; // i
    std::cout<<sizeof(v2)<<std::endl; // d
    std::cout<<sizeof(v3)<<std::endl; // f
    std::cout<<sizeof(v4)<<std::endl; // e
    std::cout<<sizeof(v5)<<std::endl; //d
    std::cout<<sizeof(v6)<<std::endl; //j
    //std::cout<<sizeof(v7)<<std::endl;
    std::cout<<sizeof(v8)<<std::endl; //i
    //std::cout<<sizeof(v9)<<std::endl;
    std::cout<<sizeof(v10)<<std::endl; //m
    std::cout<<sizeof(v11)<<std::endl; //x

    return 0;
}