inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 3 }));
  set_short( "Hallway - x25y47z3" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z3.c",
  "south" : DIR+"/rooms/x25y46z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
