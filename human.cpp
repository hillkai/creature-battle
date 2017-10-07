/*************************
 * Program: human.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creates human and gets damage
 * Input: none
 * Output: none
 * **********************/
#include "./human.h"
/*************************
 * Function: human
 * Description: create human
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
human::human():creature(){
   name = ' ';
   damage = 0;
   strength = 40;
   hit_points = 100;
   cost = 40;
   payoff = 0;
}
/*************************
 * Function:get_damage
 * Description: get the damage
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: damage
 * ************************/
int human::get_damage(){
   damage = creature::get_damage();
   return damage;
}
