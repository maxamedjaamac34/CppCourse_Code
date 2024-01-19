//Integer modifiers
//important for specifying range of values

#include <iostream>

int main(){
    signed int value1{10};
    signed int value2{-300};
    std::cout<< "value1 : " <<value1<<std::endl;
     std::cout<< "value2 : " <<value2<<std::endl;

     //check size

     std::cout<< "size of value1 : " <<sizeof(value1)<<std::endl;
     std::cout<< "size of value2 : " <<sizeof(value2)<<std::endl;

     //make it clear that you are using positive numbers
     unsigned int value3 {4};
     //unsigned int value4 {-5}; //this will show a compile error
     

     //shor and long modifiers
    short short_var {-32768}; //2 bytes
    short int short_int {455};
    signed short signed_short{1222};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int {465};

    int int_var{55};
    signed signed_var {66};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    long long_var{88};//4 or 8 bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888}; //8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int {1234};

    //print sizes

    std::cout<<"short variable : "<<short_var<< " , size : "<<sizeof(short)<< " bytes"<<std::endl;
    std::cout<<"short int : "<<short_int<< " , size : "<<sizeof(short int)<< " bytes"<<std::endl;
    std::cout<<"short signed : "<<signed_short<< " , size : "<<sizeof(signed short)<< " bytes"<<std::endl;
    std::cout<<"short signed int : "<<signed_short_int<< " , size : "<<sizeof(signed short int)<< " bytes"<<std::endl;
    std::cout<<"short unsigned int : "<<unsigned_short_int<< " , size : "<<sizeof(unsigned short int)<< " bytes"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Int variable : "<<int_var<< " , size : "<<sizeof(int)<< " bytes"<<std::endl;
    std::cout<<"signed variable : "<<signed_var<< " , size : "<<sizeof(signed)<< " bytes"<<std::endl;
    std::cout<<"signed int variable : "<<signed_int<< " , size : "<<sizeof(signed int)<< " bytes"<<std::endl;
    std::cout<<"unsigned int variable : "<<unsigned_int<< " , size : "<<sizeof(unsigned int)<< " bytes"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"long variable : "<<long_var<< " , size : "<<sizeof(long)<< " bytes"<<std::endl;
    std::cout<<"long int variable : "<<long_int<< " , size : "<<sizeof(long int)<< " bytes"<<std::endl;
    std::cout<<"signed long variable : "<<signed_long<< " , size : "<<sizeof(signed long)<< " bytes"<<std::endl;
    std::cout<<"signed long int variable : "<<signed_long_int<< " , size : "<<sizeof(signed long int)<< " bytes"<<std::endl;
    std::cout<<"ungsigned long int variable : "<<unsigned_long_int<< " , size : "<<sizeof(unsigned long int)<< " bytes"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"long long variable : "<<long_long<< " , size : "<<sizeof(long long)<< " bytes"<<std::endl;
     std::cout<<"long long int variable : "<<long_long_int<< " , size : "<<sizeof(long long int)<< " bytes"<<std::endl;
    std::cout<<"signed long long variable : "<<signed_long_long<< " , size : "<<sizeof(signed long long)<< " bytes"<<std::endl;
    std::cout<<"signed long long int variable : "<<signed_long_long_int<< " , size : "<<sizeof(signed long long int)<< " bytes"<<std::endl;
    std::cout<<"ungsigned long long int variable : "<<unsigned_long_long_int<< " , size : "<<sizeof(unsigned long long int)<< " bytes"<<std::endl;
    


    
    return 0;
}