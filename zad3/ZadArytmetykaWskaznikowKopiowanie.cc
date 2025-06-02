#include <iostream>
using namespace std;

void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {
    for(int* p = zrodlo; p < zrodlo + rozmiar; p++) {
        *(cel + (p - zrodlo)) = *p;
    }
}

int main() {
    int tablica1[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica1) / sizeof(tablica1[0]);
    int tablica2[5];
    
    cout << "Tablica zrodlowa: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica1[i] << " ";
    }
    cout << endl;
    
    kopiujTablice(tablica1, tablica2, rozmiar);
    
    cout << "Tablica skopiowana: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica2[i] << " ";
    }
    cout << endl;
    
    return 0;
}
