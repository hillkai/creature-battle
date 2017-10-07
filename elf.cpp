/*************************
 * Program: elf.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creates elf and does get_damage
 * Input: none
 * Output: none
 * **********************/
#include "./elf.h"
/*************************
 * Function: elf
 * Description: create elf
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
elf::elf():creature(){
   name = ' ';
   damage = 0;
   strength = 50;
   hit_points = 100;
   cost = 70;
   payoff = 0;
}
/*************************
 * Function: get_damage
 * Description: get the damage
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: damage
 * ************************/
int elf::get_damage(){
   damage = creature::get_damage();
   if((rand() % 10) == 0){
      cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
      damage = damage * 2;
   }
   return damage;
}
