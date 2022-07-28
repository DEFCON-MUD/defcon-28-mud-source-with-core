inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 4 }));
  set_short( "Passage - x35y28z4" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y28z4.c",
  "north" : DIR+"/rooms/x35y29z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
