#include <iostream>

void rectangle(double side1, double side2, double& perimeter, double& area){
    perimeter = 2 * (side1 + side2);
    area = side1 * side2;
}

int main(){
    double a, b;
    double p, ar;

    std::cout << "please enter the lengths of two sides" << std::endl;
    std::cin >> a >> b;

    rectangle(a, b, p, ar);

    std::cout << "perimeter: " << p << std::endl;
    std::cout << "area: " << ar << std::endl;
}