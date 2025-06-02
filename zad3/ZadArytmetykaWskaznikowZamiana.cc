#include <iostream>
using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int liczba1 = 10;
    int liczba2 = 20;
    
    cout << "Przed zamiana:" << endl;
    cout << "liczba1 = " << liczba1 << endl;
    cout << "liczba2 = " << liczba2 << endl;
    
    zamien(&liczba1, &liczba2);
    
    cout << "\nPo zamianie:" << endl;
    cout << "liczba1 = " << liczba1 << endl;
    cout << "liczba2 = " << liczba2 << endl;
    
    return 0;
}
