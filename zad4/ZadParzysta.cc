#include <iostream>
using namespace std;

// (a) sprawdzanie parzystości za pomocą operacji bitowych
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

// (b) Sprawdzanie parzystości za pomocą modulo
bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

// (c) Sprawdzanie parzystości za pomocą operatora warunkowego
bool czyParzystaWarunkowo(int liczba) {
    return (liczba % 2) ? false : true;
}

void wypiszWynik(int liczba, bool czyParzysta) {
    cout << liczba << " jest " << (czyParzysta ? "parzysta" : "nieparzysta") << endl;
}

int main() {
    int liczba;
    cout << "Ppodaj liczbę do sprawdzenia: ";
    cin >> liczba;
    
    cout << "\nsprawdzanie bitowe: ";
    wypiszWynik(liczba, czyParzystaBitowo(liczba));
    
    cout << "sprawdzanie modulo: ";
    wypiszWynik(liczba, czyParzystaModulo(liczba));
    
    cout << "sprawdzanie warunkowe: ";
    wypiszWynik(liczba, czyParzystaWarunkowo(liczba));
    
    return 0;
}
