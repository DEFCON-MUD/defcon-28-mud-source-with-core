inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 0 }));
  set_short( "Hallway - x29y40z0" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y40z0.c",
  "north" : DIR+"/rooms/x29y41z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
