#include <iostream>
#include "Proeftoets/DigitaleTicket.h"
#include "Proeftoets/PapierenTicket.h"
#include "Proeftoets/TicketService.h"
#include "Proeftoets/ServiceUitgave.h"
#include "SlicingProbleem/Hond.h"
#include "SlicingProbleem/SintBernard.h"
#include "SlicingProbleem/Tekkel.h"
#include "SlicingProbleem/Kennel.h"
#include <cassert>


int main() {

    SintBernard boris;
    SintBernard* pboris(&boris);
    SintBernard& rboris(*pboris);

    Tekkel tekkel;
    Tekkel* ptekkel(&tekkel);
    Tekkel& rtekkel(*ptekkel);

    Kennel k;

    Kennel *pk(new Kennel);
    Kennel &rk(*pk);
    pk->voegHondToe(rtekkel);
    rk.voegHondToe(rboris);



    pk->maakGeluid();

    delete pk;






  // DIT KAN NIET -> Hond hond(boris);



//
//    TicketService ts2("a");
//    ServiceUitgave<PapierenTicket> ts("tv");
//
//    PapierenTicket pt1(10101010, 2);
//    ts.voegTicketToe(&pt1);
//    PapierenTicket *tc(&pt1);
//    Ticket& tc2(pt1);
//    Ticket tc3=pt1;
//    //TicketService tserv2=ts;
//
//    int hoeveelVerkochteTicket = ts.aantalTickets();
//    int nietGekomen = ts.aantalNietIngechecked();
//    std::cout << "Aantal verkochte = " << hoeveelVerkochteTicket << "\n";
//    std::cout << "Aantal niet gekomen= " << nietGekomen << "\n";
//    ts.scanTicket((&pt1));
//    nietGekomen = ts.aantalNietIngechecked();
//    std::cout << "Aantal niet gekomen = " << nietGekomen << "\n";
//    ts.scanTicket((&pt1));

    return 0;
}
