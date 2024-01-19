//Precedence and Associativity
//Precedence tells which operation to do first
//Associativity tells which direction to do it
#include <iostream>
int main(){
    
    int a{6};
    int b {3};
    int c {8};
    int d{9};
    int e {3};
    int f {2};
    int g {5};
    int result = a + b * c - d/e -f + g;
    std::cout<<"the result of a + b * c - d/e -f + g : "<<result<<std::endl;
    result = a/b * c + d - e + f;
    std::cout<<"the result of a/b * c + d - e + f : "<<result<<std::endl;
    std::cout<<std::endl;

    //forcing the compiler to break the precedence table using parentheses
    result = (a + b) * c - d/e -f + g;
    std::cout<<"the result of (a + b) * c - d/e -f + g : "<<result<<std::endl;
    
    return 0;
}
