#include <iostream>

void IntDiv(int a, int b, int& quotient, int& remainder){
    quotient = a / b;
    remainder = a % b;
}

int main(){
    int a, b;
    std::cout << "Please enter two integer numbers" << std::endl;
    std::cin >> a >> b;

    int q, r;
    IntDiv(a, b, q, r);

    std::cout << "quotient: " << q << std::endl;
    std::cout << "remainder: " << r << std::endl;
}