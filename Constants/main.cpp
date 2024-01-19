//contstants
// A variable that you can initialize but can't change it afterwards, otherwise you get compiler error
// const qualifier applies to the variable name you using to manipulate data in memory
//it does not apply to 0's and 1's in memory
//concept of cons only lives in your cpp program. used and understood by the compiler
// protection is not at the memory level but at the cpp program level
//why? to generate a variable that cannot be changed throughout the lifetime of our cpp program
#include <iostream>


int main(){
    const unsigned int earth_radius{6371};
    std::cout<<earth_radius;
    return 0;
}