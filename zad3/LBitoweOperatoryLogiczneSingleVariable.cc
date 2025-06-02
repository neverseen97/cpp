#include <iostream>
using namespace std;

int konwertujTabliceDoBinarnej(int tablica[], int rozmiar) {
    int wynik = 0;
    
    
    for(int i = rozmiar - 1; i >= 0; i--) {
        if(tablica[i] == 1) {
            wynik |= (1 << (rozmiar - 1 - i));
        }
    }
    
    return wynik;
}

void wypiszBinarnie(int liczba, int bity) {
    cout << "Binarnie: ";
    for(int i = bity - 1; i >= 0; i--) {
        cout << ((liczba >> i) & 1);
    }
    cout << endl;
}

int main() {
    const int ROZMIAR = 8;
    int tablica[ROZMIAR];
    
    cout << "Podaj " << ROZMIAR << " bitow (0 lub 1):" << endl;
    for(int i = 0; i < ROZMIAR; i++) {
        do {
            cout << "Bit " << i << ": ";
            cin >> tablica[i];
            if(tablica[i] != 0 && tablica[i] != 1) {
                cout << "Możesz podać tylko 0 lub 1" << endl;
            }
        } while(tablica[i] != 0 && tablica[i] != 1);
    }
    
    cout << "\nPodana tablica: ";
    for(int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    int wynik = konwertujTabliceDoBinarnej(tablica, ROZMIAR);
    
    cout << "Wynik (dziesietnie): " << wynik << endl;
    wypiszBinarnie(wynik, ROZMIAR);
    
    return 0;
}
