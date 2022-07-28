inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 9 }));
  set_short( "Hallway - x3y50z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y50z9.c",
  "north" : DIR+"/rooms/x3y51z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
