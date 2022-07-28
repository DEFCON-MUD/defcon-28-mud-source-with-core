inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 1 }));
  set_short( "Corridor - x11y56z1" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y56z1.c",
  "north" : DIR+"/rooms/x11y57z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
