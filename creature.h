#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class creature{
   protected:
      string name;
      int damage;
      int strength;
      int hit_points;
      int payoff;
      int cost;

   public:
      creature();
      string get_name() const;
      void set_name(string);
      void set_damage(int);
      int get_hit_points() const;
      void set_hit_points(int);
      int get_payoff() const;
      void set_payoff(int);
      int get_cost() const;
      void set_cost(int);
      virtual int get_damage();
      void check_hit_points();
      void receive_damage(int);
};
#endif
