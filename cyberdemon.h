#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "./demon.h"

class cyberdemon: public demon{
   public:
      cyberdemon();
      virtual int get_damage();
};

#endif
