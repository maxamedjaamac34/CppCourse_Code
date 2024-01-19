//type of errors are 
/*Compile Time Errors such as missing ';'
Runtime Errors such as the printing sth you wanted. mostly a logical problem. wanted 'green' but it prints grey
Compiler error - it warns you when you divide by zero 20/0 
*/

#include <iostream>

int main(){
    //error occurs when you don't put the last semi-colon
    std::cout<<"Hellow world" <<std::endl;
    //Run time error and compile time error. 
    int value = 7/0;
    std::cout << "value : " << std::endl;
    return 0;
}