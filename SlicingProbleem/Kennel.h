//
// Created by narim on 26/01/2020.
//

#ifndef INTRO_OOP_KENNEL_H
#define INTRO_OOP_KENNEL_H
#include "Hond.h"

class Kennel {
private:

    vector<Hond *> kennel;
public:
    Kennel();
    ~Kennel();
    void voegHondToe(Hond &);
    void maakGeluid();
};


#endif //INTRO_OOP_KENNEL_H
