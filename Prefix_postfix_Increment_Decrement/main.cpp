//prefix, postfix, increment, decrement
// postfix or prefix can only increment or decrement by one
#include <iostream>
int main(){
    
    //increment

    int value {5};
    //increment by one
    value = value + 1;//6
    std::cout<<"5 incremented by is : "<<value<<std::endl;
    std::cout<<value;

    value = 5; //reset value to 5

    //decrement by one
    value = value - 1; //4
    std::cout<<"5 decremented by 1 is : "<<value<<std::endl;
    
    std::cout<<"============="<<std::endl;

    value = 5; //reset value to 5
    //increment with postfix
    std::cout<<"the value is (incrementing) : "<<value++<<std::endl;//gives out 5
    std::cout<<"the value is : " <<value<<std::endl;//gives out 6

    value = 5; //reset value to 5
    //decrement with postfix
    std::cout<<"the value is (incrementing) : "<<value--<<std::endl;//gives out 5
    std::cout<<"the value is : " <<value<<std::endl;//gives out 4
    
    std::cout<<std::endl;  
    std::cout<<"=======Prefix======"<<std::endl;

    value = 5; //reset value to 5
    //increment with postfix
    ++value;
    std::cout<<"the value is (prefix ++): " <<value<<std::endl;//gives out 6

    value = 5; //reset value to 5
    //increment with postfix inside cout
    std::cout<<"the value is (prefix++ in place) : " <<++value<<std::endl;//gives out 6

    value = 5; //reset value to 5
    //decrement with postfix
    --value;
    std::cout<<"the value is (prefix --) : " <<value<<std::endl;//gives out 4

    value = 5; //reset value to 5
    //decrement with postfix inside cout function
    std::cout<<"the value is (prefix --) in place : " <<--value<<std::endl;//gives out 4

    return 0;
}
