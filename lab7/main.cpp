#include <iostream>
#include <cstdlib>
#include "TBernouli.h"

using namespace std;

int main() {
    double p;
    int n, k;
    
    cout << "Podaj p (prawdopodobienstwo sukcesu, np. 0.5): ";
    cin >> p;
    cout << "Podaj n (liczba doswiadczen): ";
    cin >> n;
    cout << "Podaj k (liczba sukcesow): ";
    cin >> k;

    if (p > 1 || p < 0 || n < 0 || k < 0 || k > n) {
        cout << "Nieprawidlowe dane wejsciowe!\n";
    } else {
        TBernouli schemat; 
        schemat.bernouli(p, n, k);
    }

    system("PAUSE");
    return 0;
}