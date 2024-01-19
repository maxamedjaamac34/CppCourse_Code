//Switch Scope
#include <iostream>

int main(){
/*
int day;

std::cout<<"what day is it today ";

std::cin >> day;
std::cout << "How many days ago are you checking : " << std::endl;
int days_ago;
std::cin>>days_ago;

	switch (day){
	case 1:
		std::cout<<day<< " Today is Monday " << std::endl;
		break;
	case 2: 
		std::cout<< day<<" Today is Tuesday " << std::endl;
		break;
	case 3:
		std::cout<< day<<" Today is Wednesday " << std::endl;
		break;
	case 4:
		std::cout<< day<<" Today is Thursday " << std::endl;
		break;
	case 5:
		std::cout<<day<< " Today is Friday " << std::endl;
		break;
	case 6:
		std::cout<<day<< " Today is Saturday " << std::endl;
		break;
	case 7:
		std::cout<<day<< " Today is Sunday " << std::endl;
		break;
	default:
		std::cout<< day<<" is not a valid day. Bye! "<<std::endl;
		break;
}

int that_day = day-(days_ago %7);
if (that_day<0){
       that_day += 7;
   }
	std::cout << "If we went " << days_ago << " days in the past we would hit a ";

switch (that_day) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    default:
        std::cout << "Sunday" << std::endl;
        break;
}



return 0;
}
*/




    int condition{1};
	int my_var{4};
    switch (int data{7};condition){
		int x;
    
    case 0 :
		//int y{5}; //this is compiler error
		int y;
		x =6;
		x++;
		std::cout << "x = " <<x<< std::endl;
        std::cout << "Statement1" << std::endl;
        std::cout << "Statement2" << std::endl;
        break;

    case 1 :
		int z;
		my_var++;
        std::cout << "Statement3" << std::endl;
        std::cout << "Statement4" << std::endl;
		std::cout << "my var :" <<my_var<< std::endl;
        break;
    
    default:
		int u;
		z=5;
		z--;

        std::cout << "z = " <<z<< std::endl;
        std::cout << "Statement5" << std::endl;
        std::cout << "Statement6" << std::endl;
        break;
    }
    std::cout << "Moving on..." << std::endl;
    return 0;
}
