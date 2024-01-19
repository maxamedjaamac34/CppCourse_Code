//Booleans
//booleans take up 8 bits

#include <iostream>

int main(){

    bool red_light {true};
    bool green_light {false};

    if (red_light ==true){
        std::cout<< "stop!" <<std::endl;
    }else{
        std::cout<< "Go through!" <<std::endl;
    }
    //another way of doing the decision above
    if(green_light){
        std::cout<<"the light is green"<<std::endl;
    }else{
        std::cout<<"the light is not green"<<std::endl;//this is the output 
    }
    //sizeof()
    std::cout<<"the sizeof() : " <<sizeof(bool)<<std::endl;

    std::cout<<"---------------"<<std::endl;

    //printing out a bool
    //1...>>true
    //0...>>false
    std::cout <<std::endl;
    std::cout <<"red_light : "<<red_light<<std::endl;
    std::cout <<"green_light : "<<green_light<<std::endl;

    std::cout << std::boolalpha;
    std::cout <<"red_light : "<<red_light<<std::endl;
    std::cout <<"green_light : "<<green_light<<std::endl;
    return 0;
}