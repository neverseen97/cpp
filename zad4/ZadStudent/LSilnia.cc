#include <iostream>
using namespace std;

int main() {
    int liczba;
    long long silnia = 1;    
    long long suma = 0;      

    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Błąd: Silnia jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
        return 1;
    }

    if (liczba == 0) {
        cout << "Silnia z 0 wynosi: 1" << endl;
        cout << "Suma silni od 1 do 0 wynosi: 0" << endl;
        return 0;
    }

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
        suma += silnia;
        cout << i << "! = " << silnia << endl; 
    }

    cout << "\nSilnia z " << liczba << " wynosi: " << silnia << endl;
    cout << "Suma silni od 1 do " << liczba << " wynosi: " << suma << endl;

    return 0;
}
