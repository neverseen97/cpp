#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int main() {
    srand(time(0));
    int wylosowana, proba, licznik = 0;
    const int MAX_PROB = 10;
    int zakres;
    
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1. Latwy (liczby 1-50)" << endl;
    cout << "2. Sredni (liczby 1-100)" << endl;
    cout << "3. Trudny (liczby 1-200)" << endl;
    
    int poziom;
    do {
        cout << "Twoj wybor: ";
        cin >> poziom;
    } while (poziom < 1 || poziom > 3);
    

    switch(poziom) {
        case 1: zakres = 50; break;
        case 2: zakres = 100; break;
        case 3: zakres = 200; break;
        default: zakres = 100;
    }
    
    wylosowana = rand() % zakres + 1;
    
    cout << "\nZgadnij liczbe (1-" << zakres << "):" << endl;
    cout << "Masz " << MAX_PROB << " prob." << endl;

    while (licznik < MAX_PROB) {
        cout << "\nProba " << (licznik + 1) << "/" << MAX_PROB << ": ";
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! ";
            if (licznik < MAX_PROB) cout << "Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! ";
            if (licznik < MAX_PROB) cout << "Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return 0;
        }
    }
    
    cout << "\nPrzegrales! Wykorzystales wszystkie " << MAX_PROB << " prob." << endl;
    cout << "Prawidlowa liczba to: " << wylosowana << endl;

    return 0;
}
