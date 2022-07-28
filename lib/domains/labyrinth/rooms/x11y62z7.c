inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 7 }));
  set_short( "Hallway - x11y62z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y62z7.c",
  "south" : DIR+"/rooms/x11y61z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
