//continit
//constinit is keyword used to say that variable should be initialized at compile time
//consinit does not imply constant
//can only be applied variable with static or thread storage duration
//you can't declare something in the main function and mark it with constinit = you get compile error
//helps help solve problems with the order of initialization of global variables ouside the main function
//constinit and const can be combined
//constinit and constexpr can't be combined
//const init does not imply that variable is const
#include <iostream>
const int val1{33};
constexpr int val2{34};
int val3 {35};//runtime value casue we know it when program runs

constinit int age = 88;
const constinit int age1 {val1}; //const and constinit can be conbined
constinit int age2 {age1}; //initializing with age would lead to a compiler error
                            // age is not const
//constinit int age3 {val3}; //error : val3 is not evaluated at run time
                            //can't const initialize age3                           

const constinit double weight{33.33};
//constexpr constinit double scale_factor{3.11}; //can't combine constexpr and constinit



int main(int argc, char ** argv)
{
    //constinit double height{73.2}; //cannot declare global variable locally
    std::cout<<"age : "<<age<<std::endl;
    std::cout<<"age1 : "<<age1<<std::endl;
    std::cout<<"age2 : "<<age2<<std::endl;
    age = 33; //can change a const init variable because it does not imply const
    std::cout<<"age : "<<age<<std::endl;

    //conbining const and constinit
    std::cout<<"weight : " <<weight<<std::endl;
    //weight = 44.44; //compiler error
    
    //constinit int age4{41}; //compiler error : not static or thread local storage
    


    return 0;
}