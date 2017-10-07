#ifndef BALROG_H
#define BALROG_H

#include "./demon.h"

class balrog: public demon{
   private:
      int damage_2;

   public:
      balrog();
      virtual int get_damage();
};

#endif
