inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 61, 1 }));
  set_short( "Hallway - x53y61z1" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y62z1.c",
  "south" : DIR+"/rooms/x53y60z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
