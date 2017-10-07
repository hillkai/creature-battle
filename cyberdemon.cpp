/*************************
 * Program: cyberdemon.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creates cyberdemon and does get_damage
 * Input: none
 * Output: none
 * **********************/
#include "./cyberdemon.h"
/*************************
 * Function: cyberdemon
 * Description: create cyberdemon
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
cyberdemon::cyberdemon():demon(){
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
int cyberdemon::get_damage(){
   damage = demon::get_damage();
   return damage;
}
