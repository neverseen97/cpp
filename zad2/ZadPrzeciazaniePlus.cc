#include <iostream>
using namespace std;

class Punkt {
private:
    double x;
    double y;

public:
    Punkt(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    //przeciazenie
    Punkt operator+(const Punkt& other) const {
        return Punkt(x + other.x, y + other.y);
    }

    void wyswietl() const {
        cout << "(" << x << ", " << y << ")";
    }

    double getX() const { return x; }
    double getY() const { return y; }
};

int main() {
    //tworzenie punktów
    Punkt p1(2.5, 3.7);
    Punkt p2(1.5, 2.3);

    cout << "Punkt p1 = ";
    p1.wyswietl();
    cout << endl;

    cout << "Punkt p2 = ";
    p2.wyswietl();
    cout << endl;

    //dodawanie
    Punkt p3 = p1 + p2;
    
    cout << "Suma punktow p1 + p2 = ";
    p3.wyswietl();
    cout << endl;

    return 0;
}
