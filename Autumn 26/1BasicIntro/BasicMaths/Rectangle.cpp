#include <iostream>
int main(){
    double n1, n2, peri, area;
    std::cout << "Please enter the Length of the Rectangle" <<std::endl;
    std::cin >> n1;

    std::cout << "Please enter the Height of the Rectangle" <<std::endl;
    std::cin >> n2;
    peri = n1 + n1 + n2 + n2;
    area = n1 * n2;
    std::cout << "The Perimeter of your Rectangle is" << " " << peri << " " << "and the Area of your Rectangle is" << " " << area << "." << std::endl;

}

// COMPLETED 
