inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 8 }));
  set_short( "Hallway - x11y26z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z8.c",
  "east" : DIR+"/rooms/x12y26z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
