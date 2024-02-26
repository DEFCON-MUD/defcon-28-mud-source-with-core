inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 49, 3 }));
  set_short( "Hallway - x31y49z3" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y50z3.c",
  "south" : DIR+"/rooms/x31y48z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
