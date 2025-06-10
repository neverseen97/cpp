#include <iostream>
using namespace std;

class Przyklad {
private:
    int zmiennaPrywatna;
    double liczbaZmiennoprzecinkowa;
    
protected:
    int zmiennaChroniona;
    string tekstChroniony;
    
public:
    int zmiennaPubliczna;
    
    inline void ustawZmiennaPriv(int wartosc) {
        zmiennaPrywatna = wartosc;
        cout << "Ustawiono zmienną prywatną na: " << zmiennaPrywatna << endl;
    }
    
    void wyswietlWszystko();
    
    void modyfikujChronione(int wartosc, string tekst);
    
    Przyklad() : zmiennaPrywatna(0), liczbaZmiennoprzecinkowa(0.0), 
                zmiennaChroniona(0), tekstChroniony(""), 
                zmiennaPubliczna(0) {}
};

void Przyklad::wyswietlWszystko() {
    cout << "Zmienna prywatna: " << zmiennaPrywatna << endl;
    cout << "Liczba zmiennoprzecinkowa: " << liczbaZmiennoprzecinkowa << endl;
    cout << "Zmienna chroniona: " << zmiennaChroniona << endl;
    cout << "Tekst chroniony: " << tekstChroniony << endl;
    cout << "Zmienna publiczna: " << zmiennaPubliczna << endl;
}

void Przyklad::modyfikujChronione(int wartosc, string tekst) {
    zmiennaChroniona = wartosc;
    tekstChroniony = tekst;
    zmiennaPrywatna = wartosc * 2;
    cout << "Zmodyfikowano elementy chronione i prywatne" << endl;
}

int main() {
    Przyklad obiekt;
    
    obiekt.ustawZmiennaPriv(42);
    obiekt.zmiennaPubliczna = 100;
    obiekt.modyfikujChronione(10, "Test");
    
    obiekt.wyswietlWszystko();
    
    return 0;
}
