#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    cout << "Operatory arytmetyczne:" << endl;
    int a = 10, b = 3;
    cout << "Dla a = " << a << " i b = " << b << ":" << endl;
    cout << "Dodawanie (+):        " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Odejmowanie (-):      " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Mnozenie (*):         " << a << " * " << b << " = " << (a * b) << endl;
    cout << "Dzielenie (/):        " << a << " / " << b << " = " << (a / b) << endl;
    cout << "Reszta z dzielenia (%): " << a << " % " << b << " = " << (a % b) << endl;
    
    cout << "Inkrementacja i dekrementacja:" << endl;
    int x = 5;
    cout << "x = " << x << endl;
    cout << "Preinkrementacja (++x):  " << ++x << endl;
    cout << "Postinkrementacja (x++): " << x++ << endl;
    cout << "Po operacjach x = " << x << endl;
    cout << "Predekrementacja (--x):  " << --x << endl;
    cout << "Postdekrementacja (x--): " << x-- << endl;
    cout << "Po operacjach x = " << x << endl;
}

void OperatoryPrzypisania() {
    cout << "\nOperatory przypisania:" << endl;
    
    int x = 10;
    cout << "Poczatkowa wartosc x = " << x << endl;
    
    x += 5; 
    cout << "Po x += 5:  x = " << x << endl;
    
    x -= 3; 
    cout << "Po x -= 3:  x = " << x << endl;
    
    x *= 2;  
    cout << "Po x *= 2:  x = " << x << endl;
    
    x /= 4;  
    cout << "Po x /= 4:  x = " << x << endl;
    
    x %= 3;  
    cout << "Po x %= 3:  x = " << x << endl;
    
    x <<= 2; 
    cout << "Po x <<= 2: x = " << x << endl;
    
    x >>= 1; 
    cout << "Po x >>= 1: x = " << x << endl;
    
    x &= 5;  
    cout << "Po x &= 5:  x = " << x << endl;
    
    x |= 8;  
    cout << "Po x |= 8:  x = " << x << endl;
    
    x ^= 3;  
    cout << "Po x ^= 3:  x = " << x << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}
