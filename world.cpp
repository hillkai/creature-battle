/********************************
 * Program: world.cpp
 * Author: Kaitlin Hill
 * Date: 5/12/17
 * Description: A game of battling magical creatures.
 * Input: Number of creatures and if you want to buy more.
 * Output: A magical game that battles creatures.
 * ******************************/
#include "./world.h"

/*************************
 * Function: constructor
 * Description: creates class
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
world::world(){
   money = 0;
   elf_arr = NULL;
   human_arr = NULL;
   cyber_arr = NULL;
   balrog_arr = NULL;
   num_human = 0;
   num_elf = 0;
   num_cyber = 0;
   num_balrog = 0;
   creature_1 = NULL;
   creature_2 = NULL;
   creat_type_1 = ' ';
   creat_type_2 = ' '; 
}
/*************************
 * Function: destructor
 * Description: deletes dynamic memory in class
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
world::~world(){
   if(human_arr != NULL){
      delete [] human_arr;
      human_arr = NULL;
   }
   if(elf_arr != NULL){
      delete [] elf_arr;
      elf_arr = NULL;
   }
   if(cyber_arr != NULL){
      delete [] cyber_arr;
      cyber_arr = NULL;
   }
   if(balrog_arr != NULL){
      delete [] balrog_arr;
      balrog_arr = NULL;
   }
}
/*************************
 * Function: copy constructor
 * Description: copies info to a new class
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
world::world(const world &other){
   money = other.money;
   num_human = other.num_human;
   num_elf = other.num_elf;
   num_cyber = other.num_human;
   num_balrog = other.num_balrog;
   creat_type_1 = other.creat_type_1;
   creat_type_2 = other.creat_type_2;
   if(other.human_arr == NULL){
      human_arr = NULL;
   }
   else{
      human_arr = new human[num_human];
      for(int i=0; i<num_human; i++){
         human_arr[i] = other.human_arr[i];
      }
   }
   if(other.elf_arr == NULL){
      elf_arr = NULL;
   }
   else{
      elf_arr = new elf[num_elf];
      for(int i=0; i<num_elf; i++){
         elf_arr[i] = other.elf_arr[i];
      }
   }
   if(other.balrog_arr == NULL){
      balrog_arr = NULL;
   }
   else{
      balrog_arr = new balrog[num_balrog];
      for(int i=0; i<num_balrog; i++){
         balrog_arr[i] = other.balrog_arr[i];
      }
   }
   if(other.cyber_arr == NULL){
      cyber_arr = NULL;
   }
   else{
      cyber_arr = new cyberdemon[num_cyber];
      for(int i=0; i<num_cyber; i++){
         cyber_arr[i] = other.cyber_arr[i];
      }
   }
   if(other.creature_1 == NULL){
      creature_1 = NULL;
   }
   else{
      *creature_1 = *other.creature_1;
   }
   if(other.creature_2 == NULL){
      creature_2 = NULL;
   }
   else{
      *creature_2 = *other.creature_2;
   }
}
/*************************
 * Function: assignment operator overload for =
 * Description: copies info from one class to another
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::operator=(const world &other){
 if(other.human_arr == NULL){
      human_arr = NULL;
   }
   else{
      delete [] human_arr;
      human_arr = new human[num_human];
      for(int i=0; i<num_human; i++){
         human_arr[i] = other.human_arr[i];
      }
   }
   if(other.elf_arr == NULL){
      elf_arr = NULL;
   }
   else{
      delete [] elf_arr;
      elf_arr = new elf[num_elf];
      for(int i=0; i<num_elf; i++){
	 elf_arr[i] = other.elf_arr[i];
      }
   }
   if(other.balrog_arr == NULL){
      balrog_arr = NULL;
   }
   else{
      delete [] balrog_arr;
      balrog_arr = new balrog[num_balrog];
      for(int i=0; i<num_balrog; i++){
         balrog_arr[i] = other.balrog_arr[i];
      }
   }
   if(other.cyber_arr == NULL){
      cyber_arr = NULL;
   }
   else{
      delete [] cyber_arr;
      cyber_arr = new cyberdemon[num_cyber];
      for(int i=0; i<num_cyber; i++){
         cyber_arr[i] = other.cyber_arr[i];
      }
   }
   if(other.creature_1 == NULL){
      creature_1 = NULL;
   }
   else{
      *creature_1 = *other.creature_1;
   }
   if(other.creature_2 == NULL){
      creature_2 = NULL;
   }
   else{
      *creature_2 = *other.creature_2;
   }
}
 /*************************
 * Function: get_money
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: money
 * ************************/     
