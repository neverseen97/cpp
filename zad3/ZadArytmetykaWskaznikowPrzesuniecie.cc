#include <iostream>
using namespace std;

void przesun(int* tablica, int rozmiar) {
    int ostatni = *(tablica + rozmiar - 1);
    
    for(int* p = tablica + rozmiar - 1; p > tablica; p--) {
        *p = *(p - 1);
    }
    
    *tablica = ostatni;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    
    cout << "Przed przesunieciem: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    przesun(tablica, rozmiar);
    
    cout << "Po przesunieciu: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    return 0;
}
