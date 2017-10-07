#ifndef DEMON_H
#define DEMON_H

#include "./creature.h"

class demon: public creature{
   public:
      demon();
      virtual int get_damage();
};

#endif
