//compound assignment operators

#include <iostream>
int main(){
    int value {45};
    
    std::cout<< "the value is : "<<value<<std::endl;

    std::cout<<std::endl;

    value +=5; //equivalent to value = value +5
    //value = value +5;
    std::cout<< "the value is (after +=5): " <<value<<std::endl; //prints 50

    //subtraction version

    value -=5;//equivalent to value = value +5
    std::cout<<"the value is (after value -=5); "<<value<<std::endl;

    std::cout<<std::endl;

    value *=2;//equivalent to value = value *2
    std::cout<<"the value is (after value *=2); "<<value<<std::endl;


    std::cout<<std::endl;

    value /=3;//equivalent to value = value /3
    std::cout<<"the value is (after value /=3); "<<value<<std::endl;
    
    std::cout<<std::endl;

    value %=11;//equivalent to value = value %11
    std::cout<<"the value is (after value %=11); "<<value<<std::endl;
    return 0;
}
