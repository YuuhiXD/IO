#include <iostream>
#include <string>
#include <vector>
#include "Ssak.h"
#include "Pies.h"
#include "Schronisko.h"

using namespace std;

int main() {
    
    Pies pies1("Burek", "Kundel", 5, 12.5, 1);
    Pies pies2("Azor", "Owczarek", 3, 30.0, 2);
    Pies pies3("Reksio", "Jamnik", 2, 8.0, 3);

    cout << "Imie: " << pies1.get_imie() << endl;
    cout << "Rasa: " << pies1.get_rasa() << endl;
    cout << "Wiek: " << pies1.get_wiek() << " lat" << endl;
    cout << "Waga: " << pies1.get_waga() << " kg" << endl;
    cout << "Dzwiek: " << pies1.szczekaj() << endl;

    cout << "Imie: " << pies2.get_imie() << endl;
    cout << "Rasa: " << pies2.get_rasa() << endl;
    cout << "Wiek: " << pies2.get_wiek() << " lat" << endl;
    cout << "Waga: " << pies2.get_waga() << " kg" << endl;
    cout << "Akcja: " << pies2.daj_lape() << endl;

    cout << "Imie: " << pies3.get_imie() << endl;
    cout << "Rasa: " << pies3.get_rasa() << endl;
    cout << "Wiek: " << pies3.get_wiek() << " lat" << endl;
    cout << "Waga: " << pies3.get_waga() << " kg" << endl;
    cout << "Dzwiek: " << pies3.szczekaj() << endl;
    cout << "Akcja: " << pies3.daj_lape() << endl;
    
    Schronisko schronisko(0, 2);
    
    cout << "Miejsca: " << schronisko.get_ilosc_psow() << "/" << schronisko.get_miejsca() << endl;
    
    
    schronisko.przyjmij_psa(pies1);
    schronisko.przyjmij_psa(pies2);
    schronisko.przyjmij_psa(pies3);
    schronisko.wydaj_psa(2);
    schronisko.przyjmij_psa(pies2);
    
    return 0;
}