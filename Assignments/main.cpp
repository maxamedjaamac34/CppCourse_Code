//Assignments

#include <iostream>
int main(){
    int value {23};

    std::cout<< "the initial nalue is : " <<value<<std::endl;
    
    //reassign value to something else, but it has to be same type

    value = 45;

    std::cout<< "the new nalue is : " <<value<<std::endl;

    std::cout<<std::endl;

    std::cout<<"-----------"<<std::endl;

    double var2{44.55}; //declare and initialize
    std::cout<<"the value of var2 is : "<<var2<<std::endl;

    //reassign

    var2 = 99.99;

    std::cout<<"the new value of var2 is : "<<var2 <<std::endl;
    std::cout<<std::endl;


    std::cout<<"-----------"<<std::endl;
    //let's do reassigning variables for booleans

    bool state{false}; //declare and initialize
    std::cout<<std::boolalpha; // if we comment this out, output will be 0 and 1
    std::cout<<"state is :" <<state<<std::endl;
    state = true;
    std::cout<<"the new value for state is : "<<state<<std::endl;

    return 0;
}