float world::get_money() const{
   return money;
}
 /*************************
 * Function: set_money
 * Description: mutator
 * Parameters: new_money
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void world::set_money(float new_money){
    money = new_money;
}
/*************************
 * Function: get_elf
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: elf_arr
 * ************************/
elf* world::get_elf() const{
   return elf_arr;
}
/*************************
 * Function: get_human
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: human_arr
 * ************************/
human* world::get_human() const{
   return human_arr;
}
 /*************************
 * Function: get_cyberdemon
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: cyber_arr
 * ************************/     
cyberdemon* world::get_cyberdemon() const{
   return cyber_arr;
}
 /*************************
 * Function: get_balrog
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: balrog_arr
 * ************************/     
balrog* world::get_balrog() const{
   return balrog_arr;
}
 /*************************
 * Function: get_num_human
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: num_human
 * ************************/     
int world::get_num_human() const{
   return num_human;
}
 /*************************
 * Function: set_num_human
 * Description: mutator
 * Parameters: new_num_human
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void world::set_num_human(int new_num_human){
   num_human = new_num_human;
}
 /*************************
 * Function: get_num_elf
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: num_elf
 * ************************/     
int world::get_num_elf() const{
   return num_elf;
}
 /*************************
 * Function: set_num_elf
 * Description: mutator
 * Parameters: new_num_elf
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void world::set_num_elf(int new_num_elf){
   num_elf = new_num_elf;
}
 /*************************
 * Function: get_num_cyber
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: num_cyber
 * ************************/     
int world::get_num_cyber() const{
   return num_cyber;
}
 /*************************
 * Function: set_num_cyber
 * Description: mutator
 * Parameters: new_num_cyber
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/   
void world::set_num_cyber(int new_num_cyber){
   num_cyber = new_num_cyber;
}
 /*************************
 * Function: get_num_balrog
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: num_balrog
 * ************************/   
int world::get_num_balrog() const{
   return num_balrog;
}
 /*************************
 * Function: set_num_balrog
 * Description: mutator
 * Parameters: new_num_balrog
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void world::set_num_balrog(int new_num_balrog){
   num_balrog = new_num_balrog;
}
 /*************************
 * Function: get_creature
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: creature_1
 * ************************/     
creature* world::get_creature_1() const{
   return creature_1;
}
/*************************
 * Function: get_creature_2
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: creature_2
 * ************************/
creature* world::get_creature_2() const{
   return creature_2;
}
 /*************************
 * Function: get_creat_1
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: creat_type_1
 * ************************/     
string world::get_creat_1() const{
   return creat_type_1; 
}
 /*************************
 * Function: get_creat_2
 * Description: accessor
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: creat_type_2
 * ************************/     
string world::get_creat_2() const{
   return creat_type_2;
}
 /*************************
 * Function: set_creat_1
 * Description: mutator
 * Parameters: new_creat
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/  
void world::set_creat_1(string new_creat){
   creat_type_1 = new_creat;
}
 /*************************
 * Function: set_creat_2
 * Description: mutator
 * Parameters: new_creat
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/     
void world::set_creat_2(string new_creat){
   creat_type_2 = new_creat;
}
/*************************
 * Function: start_game
 * Description: runs game
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::start_game(){
   int killed_creat;
   bool again;
   cout << "Welcome to Creature Battle! Pick your creatures to battle" << endl;
   how_many();
   money_amount();
   name_humans();
   name_elves();
   name_balrogs();
   name_cyberdemons();
   do{
   pick_creature_1();
   pick_creature_2();
   killed_creat = battle();
   make_payoff();
   again = check_winner();
   if (again == false){
      buy_new_creatures();
   }
   }while(again == false);
   creature_1 = NULL;
   creature_2 = NULL;
}
/*************************
 * Function: how_many
 * Description: asks how many user originally wants to buy
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: get num of types
 * Return: none
 * ************************/
