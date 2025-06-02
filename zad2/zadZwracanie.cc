#include <iostream>
using namespace std;

//wartość
int zwrocWartosc() {
    int x = 10;
    return x; 
}

//referencja
int& zwrocReferencje(int& liczba) {
    liczba *= 2;
    return liczba;  
}

//wskaźnik
int* zwrocWskaznik(int* liczba) {
    *liczba += 5;  
    return liczba;  
}

//tablica
int* zwrocTablice() {
    static int tab[5] = {1, 2, 3, 4, 5};  
    return tab;  
}

int main() {
    int wynik1 = zwrocWartosc();
    cout << "Zwrocono przez wartosc: " << wynik1 << endl;

    int liczba = 5;
    cout << "Przed modyfikacja przez referencje: " << liczba << endl;
    int& wynik2 = zwrocReferencje(liczba);
    cout << "Po modyfikacji przez referencje: " << wynik2 << endl;

    int liczba2 = 10;
    cout << "Przed modyfikacja przez wskaznik: " << liczba2 << endl;
    int* wynik3 = zwrocWskaznik(&liczba2);
    cout << "Po modyfikacji przez wskaznik: " << *wynik3 << endl;

    int* tablica = zwrocTablice();
    cout << "Elementy zwroconej tablicy: ";
    for(int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
