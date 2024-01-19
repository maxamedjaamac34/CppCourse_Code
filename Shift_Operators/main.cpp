//Shift operators
//operators that allow you to shift bits right or left
//00111 to 01110
//once you throw off one piece of bits, you can't get it back. 
//data is lost permanently
//bitshit supports integral types like int, char
//bitshifting doesn't support types that its size is less than int
#include <iostream>
#include <bitset>

int main(){
    unsigned short int value {0xff0u};

    std::cout<<"size of short in : " <<sizeof(short int) <<std::endl; //16 bits
    std::cout<< "value : "<<std::bitset<16>(value)<< ", dec : "<<value<<std::endl;

    // auto val=(value >>1); here the compiler takes the value which has short int type and will make it an int because it cannot do anythign less than int
    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;
    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;
    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;

    //Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;

    //shift by multiple bits in one go

    //Shift right by 4 bits
    value = static_cast<unsigned short int>(value >>4);
    std::cout << "value : " << std::bitset<16>(value)<< ", dec : " << value << std::endl;

    //don't confuse the compiler if you execute bit shifts inside the cout function
    std::cout<<"value : " <<(value>>1)<<std::endl;
    return 0;
}