void world::how_many(){
   cout << "How many humans would you like to buy?" << endl;
   cin >> num_human;
   cin.ignore();
   if(num_human > 0){
      human_arr = new human[num_human];
   }
   cout << "How many elves would you like to buy?" << endl;
   cin >> num_elf;
   cin.ignore();
   if(num_elf > 0){
      elf_arr = new elf[num_elf];
   }
   cout << "How many balrogs would you like to buy?" << endl;
   cin >> num_balrog;
   cin.ignore();
   if(num_balrog > 0){
      balrog_arr = new balrog[num_balrog];
   }
   cout << "How many cyberdemons would you like to buy?" << endl;
   cin >> num_cyber;
   cin.ignore();
   if(num_cyber > 0){
      cyber_arr = new cyberdemon[num_cyber];
   }
}
/*************************
 * Function: money_amount
 * Description: gets money amount
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: money is changed
 * Return: none
 * ************************/
void world::money_amount(){
   int temp_m = 0;
   temp_m = (num_human*40) + (num_elf*70) + (num_cyber*70) + (num_balrog*80);
   money -= temp_m;
   cout << "You have " << money << " dollars" << endl;
}
/*************************
 * Function: name_humans
 * Description: name the humans
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: the humans have names
 * Return: none
 * ************************/
void world::name_humans(){
   string temp;
   for(int i=0; i<num_human; i++){
      cout << "Enter a name for your human" << endl;
      cin >> temp;
      cin.ignore();
      human_arr[i].set_name(temp);
   }   
}
/*************************
 * Function: name_elves
 * Description: name the elves
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: elves have names
 * Return: none
 * ************************/
void world::name_elves(){
   string temp;
   for(int i=0; i<num_elf; i++){
      cout << "Enter a name for your elf" << endl;
      cin >> temp;
      cin.ignore();
      elf_arr[i].set_name(temp);
   }  
}
/*************************
 * Function: name_cyberdemons
 * Description: name the cyberdemons
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: cyberdemons have names
 * Return: none
 * ************************/
void world::name_cyberdemons(){
   string temp;
   for(int i=0; i<num_cyber; i++){
      cout << "Enter a name for your cyberdemon" << endl;
      cin >> temp;
      cin.ignore();
      cyber_arr[i].set_name(temp);
   }  
}
/*************************
 * Function: name_balrogs
 * Description: name the balrogs
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: balrogs have names
 * Return: none
 * ************************/
