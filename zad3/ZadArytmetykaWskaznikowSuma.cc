#include <iostream>
using namespace std;

int suma(int* tablica, int rozmiar) {
    int suma = 0;
    for(int* p = tablica; p < tablica + rozmiar; p++) {
        suma += *p;
    }
    return suma;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    
    cout << "Elementy tablicy: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    cout << "Suma elementow: " << suma(tablica, rozmiar) << endl;
    
    return 0;
}
