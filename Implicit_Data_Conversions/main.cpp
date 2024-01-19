// Implicit Data conversion
//conversons that happenn without your involvement. done by the compiler
//conversions always go from smallest to biggest unless we do assignment
#include <iostream>


int main(){
    double price {45.6};
    int units {10};

    auto total_price = price * units;

    std::cout<<"Total price : " <<total_price<<std::endl;
    std::cout<< "the size of total_price : " <<sizeof(total_price)<<std::endl;



    int x;
    double y {45.44};

    x=y; //conversion goes from right to left. so it will be int this time
    std::cout<<"the value of x : "<<x<<std::endl;
    std::cout<<"the size of x "<<sizeof(y);
    




    return 0;
}