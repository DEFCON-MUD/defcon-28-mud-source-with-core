inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 0 }));
  set_short( "Hallway - x9y20z0" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y20z0.c",
  "north" : DIR+"/rooms/x9y21z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
