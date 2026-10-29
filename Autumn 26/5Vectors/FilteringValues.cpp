#include <iostream>
#include <vector>

//REMINDER ::::::::: FUNCTIONS GO OUTSIDE AND AHEAD OF MAIN
std::vector<double> lower_than(std::vector<double> values, double t){
    std::vector<double> result;

    for (int i = 0; i < values.size(); i++) {
        if (values.at(i) < t) {
            result.push_back(values.at(i));
        }
    }
    return result;
}

int main(){
    std::vector<double> sequence;
    double tmp = 1;

    std::cout << "Please enter a set of values terminated by 0" << std::endl;
    while (tmp != 0){
        std::cin >> tmp;
        if (tmp != 0) {
            sequence.push_back(tmp);
        }
    }

    double t;
    std::cout << "Please enter t" << std::endl;
    std::cin >> t;

    std::vector<double> small = lower_than(sequence, t);

    std::cout << "the numbers less than " << t << " are:" << std::endl;
    for (int i = 0; i < small.size(); i++) {
        std::cout << small.at(i) << std::endl;
    }
}