inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 3 }));
  set_short( "Corridor - x11y56z3" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z3.c",
  "north" : DIR+"/rooms/x11y57z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
