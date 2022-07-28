inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 3 }));
  set_short( "Corridor - x35y60z3" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y60z3.c",
  "south" : DIR+"/rooms/x35y59z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
