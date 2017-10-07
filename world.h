#ifndef WORLD_H
#define WORLD_H

#include "./creature.h"
#include "./demon.h"
#include "./human.h"
#include "./elf.h"
#include "./cyberdemon.h"
#include "./balrog.h" 

class world{
   private:
      float money;
      elf *elf_arr;
      human *human_arr;
      cyberdemon *cyber_arr;
      balrog *balrog_arr;
      int num_human;
      int num_elf;
      int num_cyber;
      int num_balrog;
      creature *creature_1;
      creature *creature_2;
      string creat_type_1;
      string creat_type_2;

   public:
      world();
      ~world();
      world(const world &);
      void operator=(const world &);
      
      float get_money() const;
      void set_money(float);
      elf* get_elf() const;
      human* get_human() const;
      cyberdemon* get_cyberdemon() const;
      balrog* get_balrog() const;
      int get_num_human() const;
      void set_num_human(int);
      int get_num_elf() const;
      void set_num_elf(int);
      int get_num_cyber() const;
      void set_num_cyber(int);
      int get_num_balrog() const;
      void set_num_balrog(int);
      creature* get_creature_1() const;
      creature* get_creature_2() const;
      string get_creat_1() const;
      string get_creat_2() const;
      void set_creat_1(string);
      void set_creat_2(string);
      void start_game();
      void how_many();
      void money_amount();
      void name_humans();    
      void name_elves();    
      void name_cyberdemons();    
      void name_balrogs();    
      human* good_human();
      elf* good_elf();
      balrog* good_balrog();
      cyberdemon* good_cyber();
      void pick_creature_1();
      void pick_creature_2();  
      int battle();
      void make_payoff();
      void buy_new_creatures();
      void add_new_humans(const int);
      void add_new_elves(const int);
      void add_new_balrogs(const int);
      void add_new_cyberdemons(const int);
      void run_winner(const int num, const creature *arr, int &good, int &winner);
      void money_win();
      bool check_winner();
      void print_usable_creature();
      void usable_creatures(int num, creature *arr);
};
#endif
