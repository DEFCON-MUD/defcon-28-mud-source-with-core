inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 7 }));
  set_short( "Passage - x25y42z7" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z7.c",
  "east" : DIR+"/rooms/x26y42z7.c",
  "south" : DIR+"/rooms/x25y41z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
