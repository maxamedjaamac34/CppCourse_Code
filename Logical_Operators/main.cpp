//Logical Operations
// work on boolean operants  (true and false)
//If any of th operant is false, the result is false
#include <iostream>
int main(){
   
    bool a{true};
    bool b{false};
    bool c{true};

    std::cout << std::boolalpha;
    std::cout<<"a is : " <<a<<std::endl;
    std::cout<<"a is : " <<a<<std::endl;
    std::cout<<"a is : " <<a<<std::endl;

    std::cout<<"=============="<<std::endl;

    std::cout<<"basic AND operations"<<std::endl;

    std::cout << " a && b : " << (a && b) <<std::endl; // false
    std::cout << " a && c : " << (a && c) << std::endl;// true
    std::cout << " a && b && c : " <<(a & c & b && c) <<std::endl;// false

    std::cout<<"=============="<<std::endl;
    std::cout<<"basic OR operations"<<std::endl;

    std::cout << " a || b : " << (a || b) <<std::endl; // true
    std::cout << " a || c : " << (a || c) << std::endl;// true
    std::cout << " a || b || c : " <<(a ||b || c) <<std::endl;// true

    std::cout<<"basic NOT operations"<<std::endl;
    std::cout<<"basic NOT operations"<<std::endl;
    //negates whatever operant you had

    std::cout << " not a : " << !a <<std::endl; // true
    std::cout << " not b : " << !b << std::endl;// true
    std::cout << " not c : " << !c <<std::endl;// true

    std::cout<<"=========="<<std::endl;
    std::cout<<"combining logical operators"<<std::endl;
    int d{45};
    int e{20};
    int f{11};

    std::cout <<"(d>e) && (d>f) : " <<((d>e) && (d>f)) <<std::endl; //true
    std::cout <<"(d==e) || (e<=f) : " <<((d==e) || (e<=f)) <<std::endl; //false
    std::cout <<"(d<e) || (d>f) : " <<((d<e) || (d>f)) <<std::endl; // true
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
    return 0;
}   
