#include <iostream>

double mymax(double a, double b){
    if (a > b) {
        return a;
    }
    return b;
}

double mymax3(double a, double b, double c){
    return mymax(a, mymax(b, c));
}

int main(){
    double x, y, z;
    
    std::cout << "please enter three numbers" << std::endl;
    std::cin >> x >> y >> z;
    std::cout << "the largest is: " << mymax3(x, y, z) << std::endl;
}