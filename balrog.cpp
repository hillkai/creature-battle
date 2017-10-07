/*************************
 * Program: balrog.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creates balrog and does get damage
 * Input: none
 * Output: none
 * **********************/
#include "./balrog.h"
/*************************
 * Function: balrog
 * Description: create balrog
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
balrog::balrog():demon(){
   payoff = ' ';
   damage = 0;
   strength = 60;
   hit_points = 100;
   cost = 80;
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
int balrog::get_damage(){
   damage = demon::get_damage();
   damage_2 = (rand() % strength) + 1;
   cout << "Balrog speed attack inflicts " << damage_2 << " additional damage points!" << endl;
   damage = damage + damage_2;
   return damage;
}
