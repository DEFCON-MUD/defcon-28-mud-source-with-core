inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 52, 58, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/51_58_-2.c",
  "east" : DIR+"/rooms/53_58_-2.c"
  ]) );

}

