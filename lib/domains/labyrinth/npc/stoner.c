inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("stoner");
   set_short("A stoner");
   set_long("A stoner");
   set_gender("female");
   set_race("stoner");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 340);
   set_skill("combat/defense", 340);
   set_level(17);
}

