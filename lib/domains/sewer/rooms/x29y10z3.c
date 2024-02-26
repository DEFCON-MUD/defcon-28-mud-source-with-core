inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 3 }));
  set_short( "Hallway - x29y10z3" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y10z3.c",
  "south" : DIR+"/rooms/x29y9z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
