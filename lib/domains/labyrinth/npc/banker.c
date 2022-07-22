inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("banker");
   set_short("A banker");
   set_long("A banker");
   set_gender("male");
   set_race("banker");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 400);
   set_skill("combat/defense", 400);
   set_level(20);
}

