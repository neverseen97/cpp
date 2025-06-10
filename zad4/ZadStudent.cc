#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string nrIndeksu;

    Student(string i, string n, string nr) 
        : imie(i), nazwisko(n), nrIndeksu(nr) {}
};

//walidacja
bool walidujDane(const Student& student, const vector<Student>& baza) {
    if (student.imie.empty() || student.nazwisko.empty() || student.nrIndeksu.empty()) {
        cout << "Błąd: Wszystkie pola muszą być wypełnione!" << endl;
        return false;
    }

    for (const auto& s : baza) {
        if (s.nrIndeksu == student.nrIndeksu) {
            cout << "Błąd: Student o podanym numerze indeksu już istnieje!" << endl;
            return false;
        }
    }
    return true;
}

class BazaStudentow {
private:
    vector<Student> studenci;

public:
    void dodajStudenta() {
        string imie, nazwisko, nrIndeksu;
        cout << "Podaj imię: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj numer indeksu: ";
        cin >> nrIndeksu;

        Student nowyStudent(imie, nazwisko, nrIndeksu);
        
        if (walidujDane(nowyStudent, studenci)) {
            studenci.push_back(nowyStudent);
            cout << "Student dodany pomyślnie." << endl;
        }
    }

    void usunStudenta() {
        string nrIndeksu;
        cout << "Podaj numer indeksu studenta do usunięcia: ";
        cin >> nrIndeksu;

        auto it = find_if(studenci.begin(), studenci.end(),
            [nrIndeksu](const Student& s) { return s.nrIndeksu == nrIndeksu; });

        if (it != studenci.end()) {
            studenci.erase(it);
            cout << "Student usunięty pomyślnie." << endl;
        } else {
            cout << "Nie znaleziono studenta o podanym numerze indeksu." << endl;
        }
    }

    void wyswietlListe() const {
        if (studenci.empty()) {
            cout << "Baza studentów jest pusta." << endl;
            return;
        }

        cout << "\nLista studentów:" << endl;
        cout << "----------------------------------------" << endl;
        for (const auto& s : studenci) {
            cout << "Indeks: " << s.nrIndeksu 
                 << ", Nazwisko: " << s.nazwisko 
                 << ", Imię: " << s.imie << endl;
        }
        cout << "----------------------------------------" << endl;
    }

    void sortujListe() {
        sort(studenci.begin(), studenci.end(),
            [](const Student& a, const Student& b) {
                if (a.nazwisko != b.nazwisko)
                    return a.nazwisko < b.nazwisko;
                return a.imie < b.imie;
            });
        cout << "Lista posortowana." << endl;
    }

    void sprawdzStudenta() {
        string nrIndeksu;
        cout << "Podaj numer indeksu studenta: ";
        cin >> nrIndeksu;

        auto it = find_if(studenci.begin(), studenci.end(),
            [nrIndeksu](const Student& s) { return s.nrIndeksu == nrIndeksu; });

        if (it != studenci.end()) {
            cout << "Student znaleziony:" << endl;
            cout << "Imię: " << it->imie << endl;
            cout << "Nazwisko: " << it->nazwisko << endl;
            cout << "Nr indeksu: " << it->nrIndeksu << endl;
        } else {
            cout << "Nie znaleziono studenta o podanym numerze indeksu." << endl;
        }
    }
};

int main() {
    BazaStudentow baza;
    int wybor;

    while (true) {
        cout << "\nBaza Studentów - Menu:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usuń studenta" << endl;
        cout << "3. Wyświetl listę" << endl;
        cout << "4. Sortuj listę" << endl;
        cout << "5. Sprawdź studenta" << endl;
        cout << "0. Wyjście" << endl;
        cout << "Wybór: ";
        cin >> wybor;

        switch (wybor) {
            case 1: baza.dodajStudenta(); break;
            case 2: baza.usunStudenta(); break;
            case 3: baza.wyswietlListe(); break;
            case 4: baza.sortujListe(); break;
            case 5: baza.sprawdzStudenta(); break;
            case 0: return 0;
            default: cout << "Nieprawidłowy wybór!" << endl;
        }
    }

    return 0;
}
