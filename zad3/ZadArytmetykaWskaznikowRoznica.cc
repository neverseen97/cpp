#include <iostream>
using namespace std;

int main() {
    int tablica[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int* p1 = &tablica[1]; 
    int* p2 = &tablica[7]; 
    
    cout << "Tablica: ";
    for(int i = 0; i < 10; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    cout << "Pierwszy wskaznik wskazuje na: " << *p1 << endl;
    cout << "Drugi wskaznik wskazuje na: " << *p2 << endl;
    
    //różnica
    ptrdiff_t roznica = p2 - p1;
    cout << "Roznica miedzy wskaznikami: " << roznica << " elementow" << endl;
    
    return 0;
}
