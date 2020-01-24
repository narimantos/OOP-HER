//
// Created by narim on 19/01/2020.
//

#include "TicketService.h"


TicketService::TicketService(string b) : bureau(b) {

}

void TicketService::scanTicket(Ticket *t) {

    if (!(t->isIngechecked())) {
        t->scan();
    } else
        std:
        cout << "TICKET AL INGECHECKED!!" << "\n";
}

void TicketService::voegTicketToe(Ticket *t) {
    registratie.push_back(t);
}

int TicketService::aantalTickets() const {

    return registratie.size();
}

int TicketService::aantalNietIngechecked() const {
    int i = 0;
    for (Ticket *a : registratie)
        if (a->isIngechecked()) {
            // do nothing
        } else {
            i++; // add not checked in
        }
    return i; // return total not checked in
}

Ticket *TicketService::copyDigitaleTicket(DigitaleTicket *) {
    return nullptr;
}
