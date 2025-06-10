#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string imie;
    int wiek;
    double srednia;

public:
    Student() {
        imie = "Nieznany";
        wiek = 0;
        srednia = 0.0;
        cout << "Wywołano konstruktor domyślny" << endl;
    }

    Student(string i, int w, double s) 
        : imie(i), wiek(w), srednia(s) {
        cout << "Wywołano konstruktor parametryczny" << endl;
    }

    Student(const Student& s) 
        : imie(s.imie), wiek(s.wiek), srednia(s.srednia) {
        cout << "Wywołano konstruktor kopiujący" << endl;
    }

    ~Student() {
        cout << "Wywołano destruktor dla " << imie << endl;
    }

    void wyswietl() const {
        cout << "Student: " << imie << ", wiek: " << wiek 
             << ", średnia: " << srednia << endl;
    }
};

int main() {
    cout << "1. Tworzenie obiektu konstruktorem domyślmym:" << endl;
    Student s1;
    s1.wyswietl();

    cout << "\n2. Tworzenie obiektu konstruktorem z parametrami:" << endl;
    Student s2("Jan Kowalski", 20, 4.5);
    s2.wyswietl();

    cout << "\n3. Tworzenie obiektu konstruktorem kopiującym:" << endl;
    Student s3 = s2;
    s3.wyswietl();

    cout << "\n4. Koniec programu" << endl;
    return 0;
}
