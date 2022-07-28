inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 48, 3 }));
  set_short( "Hallway - x54y48z3" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y48z3.c",
  "east" : DIR+"/rooms/x55y48z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
