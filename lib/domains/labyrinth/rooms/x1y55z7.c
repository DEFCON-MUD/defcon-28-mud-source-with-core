inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 7 }));
  set_short( "Hallway - x1y55z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z7.c",
  "south" : DIR+"/rooms/x1y54z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
