#include <iostream>
#include "Proeftoets/DigitaleTicket.h"
#include "Proeftoets/PapierenTicket.h"
#include "Proeftoets/TicketService.h"
#include <cassert>

int main() {


    TicketService ts("L&B");
    PapierenTicket pt1( 10101010,2 );
    ts.voegTicketToe(&pt1);
    int hoeveelVerkochteTicket=ts.aantalTickets();
    int nietGekomen=ts.aantalNietIngechecked();
    std::cout << "Aantal verkochte = " << hoeveelVerkochteTicket << "\n";
    std::cout << "Aantal niet gekomen  1 = " << nietGekomen << "\n";
    ts.scanTicket(&pt1);
    nietGekomen=ts.aantalNietIngechecked();
    std::cout << "Aantal niet gekomen  2 = " << nietGekomen << "\n";

//    int x = 5;
//    f(&x, &x);

//
//    Breuk b;
//
//    b.deler = 1;
//    b.noemer = 120;
//
//    std::cout << "Deler: " << b.deler << std::endl << "Noemer:  " << b.noemer << std::endl << std::endl ;
//    std::cout << b.deler << std::endl << "---" << std::endl << b.noemer << std::endl;
    return 0;
}
