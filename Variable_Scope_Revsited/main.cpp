//variable scope
//everything defined within if can only be called within 'if'
//same for 'else'


#include <iostream>


int global_var{44};

int main(){

    bool green {false};

    global_var++; // 45

    if(green){
        global_var--; 
        int car_count{23};
        std::cout << "Light is green " << car_count << "on the move!" << std::endl;
    }else{
		char clearance[] = " nice ";
        //car_count++; // Compiler error
        global_var++; // 46
        std::cout << "Light is not green. Y'all should STOP!" <<clearance<< std::endl;
    }

    //car_count++;
    std::cout << "global_var : " << global_var << std::endl;
   
    return 0;
}