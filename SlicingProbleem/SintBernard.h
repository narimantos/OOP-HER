//
// Created by narim on 25/01/2020.
//

#ifndef INTRO_OOP_SINTBERNARD_H
#define INTRO_OOP_SINTBERNARD_H


#include "../SlicingProbleem/Hond.h"

using namespace std;

class SintBernard: public Hond {
public:
    virtual void blaf(){
        std::cout<<"Sint: BLAF!"<<endl;
    }
private:
    int vat;

};


#endif //INTRO_OOP_SINTBERNARD_H
