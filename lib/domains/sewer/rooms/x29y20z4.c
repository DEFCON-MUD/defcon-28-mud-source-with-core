inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 4 }));
  set_short( "Hallway - x29y20z4" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y20z4.c",
  "north" : DIR+"/rooms/x29y21z4.c",
  "south" : DIR+"/rooms/x29y19z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
