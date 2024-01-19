//Variables
//variable age e.g might take 4 bits
// use curly braces to not lose data when writing fractions/double
//functional initialization using parantheses
//Assignment initialization using equal sign 
#include <iostream>



int main(){

    //braced initializer

    int elephant_count; //variable may contain random garbage value . warning
    int lion_count{}; //initializer to zero
    int dog_count{10}; //initializer to 10
    int cat_count{15}; //initializes to 15
    //int narrowing_conversion_braces{2.9} //this displaces error
    //can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    std::cout<< "Elephant count : " <<elephant_count<<std::endl;
    std::cout<< "Lion count : " <<lion_count<<std::endl;
    std::cout<< "Dog count : " <<dog_count<<std::endl;
    std::cout<< "Cat count : " <<cat_count<<std::endl;

    std::cout<< "Domesticated animal count : " <<domesticated_animals<<std::endl;


    //functonal initialization/notation
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    int narrowing_conversion(2.9);//it works even though it shows a mistake but cuts to 2
    
    std::cout<< "Apple count : " <<apple_count<<std::endl;
    std::cout<< "Orange count : " <<orange_count<<std::endl;
    std::cout<< "Fruit count : " <<fruit_count<<std::endl;
    std::cout<< "Narrowing conversion : " <<narrowing_conversion<<std::endl;



    //Assingment Notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 3.9; //cuts output to 3
    
    //calling variables
    std::cout<< "Bike count : " <<bike_count<<std::endl;
    std::cout<< "Truck count : " <<truck_count<<std::endl;
    std::cout<< "Vehicle count : " <<vehicle_count<<std::endl;
    std::cout<< "Narrowing conversion assignment : " <<narrowing_conversion_assignment<<std::endl;

    std::cout<<"the size of int : " <<sizeof(int) <<std::endl;
    std::cout<<"the size of truck_count : " <<sizeof(truck_count) <<std::endl;


    //summary of all that was covered here

    //using braces

    int ford_count{3};
    int tesla_count{5};
    int cars_count{ford_count + tesla_count};

    std::cout<<"ford count: "<<ford_count<<std::endl;
    std::cout<<"tesla count: "<<tesla_count<<std::endl;
    std::cout<<"cars count: "<<cars_count<<std::endl;
 //space
std::cout<<std::endl;   
    //using functional notation aka ()
    int hargeisa_population(23);
    int burco_population(42);
    int cities_population(hargeisa_population + burco_population);

    std::cout<<"hargeisa pop :"<<hargeisa_population<<std::endl;
    std::cout<<"burco pop :"<<burco_population<<std::endl;
    std::cout<<"cities pop :"<<cities_population<<std::endl;
//space
std::cout<<std::endl;    
    //uisng assignment notation aka equal sign

    auto math_count = 34;
    auto english_count = 56;
    auto all_majors_count = math_count + english_count;
//space
std::cout<<std::endl;

    std::cout<<"math majors count is :"<<math_count<<std::endl;
    std::cout<<"english majors count is :"<<english_count<<std::endl;
    std::cout<<"all majors count is :"<<all_majors_count<<std::endl;
    
    
    return 0;

}