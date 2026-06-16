#include <iostream>
#include "IFabrykaPojazdow.h"
#include "Client.h"
#include "FabrykaPojazdowSpalinowych.h"
#include "FabrykaPojazdowElektrycznych.h"

using namespace std;

int main() {
    Client klient;
    IFabrykaPojazdow* fSpal = new FabrykaPojazdowSpalinowych();
    klient.konfigurujFlote(fSpal);
    delete fSpal;
    IFabrykaPojazdow* fElek = new FabrykaPojazdowElektrycznych();
    klient.konfigurujFlote(fElek);
    delete fElek;
    return 0;
}