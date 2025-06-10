#include "ZadKcpp.h"
#include <iostream>
#include <iomanip>

using namespace std;

ZadKcpp::ZadKcpp() : danePrivate(0), daneProtected(0) {}

void ZadKcpp::pokazMenu() {
    cout << "\nMenu programu zadań KCPP\n";
    cout << "=======================\n";
    cout << "Sekcja 2 - Zwracanie przez funkcje:\n";
    cout << "  2.2 - Obliczanie pól figur\n";
    cout << "  2.3 - Przeciążanie funkcji dodawania\n";
    cout << "Sekcja 3 - Arytmetyka wskaźników:\n";
    cout << "  3.1 - Zamiana miejscami\n";
    cout << "  3.2 - Suma tablicy\n";
    cout << "  3.3 - Znajdowanie największego elementu\n";
    cout << "Sekcja 4 - Operacje wejścia/wyjścia:\n";
    cout << "  4.4 - Formatowanie tabeli produktów\n";
    cout << "  4.7 - Sprawdzanie parzystości\n";
    cout << "Sekcja 5 - Klasy:\n";
    cout << "  5.1 - Metody klasy\n";
    cout << "  5.3 - Działanie unii\n";
    cout << "  5.6 - Obliczenia geometryczne\n";
    cout << "\nWybierz sekcję i numer zadania (np. 2 2): ";
}

void ZadKcpp::uruchomZadanie(int sekcja, int numer) {
    switch (sekcja) {
        case 2:
            switch (numer) {
                case 2: {
                    cout << "\nObliczanie pól figur:\n";
                    cout << "Pole prostokąta (2,3): " << poleProstokata(2, 3) << endl;
                    cout << "Pole kwadratu (4): " << poleKwadratu(4) << endl;
                    cout << "Pole koła (2): " << poleKola(2) << endl;
                    break;
                }
                case 3: {
                    cout << "\nPrzeciążanie funkcji dodawania:\n";
                    cout << "Dodawanie liczb całkowitych: " << dodaj(5, 3) << endl;
                    cout << "Dodawanie liczb zmiennoprzecinkowych: " << dodaj(3.14, 2.86) << endl;
                    cout << "Łączenie napisów: " << dodaj("Hello ", "World!") << endl;
                    break;
                }
                default:
                    cout << "Nieznane zadanie w sekcji 2\n";
            }
            break;

        case 3:
            switch (numer) {
                case 1: {
                    int a = 5, b = 10;
                    cout << "\nZamiana miejscami:\n";
                    cout << "Przed: a = " << a << ", b = " << b << endl;
                    zamienMiejscami(&a, &b);
                    cout << "Po: a = " << a << ", b = " << b << endl;
                    break;
                }
                case 2: {
                    int tab[] = {1, 2, 3, 4, 5};
                    cout << "\nSuma tablicy: " << sumaTablicy(tab, 5) << endl;
                    break;
                }
                case 3: {
                    int tab[] = {4, 2, 7, 1, 5};
                    int* max = znajdzNajwiekszy(tab, 5);
                    cout << "\nNajwiększy element: " << *max << endl;
                    break;
                }
                default:
                    cout << "Nieznane zadanie w sekcji 3\n";
            }
            break;

        case 4:
            switch (numer) {
                case 4: {
                    wyswietlTabeleProdukty();
                    break;
                }
                case 7: {
                    int liczba = 42;
                    cout << "\nSprawdzanie parzystości liczby " << liczba << ":\n";
                    cout << "Metoda bitowa: " << (czyParzystaBitowo(liczba) ? "parzysta" : "nieparzysta") << endl;
                    cout << "Metoda modulo: " << (czyParzystaModulo(liczba) ? "parzysta" : "nieparzysta") << endl;
                    cout << "Metoda warunkowa: " << (czyParzystaWarunkowa(liczba) ? "parzysta" : "nieparzysta") << endl;
                    break;
                }
                default:
                    cout << "Nieznane zadanie w sekcji 4\n";
            }
            break;

        case 5:
            switch (numer) {
                case 1: {
                    ustawDane(42);
                    cout << "\nDane z klasy: " << pobierzDane() << endl;
                    break;
                }
                case 3: {
                    pokazDzialanieUnii();
                    break;
                }
                case 6: {
                    double r = 5.0;
                    cout << "\nObliczenia dla koła o promieniu " << r << ":\n";
                    cout << "Pole: " << obliczPoleKola(r) << endl;
                    cout << "Obwód: " << obliczObwodKola(r) << endl;
                    cout << "Dystans przy 4m² na osobę: " << obliczDystans(4.0) << "m" << endl;
                    break;
                }
                default:
                    cout << "Nieznane zadanie w sekcji 5\n";
            }
            break;

        default:
            cout << "Nieznana sekcja\n";
    }
}

