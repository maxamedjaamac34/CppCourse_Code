//comma operator
//grouping multiple expressions and treating them as one
// left associative - means it's read from left to right.
#include <iostream>
    
int main(){

    return 0;
    int increment{5};
    int number1{10};
    int number2{20};
    int number3{25};
    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);
    std::cout<<"number 1 : "<<number1<<std::endl;
    std::cout<<"number 2 : "<<number2<<std::endl;
    std::cout<<"number 3 : "<<number3<<std::endl;
    std::cout<<"result : "<<result<<std::endl;
    


    return 0;
}