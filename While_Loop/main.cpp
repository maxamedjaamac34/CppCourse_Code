//while loop
//Iterator
//Starting point
// test(controls when the loop stops)
//increment (decrement)
//loop body
//access the value and use it right away. 
//you avoid the overhead of setting up an iterator, starting point, test for end, do incrementation etc
//really work on collection types


#include <iostream>

int main(){

const unsigned int count{10};
unsigned int i {0};
while (i<count){
    ++i;
    if (i%2==0){
        std::cout<<"I love c++ "<<i<<std::endl;// prints the statement 5 times cause there is 5 even mumbersd
    }
    //std::cout<<"I love c++ "<<i<<std::endl;
}

    return 0;
}