#include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    // 1. Wypisywanie tekstu
    // C
    printf("Styl C: Hello, World!\n");
    // C++
    cout << "Styl C++: Hello, World!" << endl;
    
    // 2: Formatowanie liczb
    int liczba = 42;
    double pi = 3.14159;
    
    // C
    printf("\nStyl C:\n");
    printf("Liczba całkowita: %d\n", liczba);
    printf("Liczba zmiennoprzecinkowa: %.2f\n", pi);
    
    // C++
    cout << "\nStyl C++:" << endl;
    cout << "Liczba całkowita: " << liczba << endl;
    cout << fixed << setprecision(2);
    cout << "Liczba zmiennoprzecinkowa: " << pi << endl;
    
    // 3: Wczytywanie danych
    char tekst[100];
    int x;
    
    // C
    printf("\nStyl C - Podaj liczbę: ");
    scanf("%d", &x);
    printf("Wczytana liczba: %d\n", x);
    
    // C++
    cout << "\nStyl C++ - Podaj liczbę: ";
    cin >> x;
    cout << "Wczytana liczba: " << x << endl;
    
    // 4: Operacje na plikach
    FILE* plik_c;
    
    // C
    plik_c = fopen("test_c.txt", "w");
    if(plik_c != NULL) {
        fprintf(plik_c, "Test zapisu (C)\n");
        fclose(plik_c);
    }
    
    // C++
    ofstream plik_cpp("test_cpp.txt");
    if(plik_cpp.is_open()) {
        plik_cpp << "Test zapisu (C++)" << endl;
        plik_cpp.close();
    }
    
    return 0;
}
