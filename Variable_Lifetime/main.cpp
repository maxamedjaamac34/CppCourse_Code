//Variable lifetime
//a period of time a variable is alive in your memory
//variable becomes alive when you declare it.
//Its death is defined by storage duratoin
// 3 types of storage duration. local, dynamic, static

#include <iostream>


int static_var2{80}; //static duration dies when program ends

void some_function(){
	int local_var3 {30}; //local (automatic) duration dens at end of blocl
	static int static_var1{40}; //static duration dies when program ends
	int dynamic_var1{50}; //you decide when it dies
}

int main(){

	int local_var1{10}; //local (automatic) duration dies at end of block
	int dynamic_var2{60};// you decide when it dies

	{
		int local_var2{20}; //local(automatic) duration dies at end of blocl
		int dynamic_var3{70}; //you decide when it dies
	}

	std::cout<<local_var1<<std::endl;
    return 0;
}