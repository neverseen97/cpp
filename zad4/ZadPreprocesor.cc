#include <iostream>
using namespace std;

//#define 
#define PI 3.14159
#define MAX_SIZE 100

// makro z parametrami
#define KWADRAT(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

// # 
#define PRINT_VAR(x) cout << #x << " = " << x << endl

// ## 
#define CREATE_VAR(name, num) int name##num

// #ifdef i #ifndef
#define DEBUG_MODE

int main() {
    cout << "1. Przykład użycia #define dla stałych:" << endl;
    cout << "PI = " << PI << endl;
    cout << "MAX_SIZE = " << MAX_SIZE << endl;

    const double pi = 3.14159;
    const int maxSize = 100;
    cout << "\nTo samo z użyciem const:" << endl;
    cout << "pi = " << pi << endl;
    cout << "maxSize = " << maxSize << endl;

    cout << "\n2. Przykład makr z parametrami:" << endl;
    int x = 5;
    cout << "KWADRAT(5) = " << KWADRAT(5) << endl;
    cout << "MAX(3, 7) = " << MAX(3, 7) << endl;

    auto kwadrat = [](int x) { return x * x; };
    auto max = [](int a, int b) { return a > b ? a : b; };
    cout << "\nTo samo z użyciem funkcji:" << endl;
    cout << "kwadrat(5) = " << kwadrat(5) << endl;
    cout << "max(3, 7) = " << max(3, 7) << endl;

    cout << "\n3. Przykład użycia # (stringifikacja):" << endl;
    int value = 42;
    PRINT_VAR(value);
    
    cout << "\n4. Przykład użycia ## (konkatenacja):" << endl;
    CREATE_VAR(liczba, 1);
    liczba1 = 100;
    cout << "liczba1 = " << liczba1 << endl;

    cout << "\n5. Przykład #ifdef i #ifndef:" << endl;
#ifdef DEBUG_MODE
    cout << "Debug mode jest włączony" << endl;
#else
    cout << "Debug mode jest wyłączony" << endl;
#endif

#ifndef RELEASE_MODE
    cout << "Release mode nie jest zdefiniowany" << endl;
#endif

    return 0;
}
