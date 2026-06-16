#include <iostream>
#include "Pies.h"

using namespace std;

int main() {
    Pies mojPies("Burek", "Kundel", 3, 15.5);
    cout << "Informacje o psie:" << endl;
    cout << "Imie: " << mojPies.get_imie() << endl;
    cout << "Rasa: " << mojPies.get_rasa() << endl;
    cout << "Wiek: " << mojPies.get_wiek() << " lata" << endl;
    cout << "Waga: " << mojPies.get_waga() << " kg" << endl;
    cout << "Pies mowi: " << mojPies.szczekaj() << endl;
    cout << "Zrob sztuczke: " << mojPies.daj_lape() << endl;
    cout << "Zmieniam dane psa (mija rok, pies tyje)..." << endl;
    mojPies.set_wiek(4);
    mojPies.set_waga(16.2);
    mojPies.set_imie("Burek Senior");
    cout << "Nowe Imie: " << mojPies.get_imie() << endl;
    cout << "Nowy Wiek: " << mojPies.get_wiek() << " lata" << endl;
    cout << "Nowa Waga: " << mojPies.get_waga() << " kg" << endl;
    return 0;
}