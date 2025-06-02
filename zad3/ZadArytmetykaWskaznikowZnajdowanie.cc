#include <iostream>
using namespace std;

int* maxElement(int* tablica, int rozmiar) {
    int* max = tablica;
    for(int* p = tablica + 1; p < tablica + rozmiar; p++) {
        if(*p > *max) {
            max = p;
        }
    }
    return max;
}

int main() {
    int tablica[] = {4, 2, 8, 5, 1, 9, 3, 7, 6};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    
    cout << "Elementy tablicy: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    int* max = maxElement(tablica, rozmiar);
    cout << "Najwiekszy element: " << *max << endl;
    cout << "Indeks najwiekszego elementu: " << (max - tablica) << endl;
    
    return 0;
}
