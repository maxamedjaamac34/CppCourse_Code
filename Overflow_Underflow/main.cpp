// overflow and underflow
//when we put more than a variable can handle or less it handles
//overflow happens when you go down and hit 0. then if you move to -1, the systems flips and goes to 256, 255, 254....
#include <iostream>


int main(){

    //overflow
    unsigned char data{250};
    ++data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;
    ++data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;
    ++data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;
    ++data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;
    ++data;
    std::cout<<"data is : "<<std::dec<<static_cast<int>(data)<<std::endl; //255
    ++data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl; //256

    //underflow
    data =1;
    --data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;
    --data;
    std::cout<<"data is : "<<static_cast<int>(data)<<std::endl;

    //char value{300};does not work cause char cannot be narrowed to -1
    //std::cout<<value;
/*
    unsigned char val1{140};
    unsigned char val2{150};

    unsigned char sum = val1 + val2;
    std::cout<<char_var<<std::endl;
*/
    return 0;
}