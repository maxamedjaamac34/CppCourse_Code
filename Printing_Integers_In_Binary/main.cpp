//printing integers in binaries

#include <iostream>
#include <bitset>

int main(){
unsigned short int data {15};

    std::cout<<"data (dec) : " <<std::dec <<data<<std::endl;
    std::cout<<"data (oct) : " <<std::oct <<data<<std::endl;
    std::cout<<"data (hex) : " <<std::hex <<data<<std::endl;

    //show the base

    std::cout<<"data (dec) : " <<std::showbase<<std::dec <<data<<std::endl;
    std::cout<<"data (oct) : " <<std::showbase<<std::oct <<data<<std::endl;
    std::cout<<"data (hex) : " <<std::showbase<<std::hex <<data<<std::endl;
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    return 0;
}