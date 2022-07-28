inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 4 }));
  set_short( "Hallway - x11y54z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y55z4.c",
  "south" : DIR+"/rooms/x11y53z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
