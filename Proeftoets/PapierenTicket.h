//
// Created by narim on 18/01/2020.
//

#ifndef INTRO_OOP___HERKANSING__PAPIERENTICKET_H
#define INTRO_OOP___HERKANSING__PAPIERENTICKET_H

#include "Ticket.h"

class PapierenTicket : public Ticket {
private:
    int barcode;
public:
    PapierenTicket(int barcode, int ticketnummer);
    bool scan() ;
};


#endif //INTRO_OOP___HERKANSING__PAPIERENTICKET_H
