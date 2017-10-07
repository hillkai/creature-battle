/*************************
 * Program: driver.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: starts program
 * Input: none
 * Output: none
 * **********************/
#include "./world.h"
#include<time.h>
/********************
 * Function: main
 * Description: starts program
 * Parameters: none
 * Pre-conditions: none
 * Post-conditions: none
 * Return 0;
 * ******************/
int main(){
   srand(time(NULL));
   world w;
   w.start_game();
   return 0;
}
