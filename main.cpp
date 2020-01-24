#include <iostream>
#include "Proeftoets/DigitaleTicket.h"
#include "Proeftoets/PapierenTicket.h"
#include "Proeftoets/TicketService.h"
#include <cassert>

int main() {


    TicketService ts("L&B");
    PapierenTicket pt1(10101010, 2);
    ts.voegTicketToe(&pt1);
    int hoeveelVerkochteTicket = ts.aantalTickets();
    int nietGekomen = ts.aantalNietIngechecked();
    std::cout << "Aantal verkochte = " << hoeveelVerkochteTicket << "\n";
    std::cout << "Aantal niet gekomen= " << nietGekomen << "\n";
    ts.scanTicket(&pt1);
    nietGekomen = ts.aantalNietIngechecked();
    std::cout << "Aantal niet gekomen = " << nietGekomen << "\n";
    ts.scanTicket(&pt1);

    return 0;
}
