#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 
        if( (year % 100) == 0){ 
            if((year % 400) == 0){
                std::cout << "is a leap year" <<std::endl;
            }
            else{
                std::cout << "not a leap year" << std:: endl;
            }   
        }
        else{ 
           std::cout << "is a leap year" << std::endl;
        }
    }
    else{
        std::cout << "not a leap year" << std::endl;
    }
}

//COMPLETED, added case for multiples of 400 since this is also a leap year and why not
