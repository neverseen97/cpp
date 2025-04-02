
#include <iostream>

void function1();
void function2();
void function3();
extern "C" void function4();
extern "C" void function5();

int main(int argc, char *argv[])
{
    std::cout << "rozpoczecie programu" << std::endl;

    function1();
    function2();
    function3();
    function4();
    function5();

    return 0;
}

void function1()
{
    std::cout << "funkcja 1 wykonana." << std::endl;
}

void function2()
{
    std::cout << "funkcja 2 wykonana." << std::endl;
}

void function3()
{
    std::cout << "funkcja 3 wykonana." << std::endl;
}

extern "C" void function4()
{
    std::cout << "funkcja 4 wykonana" << std::endl;
}

extern "C" void function5()
{
    std::cout << "funkcja 5 wykonana" << std::endl;
}
