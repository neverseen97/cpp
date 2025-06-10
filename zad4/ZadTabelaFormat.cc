#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NAZWA_WIDTH = 15;
    const int CENA_WIDTH = 8;
    const int ILOSC_WIDTH = 7;
    
    // nagłówek
    cout << "| " << left << setw(NAZWA_WIDTH) << "Nazwa"
         << "| " << right << setw(CENA_WIDTH) << "Cena"
         << " | " << setw(ILOSC_WIDTH) << "Ilosc" << " |" << endl;
    
    // linia separatora
    cout << "|" << setfill('-') << setw(NAZWA_WIDTH + 2) << ""
         << "|" << setw(CENA_WIDTH + 2) << ""
         << "|" << setw(ILOSC_WIDTH + 2) << "" << "|" << endl;
    
    // resetowanie wypełnienia na spacje
    cout << setfill(' ');
    
    // dane
    cout << "| " << left << setw(NAZWA_WIDTH) << "Chleb"
         << "| " << right << setw(CENA_WIDTH) << fixed << setprecision(2) << 4.99
         << " | " << setw(ILOSC_WIDTH) << 5 << " |" << endl;
    
    cout << "| " << left << setw(NAZWA_WIDTH) << "Mleko"
         << "| " << right << setw(CENA_WIDTH) << 3.20
         << " | " << setw(ILOSC_WIDTH) << 10 << " |" << endl;
    
    cout << "| " << left << setw(NAZWA_WIDTH) << "Jajka (10 szt)"
         << "| " << right << setw(CENA_WIDTH) << 8.50
         << " | " << setw(ILOSC_WIDTH) << 3 << " |" << endl;
    
    return 0;
}
