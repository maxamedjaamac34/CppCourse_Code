// Constants expressions
// evaluated at compile time
//key word constexpr - Constant that may be evaluated at compile time or runtime
//move heavy computations at compile time and reuse it from there. so there is no need to re-evaluate them. 
//it can save time
//at every update, we expect to be able to do more things at compile time
#include <iostream>


int main(){
    constexpr int some_lib_major_version{123};
    constexpr int eye_count {2};

    constexpr double PI {3.14};

   //eye_count =4;

    std::cout<<"eye count  is : "<<eye_count<<std::endl;
    std::cout<<"PI is : " <<PI<<std::endl;
   
   //the following won't work
   // int leg_cout{2}; //non constexpr
    //constexpr int arm_count{leg_cout};

    constexpr int table_count{5};
    constexpr int chair_count{table_count};
    std::cout<<"chair count : "<<chair_count<<std::endl;


    //checking for a given library for given application

    static_assert(some_lib_major_version ==123);
    std::cout<<"app is doing its thing : "<<std::endl;

    //you can only have constexpr inside static_assert
   // int age = 5;
   // static_assert(age ==5);



    return 0;
}