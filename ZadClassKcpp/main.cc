#include "ZadKcpp.h"
#include <iostream>

using namespace std;

int main() {
    ZadKcpp program;
    int sekcja, numer;
    char kontynuuj;
    
    do {
        program.pokazMenu();
        cin >> sekcja >> numer;
        
        program.uruchomZadanie(sekcja, numer);
        
        cout << "\nCzy chcesz wykonać inne zadanie? (t/n): ";
        cin >> kontynuuj;
    } while (tolower(kontynuuj) == 't');
    
    return 0;
}
