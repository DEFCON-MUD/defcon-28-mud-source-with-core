inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 7 }));
  set_short( "Passage - x49y6z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y6z7.c",
  "north" : DIR+"/rooms/x49y7z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
