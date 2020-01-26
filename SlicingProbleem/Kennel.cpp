//
// Created by narim on 26/01/2020.
//

#include "Kennel.h"

Kennel::Kennel() {}

void Kennel::voegHondToe(Hond &h) { kennel.push_back(&h); }

void Kennel::maakGeluid() {
  for (Hond *h : kennel) {
    h->blaf();
  }
}

Kennel::~Kennel() {}
