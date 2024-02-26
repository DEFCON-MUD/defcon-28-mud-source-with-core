inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 61, 3 }));
  set_short( "Hallway - x51y61z3" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y62z3.c",
  "south" : DIR+"/rooms/x51y60z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
