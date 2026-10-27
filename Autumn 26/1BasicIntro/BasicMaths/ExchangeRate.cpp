#include <iostream> 
int main(){
    int choice;
    double amount;
    std::cout <<"Please enter 1 to convert Pounds to Euros, and 2 to convert Euros to Pounds" <<std::endl;
    std::cin >> choice;

    std::cout << "Please enter how much you would like to convert"<< std::endl;
    std::cin >> amount;

    if (choice == 1){
        std::cout << "That'll be " <<amount * 1.17 << " Euros" << std::endl;
    } else if (choice==2){
        std::cout << "That'll be " << amount / 1.17 << " Pounds" << std::endl;
    } else {
        std::cout << "Please enter 1 or 2" << std::endl;
    }
}


//COMPLETED
