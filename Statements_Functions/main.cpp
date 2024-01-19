//statements and functions
//statement is a unit of computation
//every c++ program is a collection of statements
//statements end with semi-colon
//otherwise it will experince a compile time error
//statements are executed in order

//Defining a function that can be reused
int addnumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}
// this is for the exercie
int multiplynumbers(int number1, int number2){
    int product = number1 * number2;
    return product;
}
#include <iostream>

int main(){
    int firstnumber = {13};
    int secondnumber = {9};
    //print the two numbers
    std::cout <<"first number is : " <<firstnumber<<std::endl;
    std::cout <<"second number is : " <<secondnumber <<std::endl;

    //print addition of two numbers

    int sum = firstnumber + secondnumber;
    std::cout <<"the sum of 13 and 9 is : " << sum <<std::endl;

    sum = addnumbers(25,7);
    std::cout <<"the sum of 25 and 7 is : " << sum <<std::endl;

    sum = addnumbers(30,54);
    std::cout <<"the new sum is : "<<sum <<std::endl;
    std::cout << "Sum of 3 and 42 is : " << addnumbers(3,42) << std::endl; //calling the function inside the statement
    //this is the product formula
    sum = multiplynumbers(2,5);
    std::cout <<"the product of 2 and 5 is :" <<sum<<std::endl;
    std::cout<<"the product of 200 and 4 is :"<<multiplynumbers(200,4)<<std::endl;


    return 0;
}