inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 19, 0 }));
  set_short( "Hallway - x5y19z0" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y20z0.c",
  "south" : DIR+"/rooms/x5y18z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
