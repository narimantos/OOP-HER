//
// Created by narim on 19/01/2020.
//

#include "PapierenTicket.h"


PapierenTicket::PapierenTicket(int barcode, int ticketnummer) : Ticket(ticketnummer), barcode(barcode) {

}

bool PapierenTicket::scan() {
    // Iets met Ticketservices
    if (!isIngechecked()) {
        std::cout << "TICKET GESCANNED" << "\n";
        resetIngechecked();
        return true;
    } else {
        std::cout << "TICKET IS AL GESCANNED" << "\n";
        return false;
    }
}
