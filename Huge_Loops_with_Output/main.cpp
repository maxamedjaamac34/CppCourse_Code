//loops
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
    for(size_t i{0} ; i < 10000 ; ++i){
        std::cout << "i : " << i << std::endl; //now time is significantly shorter
    }
    std::cout << "Done!" << std::endl;

/*
   size_t i{0}; // Iterator

   while(i < 100000){
        //std::cout << "i : " << i << std::endl;
        ++i;
   }
   std::cout << "Done!" << std::endl;
*/
    return 0;
}
