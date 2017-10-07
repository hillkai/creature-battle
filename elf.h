#ifndef ELF_H
#define ELF_H

#include "./creature.h"

class elf: public creature{
   public:
      elf();
      virtual int get_damage();
};

#endif
