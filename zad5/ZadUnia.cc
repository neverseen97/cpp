#include <iostream>
using namespace std;

union UniaLiczb {
    int calkowita;    
    float zmiennop;  
    char znak;        
};


union UniaNiebezpieczna {
    int liczby[2];    
    double podwojna;  
};

int main() {
    UniaLiczb ul;
    
    ul.calkowita = 65;  // 'A'
    cout << "Jako liczba całkowita: " << ul.calkowita << endl;
    cout << "Jako znak: " << ul.znak << endl;           
    cout << "Jako liczba zmiennoprzecinkowa: " << ul.zmiennop << endl;  
    
    ul.zmiennop = 3.14f;
    cout << "\nPo ustawieniu wartości zmiennoprzecinkowej na 3.14:" << endl;
    cout << "Jako liczba zmiennoprzecinkowa: " << ul.zmiennop << endl;
    cout << "Jako liczba całkowita: " << ul.calkowita << endl;  
    cout << "Jako znak: " << ul.znak << endl;                   
    
    UniaNiebezpieczna un;
    un.liczby[0] = 1;
    un.liczby[1] = 2;
    cout << "\nDemonstracja unii z różnymi rozmiarami danych:" << endl;
    cout << "Liczby: " << un.liczby[0] << ", " << un.liczby[1] << endl;
    cout << "Jako double: " << un.podwojna << endl;  
    

    un.podwojna = 123.456;
    cout << "\nPo ustawieniu wartości double:" << endl;
    cout << "Jako double: " << un.podwojna << endl;
    cout << "Liczby teraz: " << un.liczby[0] << ", " << un.liczby[1] << endl;
    
    return 0;
}
