#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double ObliczPole() = 0;
    virtual double ObliczObwod() = 0;
    virtual void Wyswietl() = 0;
    virtual ~Figura() {}  // Wirtualny destruktor
};

class Kwadrat : public Figura {
private:
    double bok;

public:
    Kwadrat(double a) : bok(a) {}

    double ObliczPole() override {
        return bok * bok;
    }

    double ObliczObwod() override {
        return 4 * bok;
    }

    void Wyswietl() override {
        cout << "Kwadrat o boku: " << bok << endl;
        cout << "Pole: " << ObliczPole() << " m²" << endl;
        cout << "Obwód: " << ObliczObwod() << " m" << endl;
    }
};

class Trojkat : public Figura {
private:
    double a, b, c;

public:
    Trojkat(double x, double y, double z) : a(x), b(y), c(z) {}

    double ObliczPole() override {
        double p = (a + b + c) / 2;  // Połowa obwodu (wzór Herona)
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double ObliczObwod() override {
        return a + b + c;
    }

    void Wyswietl() override {
        cout << "Trójkąt o bokach: " << a << ", " << b << ", " << c << endl;
        cout << "Pole: " << ObliczPole() << " m²" << endl;
        cout << "Obwód: " << ObliczObwod() << " m" << endl;
    }
};

class Prostokat : public Figura {
private:
    double a, b;

public:
    Prostokat(double x, double y) : a(x), b(y) {}

    double ObliczPole() override {
        return a * b;
    }

    double ObliczObwod() override {
        return 2 * (a + b);
    }

    void Wyswietl() override {
        cout << "Prostokąt o bokach: " << a << " × " << b << endl;
        cout << "Pole: " << ObliczPole() << " m²" << endl;
        cout << "Obwód: " << ObliczObwod() << " m" << endl;
    }
};

class Kolo : public Figura {
private:
    double promien;
    const double PI = 3.14159265359;

public:
    Kolo(double r) : promien(r) {}

    double ObliczPole() override {
        return PI * promien * promien;
    }

    double ObliczObwod() override {
        return 2 * PI * promien;
    }

    double Dystans(double powierzchniaNaOsobe) {
        return sqrt(powierzchniaNaOsobe / PI);
    }

    void Wyswietl() override {
        cout << "Koło o promieniu: " << promien << endl;
        cout << "Pole: " << ObliczPole() << " m²" << endl;
        cout << "Obwód: " << ObliczObwod() << " m" << endl;
    }
};

int main() {
    Figura *figury[] = {
        new Kwadrat(5),
        new Trojkat(3, 4, 5),
        new Prostokat(4, 6),
        new Kolo(3)
    };

    cout << "Informacje o figurach geometrycznych:" << endl;
    cout << "----------------------------------" << endl;
    
    for(int i = 0; i < 4; i++) {
        figury[i]->Wyswietl();
        cout << endl;
    }

    // Test funkcji Dystans dla koła
    Kolo *kolo = dynamic_cast<Kolo*>(figury[3]);
    double powierzchniaNaOsobe = 4.0;  // 4m² na osobę

    cout << "Test dystansu społecznego:" << endl;
    cout << "----------------------------------" << endl;
    cout << "Przy " << powierzchniaNaOsobe << " m² na osobę:" << endl;
    cout << "Minimalny dystans między osobami: " << 
            kolo->Dystans(powierzchniaNaOsobe) << " m" << endl;

    // Zwolnienie pamięci
    for(int i = 0; i < 4; i++) {
        delete figury[i];
    }

    return 0;
}
