inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 49, 18, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Passage" );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^" );

  set_objects(
    DIR+"/npc/technician.c"
  );
 set_exits( ([
  "east" : DIR+"/rooms/50_18_-4.c",
  "north" : DIR+"/rooms/49_17_-4.c"
  ]) );

}

