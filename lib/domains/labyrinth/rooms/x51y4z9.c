inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 9 }));
  set_short( "Passage - x51y4z9" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y4z9.c",
  "north" : DIR+"/rooms/x51y5z9.c",
  "south" : DIR+"/rooms/x51y3z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
