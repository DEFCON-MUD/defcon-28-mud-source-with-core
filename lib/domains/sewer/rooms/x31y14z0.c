inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 0 }));
  set_short( "Hallway - x31y14z0" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y14z0.c",
  "north" : DIR+"/rooms/x31y15z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
