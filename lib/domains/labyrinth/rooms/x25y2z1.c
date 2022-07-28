inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 1 }));
  set_short( "Hallway - x25y2z1" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y2z1.c",
  "north" : DIR+"/rooms/x25y3z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