void world::name_balrogs(){
string temp;
   for(int i=0; i<num_balrog; i++){
      cout << "Enter a name for your balrog" << endl;
      cin >> temp;
      cin.ignore();
      balrog_arr[i].set_name(temp);
   }  
}
/*************************
 * Function: good_human
 * Description: see if you can use the human
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
human* world::good_human(){
   string temp_name;
   bool temp;
   do{
      cout << "Enter the name of the human you would like to battle" << endl;
      cin >> temp_name;
      cin.ignore();
      for(int i=0; i<num_human; i++){
         if((human_arr[i].get_name() == temp_name) && (human_arr[i].get_hit_points() > 0)){
         temp = true;
	 return &human_arr[i];
         }
      }
      cout << "That human doesn't exist or is no longer usable" << endl;
      temp = false;
   }while(temp == false);
}
/*************************
 * Function: good_elf
 * Description: see if it is a usable elf
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
elf* world::good_elf(){
   string temp_name;
   bool temp;
   do{
      cout << "Enter the name of the elf you would like to battle" << endl;
      cin >> temp_name;
      cin.ignore();
      for(int i=0; i<num_elf; i++){
         if((elf_arr[i].get_name() == temp_name) && (elf_arr[i].get_hit_points() > 0)){
         temp = true;
	 return &elf_arr[i];
         }
      }
      cout << "That elf doesn't exist or is no longer usable" << endl;
      temp = false;
   }while(temp == false);
}
/*************************
 * Function: good_balrog
 * Description: see if it's a good balrog
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
balrog* world::good_balrog(){
   string temp_name;
   bool temp;
   do{
      cout << "Enter the name of the balrog you would like to battle" << endl;
      cin >> temp_name;
      cin.ignore();
      for(int i=0; i<num_balrog; i++){
         if((balrog_arr[i].get_name() == temp_name) && (balrog_arr[i].get_hit_points() > 0)){
	    return &balrog_arr[i];
         }
      }
      cout << "That balrog doesn't exist or is no longer usable" << endl;
      temp = false;
   }while(temp == false);
}
/*************************
 * Function: good_cyber
 * Description: see if it is a good cyberdemon
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
cyberdemon* world::good_cyber(){
   string temp_name;
   bool temp;
   do{
      cout << "Enter the name of the cyberdemon you would like to use" << endl;
      cin >> temp_name;
      cin.ignore();
      for(int i=0; i<num_cyber; i++){
         if((cyber_arr[i].get_name() == temp_name) && (cyber_arr[i].get_hit_points() > 0)){
         temp = true;
	 return &cyber_arr[i];
         }
      }
      cout << "That cyberdemon doesn't exist or is no longer usable" << endl;
      temp = false;
   }while(temp == false);
}
/*************************
 * Function: pick_creature_1
 * Description: chose the first creature
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: creature_1 holds an address
 * Return: none
 * ************************/
void world::pick_creature_1(){
   char c;
   print_usable_creature();
   cout << "Would you like to play with a human (press h), elf (press e), balrog (press b), or cyberdemon (press c)?" << endl;
   cin >> c;
   cin.ignore();
   if(c == 'h'){
      creature_1 = good_human();
   }
   else if(c == 'e'){
      creature_1 = good_elf();
   }
   else if(c == 'b'){
      creature_1 = good_balrog();
   }
   else if(c == 'c'){
      creature_1 = good_cyber();
   }
}
/*************************
 * Function: pick_creature_2
 * Description: pick the second creature
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: creature_2 holds an address
 * Return: none
 * ************************/
void world::pick_creature_2(){
   char c;
   cout << "Would you like to play with a human (press h), elf (press e), balrog (press b), or cyberdemon (press c)?" << endl;
   cin >> c;
   cin.ignore();
   if(c == 'h'){
      creature_2 = good_human();
   }
   else if(c == 'e'){
      creature_2 = good_elf();
   }
   else if(c == 'b'){
      creature_2 = good_balrog();
   }
   else if(c == 'c'){
      creature_2 = good_cyber();
   }
}
/*************************
 * Function: usable_creatures
 * Description: write out what creatures are usable
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::usable_creatures(int num, creature *arr){
   for(int i=0; i<num; i++){
      if(arr[i].get_hit_points() > 0){
	 cout << arr[i].get_name() << endl;
      }
   }
}
/*************************
 * Function: print_usable_creature
 * Description: print the usable creatures
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::print_usable_creature(){
   cout << "Here are your usable humans:" << endl;
   usable_creatures(num_human, human_arr);
   cout << "Here are your usable elves:" << endl;
   usable_creatures(num_elf, elf_arr);
   cout << "Here are your usable balrogs:" << endl;
   usable_creatures(num_balrog, balrog_arr);
   cout << "Here are your usable cyberdemons:" << endl;
   usable_creatures(num_cyber, cyber_arr);
}
/*************************
 * Function: battle
 * Description: battle the creatures
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: 1 or 2
 * ************************/
