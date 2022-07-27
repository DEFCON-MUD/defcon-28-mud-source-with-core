inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 1 }));
  set_short( "Corridor - x41y10z1" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y10z1.c",
  "south" : DIR+"/rooms/x41y9z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
