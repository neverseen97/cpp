#include <iostream>
#include <iomanip>
using namespace std;

double celsjuszNaFahrenheit(double celsjusz) {
    return (celsjusz * 9.0/5.0) + 32.0;
}

int main() {
    const int TEMP_WIDTH = 8;
    
    
    cout << setw(TEMP_WIDTH) << "Celsjusz" << "   "
         << setw(TEMP_WIDTH) << "Fahrenheit" << endl;
    
    cout << setfill('-') << setw(TEMP_WIDTH) << "" << "    "
         << setw(TEMP_WIDTH) << "" << endl;
     
    cout << setfill(' ');
    
    for(int c = -10; c <= 10; c += 5) {
        double f = celsjuszNaFahrenheit(c);
        
        cout << setw(TEMP_WIDTH) << c << "    "
             << fixed << setprecision(2)
             << setw(TEMP_WIDTH) << f << endl;
    }
    
    return 0;
}
