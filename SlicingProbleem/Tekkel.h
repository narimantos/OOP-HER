//
// Created by narim on 26/01/2020.
//

#ifndef INTRO_OOP_TEKKEL_H
#define INTRO_OOP_TEKKEL_H

#include "Hond.h"

class Tekkel: public Hond {
    virtual void blaf(){
        std::cout<<"TEKKEL: BLAF"<<endl;
    }
};


#endif //INTRO_OOP_TEKKEL_H
