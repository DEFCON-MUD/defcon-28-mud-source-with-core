inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 59, 9 }));
  set_short( "Corridor - x33y59z9" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y60z9.c",
  "south" : DIR+"/rooms/x33y58z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
