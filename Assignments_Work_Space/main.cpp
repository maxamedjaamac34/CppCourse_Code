//Assingments for this course
#include <iostream>

int main(){

    const unsigned short width{20};
const unsigned short height{10};
int playerX;
int playerY;
std::cout << "Enter X Pos : ";
std::cin >> playerX;
std::cout << "\nEnter Y Pos :" << std::endl;
std::cin >> playerY;

if ((playerX > (-width) && playerX < width) && (playerY > (-height) && playerY < height)){

std::cout << "You are completely surrounded. Don't move!" << std::endl;
}
else {

std::cout << "You're out of reach!" << std::endl;
}
/*

    int x;
    int y;
    std::cout<<"type in your x location "<<std::endl;
    std::cin>>x;
    std::cout<<"type in your x location "<<std::endl;
     std::cin>>y;

    if (x<11 && x>-11 && (y<6 && y>-6)){
        std::cout<<"You are completely surrounded. Don't move!"<<std::endl;
    }
    else{ 
        std::cout<<"You're out of reach! "<<std::endl;
   
    }
*/
    return 0;
}