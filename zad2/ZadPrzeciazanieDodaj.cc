#include <iostream>
#include <string>

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

std::string dodaj(const std::string& a, const std::string& b) {
    return a + b;
}

int main() {
    std::cout << "Suma 3 i4 : " << dodaj(3, 4) << std::endl;
    std::cout << "Suma 3.5 i 4.5 : " << dodaj(3.5, 4.5) << std::endl;
    std::cout << "Laczenie 'Hello i 'World'': " << dodaj("Hello", " World") << std::endl;
    return 0;
}