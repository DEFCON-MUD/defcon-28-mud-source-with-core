inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 52, 6 }));
  set_short( "Hallway - x20y52z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y52z6.c",
  "east" : DIR+"/rooms/x21y52z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
