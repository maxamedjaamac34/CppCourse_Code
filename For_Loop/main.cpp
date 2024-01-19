//For loop
//iterator i{10} - starter
//starting point
//incrementation/decrementation 

#include <iostream>

int main(){


    for (unsigned int i{0}; i<11; ++i){
        std::cout<<i<<std::endl;
    }
    
    for(size_t x{0};x<10; ++x){
        std::cout<<x<<std::endl;
    }

    size_t y=0; // Iterator defined outside

    for(y ; y < 10 ; ++y){
        std::cout << y << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "y : " << y << std::endl;

    std::cout<<"Define iterator"<<std::endl;
    const size_t COUNT{100};

    for(size_t n{0} ; n < COUNT ; ++n){
        std::cout << n << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
   
    return 0;

    unsigned int sum_up_to_99 = 0;
    unsigned int sum_total = 0;
   for (unsigned num = 0; num < 100; ++num) {
        sum_total  += num;
    }
    std::cout<<"sum is " <<sum_total<<std::endl;

    return 0;
}