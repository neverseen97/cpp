#include <iostream>
using namespace std;

void przykladWhile() {
    cout << "\nPrzykład while:" << endl;
    cout << "a) i++:" << endl;
    int i = 0;
    while(i < 5) {
        if(i == 2) {
            i++;
            continue;  // pomija 2
        }
        cout << i << " ";
        i++;
    }
    
    cout << "\nb) ++i:" << endl;
    i = 0;
    while(i < 5) {
        cout << i << " ";
        if(i == 3) {
            break;  // przerywa pętlę przy 3
        }
        ++i;
    }
}

void przykladDoWhile() {
    cout << "\n\nPrzykład do-while:" << endl;
    cout << "a) i++:" << endl;
    int i = 0;
    do {
        if(i == 2) {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    } while(i < 5);
    
    cout << "\nb) ++i:" << endl;
    i = 0;
    do {
        cout << i << " ";
        if(i == 3) return; 
        ++i;
    } while(i < 5);
}

void przykladFor() {
    cout << "\n\nPrzykład for:" << endl;
    
    // pętla for z continue
    cout << "a) Standardowa pętla:" << endl;
    for(int i = 0; i < 5; i++) {
        if(i == 2) continue;  // pomija i == 2
        cout << i << " ";
    }
    
    // Pętla for z break
    cout << "\nb) Pętla z break:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << i << " ";
        if(i == 3) break;  // przerywa pętlę przy i == 3
    }
    
}

int main() {
    przykladWhile();
    przykladDoWhile();
    przykladFor();
    cout << endl;
    return 0;
}
