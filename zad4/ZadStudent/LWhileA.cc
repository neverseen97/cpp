#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0;
    int licznik = 0; 

    cout << "Wprowadzaj liczby dodatnie (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        if (liczba < 0) {
            cout << "Błąd: Podaj liczbę dodatnią!" << endl;
        } else {
            suma += liczba;
            licznik++; 
        }
        cin >> liczba;
    }

    cout << "Suma wprowadzonych liczb: " << suma << endl;
    cout << "Liczba wprowadzonych poprawnych wartości: " << licznik << endl;

    if (licznik == 0) {
        cout << "Nie wprowadzono żadnych poprawnych liczb!" << endl;
    }

    return 0;
}
