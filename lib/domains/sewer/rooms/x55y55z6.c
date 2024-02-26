inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 6 }));
  set_short( "Hallway - x55y55z6" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z6.c",
  "south" : DIR+"/rooms/x55y54z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
