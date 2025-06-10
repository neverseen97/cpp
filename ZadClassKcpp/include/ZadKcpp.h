#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>

class ZadKcpp {
public:
    ZadKcpp();

    // menu i obsługa zadań
    void pokazMenu();
    void uruchomZadanie(int sekcja, int numer);

    // Zadanie 2.2 - Pola figur
    double poleProstokata(double a, double b);
    double poleKwadratu(double a);
    double poleKola(double r);

    // Zadanie 2.3 - Przeciążanie dodawania
    int dodaj(int a, int b);
    double dodaj(double a, double b);
    std::string dodaj(const std::string& a, const std::string& b);

    // Zadanie 3.1 - Zamiana miejscami
    void zamienMiejscami(int* a, int* b);

    // Zadanie 3.2 - Suma tablicy
    int sumaTablicy(int* tab, int rozmiar);

    // Zadanie 3.3 - Największy element
    int* znajdzNajwiekszy(int* tab, int rozmiar);

    // Zadanie 4.4 - Formatowanie tabeli
    void wyswietlTabeleProdukty();

    // Zadanie 4.7 - Parzysta/Nieparzysta
    bool czyParzystaBitowo(int liczba);
    bool czyParzystaModulo(int liczba);
    bool czyParzystaWarunkowa(int liczba);

    // Zadanie 5.1 - Metody klasy
    void ustawDane(int x);
    int pobierzDane() const;

    // Zadanie 5.3 - Unia
    void pokazDzialanieUnii();

    // Zadanie 5.6 - Obliczenia geometryczne
    double obliczPoleKola(double r) const;
    double obliczObwodKola(double r) const;
    double obliczDystans(double powierzchniaNaOsobe) const;

private:
    int danePrivate;
    const double PI = 3.14159265359;

protected:
    int daneProtected;
};

#endif 
