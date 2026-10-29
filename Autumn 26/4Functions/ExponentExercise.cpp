#include <iostream>
#include <cmath>
int main() {
    double x;
    int n;

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    double sum = 0.0;
    for (int i = 0; i <= n; ++i) {
        sum += std::pow(x, i);
    }

    std::cout << "Sum of powers = " << sum << std::endl;
    return 0;
}