/*************************
 * Program: creature.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: creature setters and getters and the get damage
 * Input: none
 * Output: none
 * **********************/
#include "./creature.h"
/*************************
 * Function: creature
 * Description: create creature
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
creature::creature(){
   name = ' ';
   strength = 0;
   damage = 0;
   strength = 0;
   hit_points = 0;
   cost = 0;
   payoff = 0;
}
 /*************************
 * Function: get_name
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: name
 * ************************/    
string creature::get_name() const{
   return name;
}
 /*************************
 * Function: set_name
 * Description: mutator
 * Parameters: new_name
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void creature::set_name(string new_name){
   name = new_name;
}
 /*************************
 * Function: set_damage
 * Description: mutator
 * Parameters: new_damage
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void creature::set_damage(int new_damage){
   damage = new_damage;
}
 /*************************
 * Function:get_hit_points
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: hit_points
 * ************************/     
int creature::get_hit_points() const{
   return hit_points;
}
 /*************************
 * Function: set_hit_points
 * Description: mutator
 * Parameters: new_hit_points
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/    
void creature::set_hit_points(int new_hit_points){
   hit_points = new_hit_points;
}
 /*************************
 * Function: get_payoff
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: payoff
 * ************************/     
int creature::get_payoff() const{
   return payoff;
}
 /*************************
 * Function: set_payoff
 * Description: mutator
 * Parameters: new_payoff
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void creature::set_payoff(int new_payoff){
   payoff = new_payoff;
}
 /*************************
 * Function: get_cost
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: cost
 * ************************/     
int creature::get_cost() const{
   return cost;
}
 /*************************
 * Function: set_cost
 * Description: mutator
 * Parameters: new_set_cost
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void creature::set_cost(int new_set_cost){
   cost = new_set_cost;
}
/*************************
 * Function: get_damage
 * Description: get damage
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: damage
 * ************************/
int creature::get_damage(){
   damage = (rand() % strength) +1;
   cout << "Creature inflicts " << damage << " points!" << endl;
   return damage;
}
/*************************
 * Function: receive_damage
 * Description: mutator
 * Parameters: damage
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void creature::receive_damage(int damage){
   hit_points = hit_points - damage;
}
