#ifndef HUMAN_H
#define HUMAN_H

#include "./creature.h"

class human: public creature{
   public:
      human();
      virtual int get_damage();
};

#endif
