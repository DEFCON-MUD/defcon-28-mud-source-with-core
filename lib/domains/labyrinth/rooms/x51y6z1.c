inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 1 }));
  set_short( "Hallway - x51y6z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y7z1.c",
  "south" : DIR+"/rooms/x51y5z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
