inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 61, 5, -7 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/goon.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/61_6_-7.c",
  "north" : DIR+"/rooms/61_4_-7.c"
  ]) );

}

