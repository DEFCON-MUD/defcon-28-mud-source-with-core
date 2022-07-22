inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("agent");
   set_short("A agent");
   set_long("A agent");
   set_gender("female");
   set_race("agent");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 120);
   set_skill("combat/defense", 120);
   set_level(6);
}

