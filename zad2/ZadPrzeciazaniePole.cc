#include <iostream>
#include <cmath>

double pole(double side)
{
    return side * side;
}

double pole(double a, double b)
{
    return a * b;
}

double pole(double r, bool isCircle)
{
    if (isCircle)
    {
        return M_PI * r * r;
    }
    else
    {
        return 0;
    }
}

int main()
{
    std::cout << "pole kwadratu o boku 4: " << pole(4.0) << std::endl;
    std::cout << "pole prostokata o bokach 4 i 5: " << pole(4.0 , 5.0) << std::endl;
    std::cout << "pole kola o promieniu 4: " << pole(4, true) << std::endl;
    return 0;
}
