#include <iostream>
#include <cmath>

int potega(int base, int exponent) {
    return static_cast<int>(std::pow(base, exponent));
}

double potega(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    std::cout << "2 do potegi 3: " << potega(2, 3) << std::endl;
    std::cout << "2.5 do potegi 3.5: " << potega(2.5, 3.5) << std::endl;
    return 0;
}