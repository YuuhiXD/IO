#include "Komputer.h"
#include "DyskTwardy.h"
#include <iostream>

int main() {
    DyskTwardy* mojDysk = new DyskTwardy("Western Digital");
    mojDysk->formatujPartycje("C:", 256);
    mojDysk->formatujPartycje("D:", 1024);
    
    std::cout << "\n";

    {
        Komputer pc("Dell OptiPlex");
        pc.podlaczDysk(mojDysk);
        pc.wypiszStatus();
    }
    
    std::cout << "\n";

    mojDysk->wypiszPartycje();
    
    std::cout << "\n";
    
    delete mojDysk;

    return 0;
}