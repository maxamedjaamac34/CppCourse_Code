
//math functions
//integral types > 4 bytes in size don't support arithmetic operations

#include <iostream>

int main(){
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << "size of var 1 : " <<sizeof(var1)<<std::endl;
    std::cout << "size of var 2 : " <<sizeof(var2)<<std::endl;
    std::cout << "size of var 3 : " <<sizeof(var3)<<std::endl;
    std::cout << "size of var 4 : " <<sizeof(var4)<<std::endl;

    std::cout<<std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

     std::cout << "size of result1 : " <<sizeof(result1)<<std::endl;
     std::cout << "size of result2 : " <<sizeof(result2)<<std::endl;

    return 0;
}

