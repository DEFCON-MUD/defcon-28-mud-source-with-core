inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 60, 64, -2 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/agent.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/59_64_-2.c",
  "east" : DIR+"/rooms/61_64_-2.c"
  ]) );

}

