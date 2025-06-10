#include <iostream>
using namespace std;

// (a) Sprawdzanie parzystości za pomocą operacji bitowych
bool czyParzystaBitowo(int liczba) {
    /*
    sprawdzenie dla liczby 6:
    6 w systemie binarnym:    110
    1 w systemie binarnym:    001
    6 & 1:                    000 (wynik 0 - liczba parzysta)
    
    sprawdzenie dla liczby 7:
    7 w systemie binarnym:    111
    1 w systemie binarnym:    001
    7 & 1:                    001 (wynik 1 - liczba nieparzysta)
    */
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

bool czyParzystaWarunkowo(int liczba) {
    return (liczba % 2) ? false : true;
}

void wypiszWynik(int liczba, bool czyParzysta) {
    cout << liczba << " jest " << (czyParzysta ? "parzysta" : "nieparzysta") << endl;
}

int main() {
    int liczba, wybor;
    
    cout << "Podaj liczbę do sprawdzenia: ";
    cin >> liczba;
    
    cout << "\nWybierz metodę sprawdzania:" << endl;
    cout << "1 - Operacje bitowe" << endl;
    cout << "2 - Operator modulo" << endl;
    cout << "3 - Operator warunkowy" << endl;
    cout << "Twój wybór: ";
    cin >> wybor;
    
    switch(wybor) {
        case 1:
            cout << "Wybrano sprawdzanie bitowe:" << endl;
            wypiszWynik(liczba, czyParzystaBitowo(liczba));
            break;
            
        case 2:
            cout << "Wybrano sprawdzanie modulo:" << endl;
            wypiszWynik(liczba, czyParzystaModulo(liczba));
            break;
            
        case 3:
            cout << "Wybrano sprawdzanie warunkowe:" << endl;
            wypiszWynik(liczba, czyParzystaWarunkowo(liczba));
            break;
            
        default:
            cout << "Nieprawidłowy wybór!" << endl;
    }
    
    return 0;
}
