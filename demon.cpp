/*************************
 * Program: demon.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creates demon and gets damage
 * Input: none
 * Output: none
 * **********************/
#include "./demon.h"

/*************************
 * Function: demon
 * Description: create demon
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
demon::demon():creature(){
   damage = 0;
}
/*************************
 * Function: get_damage
 * Description: get the damage
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
int demon::get_damage(){
   damage = creature::get_damage();
   if((rand() % 100) < 5){
      damage = damage + 50;
      cout << "Demonic attack inflicts 50 additional damage points!" << endl;
   }
   return damage;
}
