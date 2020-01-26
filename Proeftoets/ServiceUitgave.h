//
// Created by narim on 25/01/2020.
//

#ifndef INTRO_OOP_SERVICEUITGAVE_H
#define INTRO_OOP_SERVICEUITGAVE_H

#include "Ticket.h"
#include "DigitaleTicket.h"
#include "PapierenTicket.h"
#include <iostream>
#include <vector>

using namespace std;

template<typename T> class ServiceUitgave {
private:

    vector<T *> registratie;
    int aantalAangemaakteTickets = 0;
    string bureau;

    ServiceUitgave &operator=(const T &t) {
        return *this;
    };

public:

    ServiceUitgave<T>(string b) : bureau(b) {

    }

    void scanTicket(T *p) {
        if (!(p->isIngechecked())) {
            p->scan();
        } else
std:
            cout << "TICKET AL INGECHECKED!!" << "\n";
    }

    void voegTicketToe(T *p) {
        registratie.push_back(p);
    }

    int aantalTickets() const {
        return registratie.size();
    }

    int aantalNietIngechecked() const {

        int i = 0;
        for (T *a : registratie)
            if (a->isIngechecked()) {
                // do nothing
            } else {
                i++; // add not checked in
            }
        return i; // return total not checked in
    }

//    T *copyDigitaleTicket(T *);
};

#endif //INTRO_OOP_SERVICEUITGAVE_H
