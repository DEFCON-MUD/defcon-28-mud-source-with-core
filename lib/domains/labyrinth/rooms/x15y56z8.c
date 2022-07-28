inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 56, 8 }));
  set_short( "Corridor - x15y56z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y56z8.c",
  "north" : DIR+"/rooms/x15y57z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
