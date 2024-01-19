//integral logic conditions
//using integers inside the if-statement and using them as booleans
//TRUE is any number diffterent than 0, or expression evaluating to something other than 0
//any number equal to 0 or expresson evaluating to 0 is false

#include <iostream>
int main()
{

    int item_count{10};
    bool bool_condition = item_count;

    std::cout<<std::boolalpha;
    if (item_count){
        
        std::cout<<"we have "<<bool_condition<<" items in the bag"<<std::endl; //different than 0
    }
    else{
        std::cout<<"we have : " <<bool_condition<<" in our variable"<<std::endl;// zero
    }
    

    return 0;
}