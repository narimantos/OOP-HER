//
// Created by narim on 18/01/2020.
//

#ifndef INTRO_OOP___HERKANSING__PAPIERENTICKET_H
#define INTRO_OOP___HERKANSING__PAPIERENTICKET_H

#include "Ticket.h"

class PapierenTicket : public Ticket {
public:
    PapierenTicket(int barcode, int ticketnummer);

    bool scan();
private:
    int barcode;
};


#endif //INTRO_OOP___HERKANSING__PAPIERENTICKET_H
