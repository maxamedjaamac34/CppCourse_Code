//ternary operators
//alternative way to do tests wit hif statement

#include <iostream>


int main(){

std::cout<<"using regular if-statement"<<std::endl;

    int max{};
    int min{};
    int a{10};
    int b{60};

    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    std::cout<<"max : "<<max<<std::endl;

std::cout<<"using ternary expression"<<std::endl;

    max = (a > b) ? a : b; // Ternary operator
    std::cout << "min : " << max << std::endl;
    std::cout << "Finding min : " << std::endl;
	min = (a<b) ? a:b;
    std::cout << "min : " << min << std::endl;


    return 0;

}