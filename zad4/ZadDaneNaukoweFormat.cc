#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = M_PI;
    const double E = M_E;
    const double PHI = (1 + sqrt(5)) / 2;  // złoty podział

    // Nagłówek
    cout << left << setw(15) << "Stała" 
         << setw(25) << "Wartość (domyślnie)"
         << setw(25) << "Notacja stała"
         << setw(25) << "Notacja naukowa" << endl;

    // Separator
    cout << setfill('-') << setw(15) << "-"
         << setw(25) << "-"
         << setw(25) << "-"
         << setw(25) << "-" << endl;

    cout << setfill(' ');  // przywracamy spacje jako wypełnienie

    // Pi
    cout << left << setw(15) << "Pi";

    cout << right << setw(25) << setprecision(6) << defaultfloat << PI;
    cout << setw(25) << fixed << setprecision(6) << PI;
    cout << setw(25) << scientific << setprecision(6) << PI << endl;

    // e
    cout << left << setw(15) << "e";

    cout << right << setw(25) << setprecision(6) << defaultfloat << E;
    cout << setw(25) << fixed << setprecision(6) << E;
    cout << setw(25) << scientific << setprecision(6) << E << endl;

    // Złoty podział
    cout << left << setw(15) << "Złoty podział";

    cout << right << setw(25) << setprecision(6) << defaultfloat << PHI;
    cout << setw(25) << fixed << setprecision(6) << PHI;
    cout << setw(25) << scientific << setprecision(6) << PHI << endl;

    return 0;
}
