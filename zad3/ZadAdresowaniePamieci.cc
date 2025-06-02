#include <iostream>
using namespace std;

int main() {
    /* 
    Pamięć jest adresowana linowo.
    Kiedy deklarujemy zmienne to ich adresy zazwyczaj różnią się o rozmiar typu zmiennej. Na przykład:
    int zajmuje 4 bajty,
    char - 1 bajt
    double -8 bajtów
    
    Kolejność adresów pokazuje w jaki sposób pamięć jest przydzielan dla zmiennych w programie.
    */

    int a = 10;
    int b = 20;
    char c = 'A';
    double d = 3.14;
    
    cout << "Adresy zmiennych w pamieci:" << endl;
    cout << "---------------------------" << endl;
    cout << "Adres zmiennej a (int):    " << &a << endl;
    cout << "Adres zmiennej b (int):    " << &b << endl;
    cout << "Adres zmiennej c (char):   " << (void*)&c << endl;
    cout << "Adres zmiennej d (double): " << &d << endl;
    
    cout << "\nRozmiary typow:" << endl;
    cout << "-------------" << endl;
    cout << "Rozmiar int:    " << sizeof(int) << " bajtow" << endl;
    cout << "Rozmiar char:   " << sizeof(char) << " bajt" << endl;
    cout << "Rozmiar double: " << sizeof(double) << " bajtow" << endl;
    
    return 0;
}
