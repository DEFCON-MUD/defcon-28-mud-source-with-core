inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 14, 2, -8 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/dba.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/13_2_-8.c",
  "east" : DIR+"/rooms/15_2_-8.c"
  ]) );

}

