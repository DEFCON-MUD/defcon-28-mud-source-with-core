inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("politician");
   set_short("A politician");
   set_long("A politician");
   set_gender("male");
   set_race("politician");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 180);
   set_skill("combat/defense", 180);
   set_level(9);
}

