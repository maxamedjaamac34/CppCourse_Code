//If constexpr
//allows us to do conditional programming at compile time
//computational has already been done in our compiler. so it saves time. 
//the branch that fails will be eliminated at compile time

#include <iostream>
int main(){

    constexpr bool condition{true};
    if constexpr (condition){
        
        std::cout<<"condition is true : "<<std::endl; //this branch will be eliminated at compile time
    }
    else{
        std::cout<<"condition is not true"<<std::endl;
    }

    //look up compile time programming

    return 0;
}