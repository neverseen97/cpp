#include <iostream>
using namespace std;

int main() {
    int tablica[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Adresy elementow tablicy 2D 3x3:" << endl;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "tablica[" << i << "][" << j << "] = " << tablica[i][j] 
                 << "\tAdres: " << &tablica[i][j] << endl;
        }
        cout << endl;
    }
    
    /* 
    WYJAŚNIENIE:
    1. Tablica dwuwymiarowa w pamięci jest przechowywana jako jednowymiarowy
       ciąg elementów a wiersze są przechowywane jeden po drugim.
    2. W tablicy 3x3 elementy są ułożone w następującej kolejności:
       [0][0], [0][1], [0][2], [1][0], [1][1], [1][2], [2][0], [2][1], [2][2]
    3. Różnica między adresami sąsiednich elementów w wierszu wynosi sizeof(int)
    4. Różnica między adresami elementów w sąsiednich wierszach wynosi 3 * sizeof(int)
    */
    
    int* p = &tablica[0][0];
    cout << "elementy tablicy wyświetlane za pomocą wskaźnika:" << endl;
    for(int i = 0; i < 9; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    
    return 0;
}
