inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("professor");
   set_short("A professor");
   set_long("A professor");
   set_gender("male");
   set_race("professor");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 100);
   set_skill("combat/defense", 100);
   set_level(5);
}

