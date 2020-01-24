//
// Created by narim on 19/01/2020.
//

#include "Ticket.h"

int Ticket::ticketNummer() const {
    return ticketnummer;
}

bool Ticket::isIngechecked() const {
    return ingechecked;
}

void Ticket::resetIngechecked() {
    ingechecked = true;
}

Ticket::Ticket(int ticketnummer) : ticketnummer(ticketnummer) {
    ingechecked = false;
}
