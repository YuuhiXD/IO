#include "KoszykZakupowy.h"
#include "KalkulatorPodatkowy.h"

int main() {
    KalkulatorPodatkowy kalkulatorPL(0.23, "PLN");
    KoszykZakupowy koszyk("KOSZ_007", "Adam Nowak");
    koszyk.dodajProdukt("Klawiatura mechaniczna", 200.0, 1);
    koszyk.dodajProdukt("Monitor 24 cale", 600.0, 2);
    koszyk.generujPodsumowanie(kalkulatorPL);
    koszyk.oproznijKoszyk();

    return 0;
}