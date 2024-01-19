//Basic Operations

#include <iostream>
int main(){
    //Addition

    int number1{2};
    int number2{7};

    int result = number1 + number2;

    std::cout<<"the addition of 2 and 7 is : "<<result<<std::endl;
    
    //Subtraction 
    result = number1 - number2;
    std::cout<<"the difference of 2 and 7 is :"<<result<<std::endl;
    
    //Multiplicatoin

    result = number1 * number2;
    std::cout<<"the product of 2 and 7 is :"<<result<<std::endl;
    
    //Division

    result = number2 / number1;
    std::cout<<"the quotient of 7/2 is :"<<result<<std::endl;
    

    //Reminders/ modulus

    result = number2 % number1;
    std::cout<<"the remainder of 7/2 is :"<<result<<std::endl;
    
    result = 32 % 10;
    std::cout<<"the remainder of 31/10 is :"<<result<<std::endl;
    
    return 0;
}
