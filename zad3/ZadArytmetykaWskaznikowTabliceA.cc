#include <iostream>
using namespace std;

int main() {
    int tablica[10];
    int* p = tablica;
    
    for(int i = 0; i < 10; i++) {
        *(p + i) = i + 1;
    }
    
    cout << "Elementy tablicy: ";
    for(int* ptr = tablica; ptr < tablica + 10; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    int suma = 0;
    for(int* ptr = tablica; ptr < tablica + 10; ptr++) {
        suma += *ptr;
    }
    cout << "Suma elementow: " << suma << endl;
    
    int* max = tablica;
    for(int* ptr = tablica + 1; ptr < tablica + 10; ptr++) {
        if(*ptr > *max) {
            max = ptr;
        }
    }
    cout << "Maksymalny element: " << *max << endl;
    
    int* start = tablica;
    int* end = tablica + 9;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    cout << "Odwrocona tablica: ";
    for(int* ptr = tablica; ptr < tablica + 10; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
    
    return 0;
}
