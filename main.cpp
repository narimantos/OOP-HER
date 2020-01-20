#include <iostream>
#include "Proeftoets/DigitaleTicket.h"
#include "Proeftoets/PapierenTicket.h"
#include "Proeftoets/TicketService.h"
#include <cassert>

struct Breuk{
    int deler;
    int noemer;
};

void f(const int* p1, int* p2)
{
    int i = *p1;         // Get the (original) value of *p1
    //*p2 = 7;             // If p1 == p2, this will also change *p1
    int j = *p1;         // Get the (possibly new) value of *p1
    if (i != j) {
        std::cout << "*p1 changed, but it didn't change via pointer p1!\n";
        assert(p1 == p2);  // This is the only way *p1 could be different
    }
    else{

        std:cout << "nothing changed";
    }
}

void swap(int p, int q)
{
    int t =p;
    p=q;
    q=t;

    std::cout << "P: " << p << " Was :" << q << std::endl ;
    std::cout << "Q: " << q << " Was :" << p << std::endl ;

}




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
