//
// Created by narim on 18/01/2020.
//

#ifndef INTRO_OOP___HERKANSING__TICKETSERVICE_H
#define INTRO_OOP___HERKANSING__TICKETSERVICE_H

#include "Ticket.h"
#include "DigitaleTicket.h"
#include "PapierenTicket.h"
#include <iostream>
#include <vector>

using namespace std;

class TicketService {
private:

    string bureau;
    vector<Ticket*> registratie;
    int aantalAangemaakteTickets;

public:
    TicketService(string);
    void scanTicket(Ticket*);
    void voegTicketToe(Ticket*);
    int aantalTickets() const;
    int aantalNietIngechecked() const;
    Ticket* copyDigitaleTicket(DigitaleTicket*);
};

#endif //INTRO_OOP___HERKANSING__TICKETSERVICE_H
