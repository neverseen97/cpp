#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    //konwersja liczb na string
    stringstream ss1;
    int liczba = 42;
    double pi = 3.14159;
    ss1 << "Liczba: " << liczba << ", Pi: " << pi;
    string wynik = ss1.str();
    cout << "1. konwersja do stringa: " << wynik << endl;
    
    //parsowanie stringa na liczby
    stringstream ss2("123 456.789");
    int a;
    double b;
    ss2 >> a >> b;
    cout << "2. Parsowanie stringa:" << endl;
    cout << "   liczba całkowita: " << a << endl;
    cout << "   liczba zmiennoprzecinkowa: " << b << endl;
    
    //formatowanie danych
    stringstream ss3;
    string imie = "Jan";
    int wiek = 25;
    ss3 << "Imie: " << imie << ", Wiek: " << wiek << " lat";
    cout << "3. Formatowanie: " << ss3.str() << endl;
    
    //czyszczenie i ponowne użycie strumienia
    ss3.str("");
    ss3.clear(); 
    ss3 << "nowy tekst po wyczyszczeniu";
    cout << "4. Po wyczyszczeniu: " << ss3.str() << endl;
    
    //walidacja danych
    string tekst = "123456abc789";
    stringstream ss4(tekst);
    int liczba1;
    ss4 >> liczba1;
    cout << "5. Walidacja:" << endl;
    cout << "   wczytana liczba: " << liczba1 << endl;
    cout << "   czy wystąpił błąd? " << (ss4.fail() ? "Nie" : "Tak") << endl;
    
    return 0;
}
