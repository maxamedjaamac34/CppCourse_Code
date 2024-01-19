// Explicit Data conversion
//actively initiated by the developer
//Make it to the compiler clear how you want to do
//implicit cas will add up the doubles
//then turn the result into int for assignment
//static_cast -used to convert from one type to another
//static_cast makes it clear what you are transferring

#include <iostream>


int main(){

	//Implicit cast will add up the doubles,
	//then turn result into int for assignment
	double x { 12.5 };
    double y { 34.6};
    
    int sum = x + y; 
    
    std::cout << "The sum  is : " << sum << std::endl;


	//Explicity cast : cast then sum up
	sum = static_cast<int>(x) + static_cast<int>(y) ;
    std::cout << "cast and sum  is : " << sum << std::endl;

	//Explicit cast : sum up then cast, same thing as implicit cast
	sum =  static_cast<int> (x + y);
	std::cout << "Sum up then cast, result : " << sum << std::endl;


	//Old style C-cast
	double PI {3.14};
	
	//int int_pi = (int)(PI);

    int int_pi = static_cast<int>(PI);
	std::cout << "PI : " << PI << std::endl;

    std::cout<<"size of pi is :"<<sizeof(PI)<<std::endl;//double

    std::cout << "int_pi : " << int_pi << std::endl;
    std::cout<<"size of int_pi :"<<sizeof(int_pi)<<std::endl;
   
    return 0;
}