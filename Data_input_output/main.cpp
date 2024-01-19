//This brings in the iostream library
#include <iostream>
#include <string>


int main(){
    //printing data
    std::cout <<"Hello C++20 students" <<std::endl;
    int age{21};
    std::cout<< "Age : " << age << std::endl;
    std::cerr << "Error mesage : Something is wrong" <<std::endl;
    std::clog <<"Log message : something happened " <<std::endl;

    //collecting data from the user

    /*
    //data types
    int age1;
    std:: string name;

    
    
    std::cout <<"Please print your name and age : " <<std::endl;

    //grabbing data one by one
    std::cin >>name;
    std::cin >>age1;

    //grabbing the data at once
    std::cin>> name >> age1;

    std::cout <<"Hello " <<name<< " you are "<<age1 <<" years old"<<std::endl;
    */

    //Data with spaces or multiple words
    std::string full_name;
    int age3;
    std::cout <<"Please type in your full name and age " <<std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout<<"Hello "<<full_name //you can use a new line if code is too long
            <<". You are "<<age3<<" years old."<<std::endl;
    return 0;
}