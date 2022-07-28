inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 0 }));
  set_short( "Hallway - x25y6z0" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y6z0.c",
  "south" : DIR+"/rooms/x25y5z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
