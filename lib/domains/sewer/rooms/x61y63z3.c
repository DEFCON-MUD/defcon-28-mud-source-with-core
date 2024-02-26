inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 63, 3 }));
  set_short( "Corridor - x61y63z3" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y64z3.c",
  "south" : DIR+"/rooms/x61y62z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
