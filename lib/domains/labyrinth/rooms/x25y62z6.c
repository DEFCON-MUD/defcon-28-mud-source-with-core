inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 6 }));
  set_short( "Hallway - x25y62z6" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y62z6.c",
  "south" : DIR+"/rooms/x25y61z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
