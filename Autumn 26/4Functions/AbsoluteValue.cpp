#include <iostream>
#include <cmath>
int main(){
    double n;
    // the name of the variable doesn't matter
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << std::abs(n) << std::endl;
}