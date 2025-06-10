#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1 = 12.3456789;
    double x2 = 5.6789123;
    double x3 = 8.9012345;
    double t1 = 4.567;
    double t2 = 15.678912;
    double t3 = 25.789123;
    
    double average = (x1 + x2 + x3) / 3.0;
    double t_average = (t1 + t2 + t3) / 3.0;

    cout << setfill('=') << setw(50) << "=" << endl;
    
    cout << "Wynika naszego działania: " << fixed << setprecision(5) << x1 << " jest niepoprawny ale:" << endl;
    
    // formatowanie pierwszej linii
    cout << "   output:   " << setw(7) << x1 << "    T: " << setw(7) << t1 << endl;
    
    // formatowanie drugiej linii
    cout << "   output1:  " << setw(7) << x2 << "   T: " << setw(8) << t2 << endl;
    
    // formatowanie trzeciej linii
    cout << "   output2:  " << setw(7) << x3 << "   T: " << setw(9) << t3 << endl;
    
    // linia separatora
    cout << "   " << setfill('-') << setw(33) << "-" << endl;
    
    // formatowanie średniej wartości
    cout << "   average: " << setw(8) << average << "   T: " << setw(9) << t_average << endl;
    
    cout << setfill('=') << setw(50) << "=" << endl;
    
    // inne przykłady
    cout << "\nInne przykłady manipulatorów:" << endl;
    cout << "Hex: " << hex << 255 << endl;
    cout << "Dec: " << dec << 255 << endl;
    cout << "Scientific: " << scientific << 12345.6789 << endl;
    cout << "Fixed: " << fixed << 12345.6789 << endl;
    cout << "Setfill: " << setfill('*') << setw(10) << 42 << endl;
    
    return 0;
}
