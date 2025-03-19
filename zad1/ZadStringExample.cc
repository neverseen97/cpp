#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";

    std::cout << "czy string jest pusty? " << (str.empty() ? "TAK" : "NIE") << std::endl;

    std::cout << "dlugosc stringa: " << str.size() << std::endl;
    std::cout << "dlugosc stringa (length): " << str.length() << std::endl;

    try
    {
        std::cout << "znak na pozycji 7: " << str.at(7) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "wyjatek: " << e.what() << std::endl;
    }

    str.clear();
    std::cout << "czzy string jest pusty po wyczyszczeniu " << (str.empty() ? "TAK" : "NIE") << std::endl;

    str = "Hello, World!";

    str.erase(7, 1); //bez przecinka
    std::cout << "string po usunieciu przecimka: " << str << std::endl;

    size_t found = str.find("World");
    if (found != std::string::npos)
    {
        std::cout << "znalazlem 'World' na pozycji: " << found << std::endl;
    }
    else
    {
        std::cout << "'World' - nie znaleziono." << std::endl;
    }

    std::string str2 = "Goodbye!";
    str.swap(str2);
    std::cout << "string po zamianie: " << str << std::endl;
    std::cout << "string2 po zamianie: " << str2 << std::endl;

    std::string sub = str.substr(0, 5);
    std::cout << "podciag: " << sub << std::endl;

    str.append(" again");
    std::cout << "string po dodaniu ' again': " << str << std::endl;

    return 0;
}
