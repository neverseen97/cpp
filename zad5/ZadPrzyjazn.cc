#include <iostream>
using namespace std;

class B;

class A {
private:
    int prywatnaA;
    
public:
    A() : prywatnaA(10) {}
    
    friend class B; // klasa B jest przyjacielem klasy A
    
    void wyswietlA() {
        cout << "Wartość prywatnej zmiennej A: " << prywatnaA << endl;
    }
};

class B {
private:
    int prywatnaB;
    
public:
    B() : prywatnaB(20) {}
    
    void dostepDoA(A &obj) {
        cout << "B ma dostęp do prywatnej zmiennej A: " << obj.prywatnaA << endl;
        obj.prywatnaA = 30;
        cout << "B zmodyfikowała prywatną zmienną A na: " << obj.prywatnaA << endl;
    }
    
    void wyswietlB() {
        cout << "Wartość prywatnej zmiennej B: " << prywatnaB << endl;
    }
};

int main() {
    A objektA;
    B objektB;
    
    cout << "Stan początkowy:" << endl;
    objektA.wyswietlA();
    objektB.wyswietlB();
    
    cout << "\nTest przyjaźni (B ma dostęp do A):" << endl;
    objektB.dostepDoA(objektA);
    
    cout << "\nStan po modyfikacji:" << endl;
    objektA.wyswietlA();
    
    return 0;
}
