inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 48, 34, -9 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/47_34_-9.c",
  "east" : DIR+"/rooms/49_34_-9.c"
  ]) );

}

