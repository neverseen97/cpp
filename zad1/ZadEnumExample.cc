#include <iostream>

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    Month currentMonth = Month::March;
    
    switch (currentMonth) {
        case Month::January:
            std::cout << "Styczeń" << std::endl;
            break;
        case Month::February:
            std::cout << "Luty" << std::endl;
            break;
        case Month::March:
            std::cout << "Marzec" << std::endl;
            break;
        case Month::April:
            std::cout << "Kwiecień" << std::endl;
            break;
        case Month::May:
            std::cout << "Maj" << std::endl;
            break;
        case Month::June:
            std::cout << "Czerwiec" << std::endl;
            break;
        case Month::July:
            std::cout << "Lipiec" << std::endl;
            break;
        case Month::August:
            std::cout << "Sierpień" << std::endl;
            break;
        case Month::September:
            std::cout << "Wrzesień" << std::endl;
            break;
        case Month::October:
            std::cout << "Październik" << std::endl;
            break;
        case Month::November:
            std::cout << "Listopad" << std::endl;
            break;
        case Month::December:
            std::cout << "Grudzień" << std::endl;
            break;
    }
    
    return 0;
}
