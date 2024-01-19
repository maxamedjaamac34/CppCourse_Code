//Number systems

#include <iostream>

int main(){
    
    int number1 = 15; //decimal
    int number2 = 017; //octal
    auto number3{0x0f}; //hexadecimal and 'auto' sets type to int/number automatically
    int number4 = 0b00111111; //binary

    std::cout<<"number1 is " <<number1<<" in decimal"<<std::endl;
    std::cout<<"number2 is " <<number2<<" in octal"<<std::endl;
    std::cout<<"number3 is " <<number3<<" in hexadecimal"<<std::endl;
    std::cout<<"number4 is " <<number4<<" in binary form"<<std::endl;
    return 0;
}