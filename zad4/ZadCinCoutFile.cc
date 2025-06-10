#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "1. Wypisywanie na ekran:" << endl;
    cout << "Hello, World!" << endl << endl;
    
    // 2. komunikaty błędów
    cerr << "2. Komunikat błędu (cerr):" << endl;
    cerr << "To jest przykładowy błąd!" << endl << endl;
    
    // 3. zapis do pliku
    ofstream plik_zapis("dane.txt");
    if(plik_zapis.is_open()) {
        plik_zapis << "Pierwsza linia w pliku" << endl;
        plik_zapis << "Druga linia w pliku" << endl;
        plik_zapis << "Trzecia linia w pliku" << endl;
        plik_zapis.close();
        cout << "3. Zapisano dane do pliku 'dane.txt'" << endl << endl;
    } else {
        cerr << "Błąd: Nie można otworzyć pliku do zapisu!" << endl;
        return 1;
    }
    
    // 4. odczyt z pliku
    cout << "4. Odczytywanie z pliku:" << endl;
    ifstream plik_odczyt("dane.txt");
    if(plik_odczyt.is_open()) {
        string linia;
        while(getline(plik_odczyt, linia)) {
            cout << "   " << linia << endl;
        }
        plik_odczyt.close();
    } else {
        cerr << "Błąd: Nie można otworzyć pliku do odczytu!" << endl;
        return 1;
    }
    
    return 0;
}
