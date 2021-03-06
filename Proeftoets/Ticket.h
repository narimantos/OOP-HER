//
// Created by narim on 18/01/2020.
//

#ifndef INTRO_OOP___HERKANSING__TICKET_H
#define INTRO_OOP___HERKANSING__TICKET_H

#include <iostream>
#include <vector>

using namespace std;

class Ticket {
private:
    int ticketnummer;
    bool ingechecked;
public:
    Ticket(int ticketnummer);

    virtual ~Ticket() = default;

    int ticketNummer() const;

    bool isIngechecked() const;

    void resetIngechecked();

    virtual bool scan() { return 0; };
};


#endif //INTRO_OOP___HERKANSING__TICKET_H
