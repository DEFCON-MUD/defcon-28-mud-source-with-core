inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 6 }));
  set_short( "Hallway - x23y50z6" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y50z6.c",
  "south" : DIR+"/rooms/x23y49z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
