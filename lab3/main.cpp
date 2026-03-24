#include <iostream>
#include <string>
#include "Ssak.h"
#include "Pies.h"
#include "Schronisko.h"

using namespace std;

int main() {
    
    Pies mojPies("Burek", "Kundel", 5, 12.5, 1);
    
    cout << "Imie: " << mojPies.get_imie() << endl;
    cout << "Rasa: " << mojPies.get_rasa() << endl;
    cout << "Wiek: " << mojPies.get_wiek() << " lat" << endl;
    cout << "Waga: " << mojPies.get_waga() << " kg" << endl;
    cout << "Dzwiek: " << mojPies.szczekaj() << endl;
    cout << "Akcja: " << mojPies.daj_lape() << endl;
    
    cout << "\n=== TESTOWANIE KLASY SCHRONISKO ===" << endl;
    
    Schronisko schronisko(0, 2);
    
    cout << "Schronisko otwarte! Miejsca: " << schronisko.get_ilosc_psow() << "/" << schronisko.get_miejsca() << endl;
    
    Pies pies2("Azor", "Owczarek", 3, 30.0, 2);
    Pies pies3("Reksio", "Jamnik", 2, 8.0, 3);
    
    cout << "\n--- Przyjmowanie psow ---" << endl;
    schronisko.przyjmij_psa(mojPies);
    schronisko.przyjmij_psa(pies2);
    schronisko.przyjmij_psa(pies3);
    
    cout << "\n--- Wydawanie psow ---" << endl;
    schronisko.wydaj_psa(1);
    
    cout << "\nSprobujmy znowu dodac Reksia:" << endl;
    schronisko.przyjmij_psa(pies3);
    
    return 0;
}