#include <iostream>
#include <string>
using namespace std;

bool czyParzystaBitowo(int liczba) {
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

int getWybor(const string& metoda) {
    if(metoda == "bitowo" || metoda == "bit") return 1;
    if(metoda == "modulo" || metoda == "mod") return 2;
    if(metoda == "warunkowo" || metoda == "war") return 3;
    return 0;
}

int main() {
    int liczba;
    string wybor;
    
    cout << "Podaj liczbę do sprawdzenia: ";
    cin >> liczba;
    
    cout << "\nWybierz metodę sprawdzania (wpisz słowo):" << endl;
    cout << "bitowo    - dla operacji bitowych" << endl;
    cout << "modulo    - dla operatora modulo" << endl;
    cout << "warunkowo - dla operatora warunkowego" << endl;
    cout << "Twój wybór: ";
    cin >> wybor;
    
    int opcja = getWybor(wybor);
    
    switch(opcja) {
        case 1:
            cout << "Wybrано sprawdzanie bitowe:" << endl;
            wypiszWynik(liczba, czyParzystaBitowo(liczba));
            break;
            
        case 2:
            cout << "Wybrано sprawdzanie modulo:" << endl;
            wypiszWynik(liczba, czyParzystaModulo(liczba));
            break;
            
        case 3:
            cout << "Wybrано sprawdzanie warunkowe:" << endl;
            wypiszWynik(liczba, czyParzystaWarunkowo(liczba));
            break;
            
        default:
            cout << "Nieprawidłowy wybór! Dostępne opcje to: bitowo, modulo, warunkowo" << endl;
    }
    
    return 0;
}