int world::battle(){
   bool again = true;
   int damage = 0;
   char c;
   do{
      cout << "Press any key for "<< creature_1->get_name() << " to attack" << endl;
      cin >> c;
      cin.ignore();
      damage = creature_1->get_damage();
      creature_2->receive_damage(damage);
      if(creature_2->get_hit_points() <= 0){
	 cout << creature_2->get_name() << " has been defeated" << endl;
	 return 1;
      }
      cout << "Press any key for " << creature_2->get_name() << " to attack" << endl;
      cin >> c;
      cin.ignore();
      damage = creature_2->get_damage();
      creature_1->receive_damage(damage);
      if(creature_1->get_hit_points() <= 0){
	 cout << creature_1->get_name() << " has been defeated" << endl;
	 return 2;
      }
      again = true;
   }while(again == true);
}
/*************************
 * Function: make_payoff
 * Description: get money for winning
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: money is increased
 * Return: none
 * ************************/
void world::make_payoff(){
   float payoff;
   payoff = (rand() % 200) + 1;
   money += payoff;
   cout << "You earned " << payoff << " dollars from the battle. You now have " << money << " dollars." << endl;
}
/*************************
 * Function: buy_new_creatures
 * Description: lets user buy new creatures 
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::buy_new_creatures(){
   char c;
   int addi_num = 0;
   bool again;
   do{
      cout << "Press h if you would like to buy new humans, e if you would like to buy new elves, b if you would like to buy new balrogs, c if you would like to buy new cyberdemons," 
	 << " or any other key if you don't want to buy new creatures." << endl;
      cin >> c;
      cin.ignore();
      if(c == 'h'){
	 cout << "How many humans would you like to buy?" << endl;
	 cin >> addi_num;
	 cin.ignore();
	 money -= 40*addi_num;
	 add_new_humans(addi_num);
	 again = true;
      }
      else if(c == 'e'){
	 cout << "How many elves would you like to buy?" << endl;
	 cin >> addi_num;
	 cin.ignore();
	 money -= 70*addi_num;
	 add_new_elves(addi_num);
	 again = true;
      }
      else if(c == 'b'){
	 cout << "How many balrogs would you like to buy?" << endl;
	 cin >> addi_num;
	 cin.ignore();
	 money -= 80*addi_num;
	 add_new_balrogs(addi_num);  
	 again = true;
      }
      else if(c == 'c'){
	 cout << "How many cyberdemons would you like to buy?" << endl;
	 cin >> addi_num;
	 cin.ignore();
	 money -= 70*addi_num;
	 add_new_cyberdemons(addi_num);
	 again = true;
      }
      else{
	 again = false;
      }
   cout << "Your money amount is " << money << endl;
   }while(again == true);
}
/*************************
 * Function: add_new_humans
 * Description: add new humans
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: human array grows
 * Return: none
 * ************************/
void world::add_new_humans(const int addi_num){
   string name;
   human *temp_arr = new human[num_human];
   for(int i=0; i<num_human; i++){
      temp_arr[i] = human_arr[i];
   }
   delete [] human_arr;
   human_arr = NULL;
   num_human += addi_num;
   human_arr = new human[num_human];
   for(int i=0; i<num_human-addi_num; i++){
      human_arr[i] = temp_arr[i];
   }
   delete [] temp_arr;
   temp_arr = NULL;
   for(int i=num_human-addi_num; i<num_human; i++){
      cout << "Enter a name for your new human" << endl;
      cin >> name;
      cin.ignore();
      human_arr[i].set_name(name);
   }
}
/*************************
 * Function: add_new_elves
 * Description: add new elves
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: elves array grows
 * Return: none
 * ************************/
void world::add_new_elves(const int addi_num){
   string name;
   elf *temp_arr = new elf[num_elf];
   for(int i=0; i<num_elf; i++){
      temp_arr[i] = elf_arr[i];
   }
   delete [] elf_arr;
   elf_arr = NULL;
   num_elf += addi_num;
   elf_arr = new elf[num_elf];
   for(int i=0; i<num_elf-addi_num; i++){
      elf_arr[i] = temp_arr[i];
   }
   delete [] temp_arr;
   temp_arr = NULL;
   for(int i=num_elf-addi_num; i<num_elf; i++){
      cout << "Enter a name for your new elf" << endl;
      cin >> name;
      cin.ignore();
      elf_arr[i].set_name(name);
   }
}
/*************************
 * Function: add_new_balrogs
 * Description: add new balrogs
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: balrog array grows
 * Return: none
 * ************************/
