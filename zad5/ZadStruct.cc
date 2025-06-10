#include <iostream>
#include <string>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int wiek;
    float srednia;
    
    Student(string i = "", string n = "", int w = 0, float s = 0.0) 
        : imie(i), nazwisko(n), wiek(w), srednia(s) {}
        
    void wyswietl() {
        cout << "Student: " << imie << " " << nazwisko << endl;
        cout << "Wiek: " << wiek << endl;
        cout << "Średnia: " << srednia << endl;
    }
};

int main() {
    Student s1;  //konstruktor domyślny
    Student s2 = {"Jan", "Kowalski", 20, 4.5}; 
    Student s3("Anna", "Nowak", 22, 4.8);       //konstruktor z parametrami
    
    s1.imie = "Piotr";
    s1.nazwisko = "Wiśniewski";
    s1.wiek = 21;
    s1.srednia = 4.0;
    
    cout << "Student 1:" << endl;
    s1.wyswietl();
    
    cout << "\nStudent 2:" << endl;
    s2.wyswietl();
    
    cout << "\nStudent 3:" << endl;
    s3.wyswietl();
    
    cout << "\nBezpośredni dostęp do pól s2:" << endl;
    cout << "Imię: " << s2.imie << endl;
    cout << "Nazwisko: " << s2.nazwisko << endl;
    
    return 0;
}
