inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("monkey");
   set_short("A monkey");
   set_long("A monkey");
   set_gender("female");
   set_race("monkey");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 400);
   set_skill("combat/defense", 400);
   set_level(20);
}

