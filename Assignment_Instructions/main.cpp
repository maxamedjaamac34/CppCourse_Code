
//math functions
#include <iostream>
#include <cmath> //I don't need this library for this program


int main(){

  std::cout<<"Welcome to box calculator. Please type in length, width and height information : "<<std::endl;
  double length;
  double width;
  double height;
  std::cin>>length>>width>> height;
  double base_area = width * length;
  double volume = base_area *height;
  std::cout<<"The base area is : " <<base_area<<"\n"<<"The Volume : "<<volume<<std::endl;
 
 
 

std::cout<<"Please enter a degree value in Celsius :"<<std::endl;
double Celsius;
std::cin>>Celsius;
double Fahrenheight = (9.0/5) *Celsius + 32;
std::cout<<Celsius<<" Celsius is " <<Fahrenheight<< " Fahrenheight"<<std::endl;





return 0;

}