void world::add_new_balrogs(const int addi_num){
   string name;
   balrog *temp_arr = new balrog[num_balrog];
   for(int i=0; i<num_balrog; i++){
      temp_arr[i] = balrog_arr[i];
   }
   delete [] balrog_arr;
   balrog_arr = NULL;
   num_balrog += addi_num;
   balrog_arr = new balrog[num_balrog];
   for(int i=0; i<num_balrog-addi_num; i++){
      balrog_arr[i] = temp_arr[i];
   }
   delete [] temp_arr;
   temp_arr = NULL;
   for(int i=num_balrog-addi_num; i<num_balrog; i++){
      cout << "Enter a name for your new balrog" << endl;
      cin >> name;
      cin.ignore();
      balrog_arr[i].set_name(name);
   }
}
/*************************
 * Function:
 * Description: 
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::add_new_cyberdemons(const int addi_num){
   string name;
   cyberdemon *temp_arr = new cyberdemon[num_cyber];
   for(int i=0; i<num_cyber; i++){
      temp_arr[i] = cyber_arr[i];
   }
   delete [] cyber_arr;
   cyber_arr = NULL;
   num_cyber += addi_num;
   cyber_arr = new cyberdemon[num_cyber];
   for(int i=0; i<num_cyber-addi_num; i++){
      cyber_arr[i] = temp_arr[i];
   }
   delete [] temp_arr;
   temp_arr = NULL;
   for(int i=num_cyber-addi_num; i<num_cyber; i++){
      cout << "Enter a name for your new cyberdemon" << endl;
      cin >> name;
      cin.ignore();
      cyber_arr[i].set_name(name);
   }
}
/*************************
 * Function: run_winner
 * Description: see if there a winner
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: good and winner have new values
 * Return: none
 * ************************/
void world::run_winner(const int num, const creature *arr, int &good, int &winner){
   for(int i=0; i<num; i++){
      if(arr[i].get_hit_points() > 0){
         good++;
	 winner = i;
      }
   }
}
/*************************
 * Function: money_win
 * Description: Prints is money is positive or negative and if you won
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: none
 * ************************/
void world::money_win(){
   if(money >= 0){
      cout << "YOU WON!!! You ended the game without debt. You ended the game with " << money << " dollars" << endl;
   }
   else if(money < 0){
      cout << "You lost, you ended the game with debt. You ended the game with " << money << " dollars" << endl;
   }
}
/*************************
 * Function: check_winner
 * Description: see if there is a winner
 * Parameters: none
 * Pre-conditions: variables must have values
 * Post-conditions: none
 * Return: true or false
 * ************************/
bool world::check_winner(){
   int good_human = 0;
   int good_elf = 0;
   int good_balrog = 0;
   int good_cyberdemon = 0;
   int winner;
   bool yes = false;
   run_winner(num_human, human_arr, good_human, winner);
   run_winner(num_elf, elf_arr, good_elf, winner);
   run_winner(num_balrog, balrog_arr, good_balrog, winner);
   run_winner(num_cyber, cyber_arr, good_cyberdemon, winner);
   if((good_human == 1) && (good_elf == 0) && (good_balrog == 0) && (good_cyberdemon == 0)){
      cout << human_arr[winner].get_name() << " is the last creature standing" << endl;
      yes = true;
   }
   else if((good_human == 0) && (good_elf == 1) && (good_balrog == 0) && (good_cyberdemon == 0)){
      cout << elf_arr[winner].get_name() << " is the last creature standing" << endl;
      yes = true;
   }
   else if((good_human == 0) && (good_elf == 0) && (good_balrog == 1) && (good_cyberdemon == 0)){
      cout << balrog_arr[winner].get_name() << " is the last creature standing" << endl;
      yes = true;
   }
   else if((good_human == 0) && (good_elf == 0) && (good_balrog == 0) && (good_cyberdemon == 1)){
      cout << cyber_arr[winner].get_name() << " is the last creature standing" << endl;
      yes = true;
   }
   if(yes == true){
      money_win();
      return true;
   }
   return false;
}
