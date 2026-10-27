#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;
    std::string user_surname; 
    std::cout << "what about your last name?" << std::endl;
    std::cin>> user_surname;
    std::cout << "hello, " << user_name << " " << user_surname << std::endl;

}
//COMPLETED
