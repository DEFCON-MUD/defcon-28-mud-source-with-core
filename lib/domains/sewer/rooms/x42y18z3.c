inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 18, 3 }));
  set_short( "Hallway - x42y18z3" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y18z3.c",
  "east" : DIR+"/rooms/x43y18z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
