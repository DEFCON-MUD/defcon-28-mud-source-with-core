inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 3 }));
  set_short( "Hallway - x26y44z3" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z3.c",
  "east" : DIR+"/rooms/x27y44z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
