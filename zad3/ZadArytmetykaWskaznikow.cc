#include <iostream>
using namespace std;

void Funkcja1()
{
    cout << "Funkcja1():" << endl;

    int tab[] = {1, 2, 3, 4, 5};
    int *p = tab;

    cout << "Tablica na początku: ";
    for (int i = 0; i < 5; i++)
        cout << tab[i] << " ";
    cout << endl
         << endl;

    cout << "1. p++   : zwieksza wskaznik " << endl;
    cout << "Przed: " << *p << ", ";
    p++;
    cout << "Po: " << *p << endl;

    cout << "2. ++p   : to samo co p++" << endl;
    cout << "Przed: " << *p << ", ";
    ++p;
    cout << "Po: " << *p << endl;

    cout << "3. ++*p  : zwieksza wartość wskazywana przez p" << endl;
    cout << "Przed: " << *p << ", ";
    ++*p;
    cout << "Po: " << *p << endl;

    cout << "4. ++(*p): to samo co ++*p" << endl;
    cout << "Przed: " << *p << ", ";
    ++(*p);
    cout << "Po: " << *p << endl;

    cout << "5. ++*(p): to samo co ++*p" << endl;
    cout << "Przed: " << *p << ", ";
    ++*(p);
    cout << "Po: " << *p << endl;

    p = tab;
    cout << "6. *p++  : zwraca wartosc, potem zwieksza wskaznik" << endl;
    cout << "Przed: " << *p << ", ";
    *p++;
    cout << "Po: " << *p << endl;

    cout << "7. (*p)++: zwieksza wartosc wskazywana przez p" << endl;
    cout << "Przed: " << *p << ", ";
    (*p)++;
    cout << "Po: " << *p << endl;

    cout << "8. *(p)++: to samo co *p++" << endl;
    cout << "Przed: " << *p << ", ";
    *(p)++;
    cout << "Po: " << *p << endl;

    cout << "9. *++p  : najpierw zwieksza wskaznik, potem zwraca wartosc" << endl;
    cout << "Przed: " << *p << ", ";
    *++p;
    cout << "Po: " << *p << endl;

    cout << "10. *(++p): to samo co *++p" << endl;
    cout << "Przed: " << *p << ", ";
    *(++p);
    cout << "Po: " << *p << endl;
}

void Funkcja2()
{
    cout << "Funkcja2():" << endl;
    int a = 0, b = 0, c = 0;
    int *p = &b;

    cout << "1.  A, B, C: " << a << "  " << b << "   " << c << endl;

    *p = 10;
    cout << "2.  A, B, C: " << a << "  " << b << "   " << c << endl;

    p = &c;
    *p = 20;
    cout << "3.  A, B, C: " << a << "  " << b << "   " << c << endl;

    p = &b;
    *p = 30;
    cout << "4.  A, B, C: " << a << "  " << b << "   " << c << endl;

    p = &a;
    *p = 40;
    cout << "5.  A, B, C: " << a << " " << b << "  " << c << endl;

    p = &b;
    *p = 50;
    cout << "6.  A, B, C: " << a << " " << b << "  " << c << endl;

    p = &c;
    *p = 60;
    cout << "7.  A, B, C: " << a << " " << b << "  " << c << endl;

    p = &b;
    *p = 70;
    cout << "8.  A, B, C: " << a << " " << b << "  " << c << endl;

    p = &a;
    *p = 80;
    cout << "9.  A, B, C: " << a << " " << b << "  " << c << endl;

    p = &b;
    *p = 90;
    cout << "10. A, B, C: " << a << " " << b << "  " << c << endl;
}

int main()
{
    Funkcja1();
    Funkcja2();
    return 0;
}
