#include <iostream>

double mymax(double a, double b){
    if (a > b) {
        return a;
    }
    return b;

}

int main(){
    double x, y;

    std::cout << "Please enter two numbers" << std::endl;
    std::cin >> x >> y;
    std::cout << "The largest is: " << mymax(x, y) << std::endl;
}

//COMPLETED
