//Literals and Constants
// data that is direced represented in code without going through some other variable stored in morey
//const = a read only variable, can't assign data to it. 
//sonstexpr = says that a variable can be evaluated at compile time
// consstinit = a variable should initialized with a constant or literal at compile time


#include <iostream>

int main(){
    
    //summary at the end

    /*Data that is directly represented in code without going through some other variable stored in memory
    Constant is a varialbe that you can initialize but cant change afterwards
    That protects you from changing things that shouldn't be changed in your program
    keywords that allows you to do things at compile time.
    constexpr- implies consinit so you can't modify it at runtime
    static_assert() -compile time checks. can only have constant expressions inside the parenthesis
    constinit - something should be initialized at compile time. does not imply constants
    you can't use the constinit keyword inside the main functoin, if you do, it gives you compile error.
    */
    return 0;
}