inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 44, 9 }));
  set_short( "Hallway - x60y44z9" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y44z9.c",
  "east" : DIR+"/rooms/x61y44z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
