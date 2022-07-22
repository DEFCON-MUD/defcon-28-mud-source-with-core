inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("analyst");
   set_short("A analyst");
   set_long("A analyst");
   set_gender("male");
   set_race("analyst");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 340);
   set_skill("combat/defense", 340);
   set_level(17);
}

