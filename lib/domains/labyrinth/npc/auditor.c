inherit "/std/monster";
#include "../domain.h" 

void setup( void ) {
   set_name("auditor");
   set_short("A auditor");
   set_long("A auditor");
   set_gender("male");
   set_race("auditor");
   set_hit_skill("combat/unarmed");
   set_skill("combat/unarmed", 240);
   set_skill("combat/defense", 240);
   set_level(12);
}

