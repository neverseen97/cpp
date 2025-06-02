#include <iostream>
using namespace std;

int main() {
    double tablica1[5];
    double tablica2[5];
    double tablica3[5];
    
    //dane do 1 tablicy
    cout << "Podaj 5 liczb zmiennoprzecinkowych:" << endl;
    for(double* p = tablica1; p < tablica1 + 5; p++) {
        cout << "Podaj liczbe: ";
        cin >> *p;
    }
    
    double* p1 = tablica1;
    double* p2 = tablica2;
    for(int i = 0; i < 5; i++) {
        *p2 = *p1 * 2;
        p1++;
        p2++;
    }
    
    p1 = tablica1;
    p2 = tablica2;
    double* p3 = tablica3;
    for(int i = 0; i < 5; i++) {
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }
    
    cout << "\nPierwsza tablica: ";
    for(double* p = tablica1; p < tablica1 + 5; p++) {
        cout << *p << " ";
    }
    
    cout << "\nDruga tablica (x2): ";
    for(double* p = tablica2; p < tablica2 + 5; p++) {
        cout << *p << " ";
    }
    
    cout << "\nTrzecia tablica (suma): ";
    for(double* p = tablica3; p < tablica3 + 5; p++) {
        cout << *p << " ";
    }
    cout << endl;
    
    return 0;
}
