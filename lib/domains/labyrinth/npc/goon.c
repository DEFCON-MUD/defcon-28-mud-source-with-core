inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("goon");
   set_short("A goon");
   set_long("A goon");
   set_gender("female");
   set_race("goon");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 380);
   set_skill("combat/defense", 380);
   set_level(19);
}