double ZadKcpp::poleProstokata(double a, double b) { return a * b; }
double ZadKcpp::poleKwadratu(double a) { return a * a; }
double ZadKcpp::poleKola(double r) { return PI * r * r; }

int ZadKcpp::dodaj(int a, int b) { return a + b; }
double ZadKcpp::dodaj(double a, double b) { return a + b; }
string ZadKcpp::dodaj(const string& a, const string& b) { return a + b; }

void ZadKcpp::zamienMiejscami(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ZadKcpp::sumaTablicy(int* tab, int rozmiar) {
    int suma = 0;
    for(int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return suma;
}

int* ZadKcpp::znajdzNajwiekszy(int* tab, int rozmiar) {
    if (rozmiar <= 0) return nullptr;
    int* max = tab;
    for(int i = 1; i < rozmiar; i++) {
        if (tab[i] > *max) max = &tab[i];
    }
    return max;
}

bool ZadKcpp::czyParzystaBitowo(int liczba) { return !(liczba & 1); }
bool ZadKcpp::czyParzystaModulo(int liczba) { return liczba % 2 == 0; }
bool ZadKcpp::czyParzystaWarunkowa(int liczba) { return (liczba & 1) ? false : true; }

void ZadKcpp::ustawDane(int x) { danePrivate = x; }
int ZadKcpp::pobierzDane() const { return danePrivate; }

void ZadKcpp::pokazDzialanieUnii() {
    union {
        int i;
        float f;
        char c;
    } unia;
    
    unia.i = 65;
    cout << "\nDemonstracja działania unii:\n";
    cout << "Jako int: " << unia.i << endl;
    cout << "Jako char: " << unia.c << endl;
    cout << "Jako float: " << unia.f << endl;
}

double ZadKcpp::obliczPoleKola(double r) const { return PI * r * r; }
double ZadKcpp::obliczObwodKola(double r) const { return 2 * PI * r; }
double ZadKcpp::obliczDystans(double powierzchniaNaOsobe) const {
    return sqrt(powierzchniaNaOsobe / PI);
}

void ZadKcpp::wyswietlTabeleProdukty() {
    cout << "\nTabela produktów:\n";
    cout << setfill('-') << setw(42) << "" << setfill(' ') << endl;
    
    cout << "| " << left << setw(15) << "Nazwa"
         << "| " << right << setw(8) << "Cena"
         << "| " << setw(7) << "Ilosc" << " |" << endl;
    
    cout << "|" << setfill('-') << setw(17) << ""
         << "|" << setw(10) << ""
         << "|" << setw(9) << "" << "|" << setfill(' ') << endl;
    
    cout << "| " << left << setw(15) << "Chleb"
         << "| " << right << fixed << setprecision(2) << setw(7) << 4.99 << " "
         << "| " << setw(6) << 5 << " |" << endl;
    
    cout << "| " << left << setw(15) << "Mleko"
         << "| " << right << setw(7) << 3.20 << " "
         << "| " << setw(6) << 10 << " |" << endl;
    
    cout << "| " << left << setw(15) << "Jajka (10 szt)"
         << "| " << right << setw(7) << 8.50 << " "
         << "| " << setw(6) << 3 << " |" << endl;
    
    cout << setfill('-') << setw(42) << "" << setfill(' ') << endl;
}
